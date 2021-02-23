#include <stdio.h>
#include <stdbool.h>
#include "malloc.h"
#include "windows.h"
#include "time.h"

#define FUNC_START printf("test--->fun: %s\n", __func__)

char * get_data() {
	char *d = "hello"; // 字符串常量存放在静态数据存储区
	printf("++p: %p\n",d);
	printf("++p: %p\n", &"hello");
	return d; // 返回字符串常量的地址，虽然d是栈上定义的，它指向的是字符串常量的地址，不会被释放
}

void stack_point_test(){
    /* 指向栈的指针 */
    printf("get_data %s ,p: %p \n", get_data(),get_data());
}

void right_shift_n(const char* src,char* dec,int n) {
	int len = strlen(src);
	int i;

	for (i = 0; i < len; i++) {
		dec[(i + n) % len] = src[i];
	}
	dec[len] = '\0';
}

void str_shift_test(){
    char str[] = "hello world!";
    char dec[13] = {0};
    right_shift_n(str, dec,1);
    printf("%s ,dec: %s \n",str,dec);
}

#define MIN(a,b) (a>= b? b : a)

/* static局部变量 */
void static_test() {
	static int i = 0;
	i++;

	printf("static i: %d \n", i);
}

void sign_unsign_operation() {
    FUNC_START;
    unsigned int a = 6;
    int b = -20;
    (a + b>6) ? puts(">6") : puts("<=6");// 表达式中存在无符号和有符号类型时，所有操作数自动转换为无符号类型计算
}

// a或上0x00001000,其他位不变只有第三位变为1
void set_bit(char *a,char s) {
    unsigned char h = 0x1<<s;
    *a |= h;
}
// a与上0x11110111，其他位不变只有第三位清0
void clear_bit(char *a,char s) {
    unsigned char h = 0x1<<s;
    *a &= ~h;
}
void bit_operation() {
    FUNC_START;
    // use "&" remaining
    int a = 34;
    a = a & 7;// '&' << >> 位移操作和 % / * 现在性能差不多，编译器指令集大多数情况下 % / * 比位移操作快
    printf("\nremaining a:%d", a);

    unsigned char v = 0xF0;
    printf(" %2x \n",v);
    set_bit(&v, 0);
    printf(" %2x \n",v);
    clear_bit(&v, 0);
    printf(" %2x \n",v);
}

void strlen_sizeof() {
    FUNC_START;
    char *test = "abcdA";
    char _test[] = "abcdA";
    char __test[6] = "abcdA";
    // 分别输出串长度、指针地址size、[]声明字符串会自动加\0结束符，即长度自动加1
    printf("test strlen :%d sizeof(test) :%d sizeof(_test) :%d\n",strlen(test),sizeof(test), sizeof(_test));
    // [6]声明字符串strlen取决于长度，sizeof取决于[]分配的大小，如使用memset的时候注意两个函数的区别
    printf("__test strlen :%d sizeof(test) :%d\n", strlen(__test), sizeof(__test));
}

// i++ , ++j ,#define MIN
// 逗号表达式
void comma_define_add_operator(){
    int a, b, c, d;
    a = 3;
    b = 5;
    c = a, b;
    d = (a, b);

    printf("c=%d \n", c);
    printf("d=%d \n", d);

    int i = 0, j = 0;
    printf("i++: %d\n", i++);
    printf("++j: %d\n", ++j);
    printf("MIN(4,5): %d\n", MIN(4,5));
}

/* malloc use */
void malloc_use(){
	int* i = (int*)malloc(10*sizeof(int));
	printf("===%d\n", 10 * sizeof(int));
	for (int j = 0; j < 10;j++) {
		i[j] = j;
	}

	for (int j = 0; j < 10; j++) {
		printf("%d \n", i[j]);
	}
	free(i);
	i = NULL;
}

void arry_point_diff(){
    FUNC_START;

    /* 指针加减操作,注意数组a，a、&a、*a代表的不同意思 */
    int a[5] = { 1,2,3,4,5 };
    int * p = (int *)(&a + 1);
    // = (unsigned int)(&a) +sizeof(*&a) *&低效
    //   (unsigned int)(&a) +sizeof(a)
    printf("%d ,%d\n", *(a + 1), *(p - 5));
}

void operation_priority(){
    FUNC_START;
    int min = 0;
    int a = 3;
    int b = 6;
    int * p = &a;
    min = MIN(*p++, b);// 引入垃圾值，左++ > * > 右++
    printf("p %d \n",*p);

    printf("min %d \n", min);
}

void foo(int b[][3])
{
	++b;
	b[1][1] = 9;
}

void rank2_point(){
    FUNC_START;

    int t[][3] = { 1,2,3 ,4,5,6 };
    int(*ptr)[3] = t;

    printf("%d %d ", (*ptr)[1], (*ptr)[2]);

    ++ptr;
    printf("%d %d", (*ptr)[1], (*ptr)[2]);
    int a[3][3] = { { 1,2,3 } ,{ 4,5,6 },{ 7,8,9 } };
    foo(a);
    printf("%d, %d", a[2][1],a[1][1]);
}


void base_test(){
    arry_point_diff();
    static_test();
    static_test();
    malloc_use();
    comma_define_add_operator();
    stack_point_test();
    rank2_point();
    sign_unsign_operation();
    operation_priority();
    bit_operation();
    strlen_sizeof();
    str_shift_test();
}
