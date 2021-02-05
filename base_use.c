#include <stdio.h>
#include <stdbool.h>
#include "malloc.h"
#include "windows.h"
#include "time.h"

#include <assert.h>

#define _CRT_SECURE_NO_DEPRECATE

char * get_data() {
	char *d = "hello"; // 字符串常量存放在静态数据存储区
	printf("++p: %p\n",d);
	printf("++p: %p\n", &"hello");
	return d; // 返回字符串常量的地址，虽然d是栈上定义的，它指向的是字符串常量的地址，不会被释放
}

void right_shift_n(const char* src,char* dec,int n) {
	int len = strlen(src);
	int i;

	for (i = 0; i < len; i++) {
		dec[(i + n) % len] = src[i];
	}
	dec[len] = '\0';
}

#define MIN(a,b) (a>= b? b : a)

void static_test(void) {
	static int i = 0;
	i++;

	printf("static i: %d \n", i);
}

/* 大佬写的代码，看不懂 */
typedef int(*fun)(int);

int stp(int n) { return 0; }

int cum(int n) {
	fun idx[2];
	idx[1] = cum;
	idx[0] = stp;
	return idx[n && 1](n - 1) + n;
}

#define Bit3 (0x1<<3)
static int a;
// a或上0x00001000,其他位不变只有第三位变为1
void set_bit3() { a |= Bit3; }
// a与上0x11110111，其他位不变只有第三位清0
void clear_bit3() { a &= ~Bit3; }

// firstOnebit
int firstOneBit(unsigned int a) {
	int ret = 0;

	while ((a!=0)&&((a&1) == 0)) {
		a = a >> 1;
		ret++;
	}
	return ret;
}
// search
void search_different_ab(int *arry,int len,int *a,int *b) {
	int r = 0,flg = 0;
	for (int i = 0; i < len;i++) {
		r = r^arry[i];
	}
	flg = 1<<firstOneBit(r); //找出整数r，最开始置1的地方
	*a = 0;
	*b = 0;
	for (int i = 0; i < len;i++) {
		if (arry[i] & flg) {
			*a = *a ^ arry[i];
		}
		else {
			*b = *b ^ arry[i];
		}
	}
}

// 偏移方向
struct Offset
{
	int dx;
	int dy;
};

boolean valid(int (*m)[4],int x,int y,int n) {
	boolean ret = true;
	ret = ret && ((0<=x) && (x<n));
	ret = ret && ((0<=y) && (y<n));
	ret = ret && (m[x][y] == 0);
	return ret;
}
/* 构造椭圆矩阵，需要注意二维数据的另外一种访问形式 形参int **m，访问m[i*j+j] */
void ScrewMatrix(int (*m)[4],int n) {
	const struct Offset OFFSET[] = { {0,1},{1,0},{0,-1},{-1,0} }; // 四个偏移方向
	const int OSLEN = sizeof(OFFSET) / sizeof(struct Offset); // 偏移方向总数

	int cx = 0, cy = 0, cd = 0; //偏移坐标(x,y)，偏移方向d
	int i = 1;
	do
	{
		m[cx][cy] = i;
		// 检查下一个坐标位置是否符合偏移，如不符合则切换偏移方向
		if (!valid(m, cx+OFFSET[cd].dx, cy+OFFSET[cd].dy,n)) {
			cd = (cd + 1) % OSLEN;
		}
		// 偏移
		cx += OFFSET[cd].dx;
		cy += OFFSET[cd].dy;
		
		i++;
	} while (i <= (n*n));
}

void PrintMatrix(int(*m)[4], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("\t%d\t", m[i][j]);
		}
		printf("\n");
	}
}
// need to solve
void testMatrix(int **m, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("\t%d\t", m[i*j+j]);
		}
		printf("\n");
	}
}

void swap1(int * a,int * b) {
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void swap2(int * a, int * b) {
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
/*void swap1(int &a, int &b) {
	a = a + b;
	b = a - b;
	a = a - b;
}
void swap2(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void swap3(int &a, int &b) {
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}*/

int system_mod() {
	union
	{
		int a;
		char b;
	} c;
	c.a = 1;

	return c.b;
}

/*void foo() {
    unsigned int a = 6;
    int b = -20;
    (a + b>6) ? puts(">6") : puts("<=6");// 表达式中存在无符号和有符号类型时，所有操作数自动转换为无符号类型计算
}
*//* use "&" remaining *//*
void remaining() {
    int a = 34;
    a = a & 7;// '&' << >> 位移操作和 % / * 现在性能差不多，编译器指令集大多数情况下 % / * 比位移操作快
    printf("\nremaining a:%d", a);
}
 //	foo();
//	remaining();
 */
void strlen_sizeof() {
    char *test = "abcdA";
    char _test[] = "abcdA";
    char __test[6] = "abcdA";
    // 分别输出串长度、指针地址size、[]声明字符串会自动加\0结束符，即长度自动加1
    printf("test strlen :%d sizeof(test) :%d sizeof(_test) :%d\n",strlen(test),sizeof(test), sizeof(_test));
    // [6]声明字符串strlen取决于长度，sizeof取决于[]分配的大小，如使用memset的时候注意两个函数的区别
    printf("__test strlen :%d sizeof(test) :%d\n", strlen(__test), sizeof(__test));
}

void foo(int[][3]);

// 逗号表达式
void comma_use(){
    int a, b, c, d;
    a = 3;
    b = 5;
    c = a, b;
    d = (a, b);

    printf("c=%d \n", c);
    printf("d=%d \n", d);
}


int union_struct_use1() {

	/* 指针加减操作,注意数组a，a、&a、*a代表的不同意思 */
	/*
	int a[5] = { 1,2,3,4,5 };
	int * p = (int *)(&a + 1);
	printf("%d ,%d\n", *(a + 1), *(p - 5));
	*/

	/* 指向栈的指针 */
	//printf("get_data %s ,p: %p \n", get_data(),get_data());

	/* right_shift_n */
	
	//char str[] = "hello world!";
	//char dec[13] = {0};
	//right_shift_n(str, dec,1);
	//printf("%s ,dec: %s \n",str,dec);
	


	/* i++ , ++j , #define MIN */
	/*
	int i = 0, j = 0;
	printf("i++: %d\n", i++);
	printf("++j: %d\n", ++j);
	printf("MIN(4,5): %d\n", MIN(4,5));
	*/
	/* malloc use */
	/*
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
	*/

	//printf("kkk : %d\n", cum(5));// 1+2+3+4+5
	
	/* static局部变量 */
	/*
	static_test();
	static_test();
	*/
	
	//unsigned int x = 0x88888888;
	//x >>= 1;
	//printf("x= %#x\n",x); // %#，输出提示方式

	// a|=Bit3; // 第三位置1

	/*
	// 从两两成对的数中找出不成对的两个数a和b
	//printf("firstOneBit : %d",firstOneBit(8))
	int arry[12] = {2,2,3,3,5,4,4,5,6,6,12,23};
	int a = 0, b = 0;
	search_different_ab(&arry,12,&a,&b);
	printf("search different a: %d, b: %d \n",a,b);
	*/
	/* 打印n*n的螺旋矩阵 */
	/*
	int matrix[4][4] = { 0 };
	ScrewMatrix(matrix, 4);
	PrintMatrix(matrix, 4);
	int m[4][4] = {0};
	testMatrix(m, 4);
	*/
	/*
	unsigned int a = 86, b = 46;
	printf("a: %d, b: %d \n", a, b);
	swap2(&a, &b);
	printf("a: %d, b: %d \n", a, b);
	swap1(&a, &b);
	printf("a: %d, b: %d \n", a,b);
	*/

	/*
	char arry[10] = {0};	
	strcpy_s(arry,10,(const char *)"0123456789");
	printf("%s", arry);
	*/
	
	//int least = 0;
	//int a = 2;
	//int b = 6;

	//int * p = &a;
	//int k = 0;
	//least = MIN(*p++, b);// 引入垃圾值，左++ > * > 右++

	//printf("least %d \n",least);

	//int ** pp = 5;
	//printf("p %d \n", pp);

	//// 操作系统大小端
	//printf("return 1 is little mod,0 is big mod :%d \n",system_mod());
	//
	//int yy = 9, jj = 0;
	//yy = yy++ % 5; // 9除5 = 4，右边执行完后再赋值到左边，所以是5
	//jj = yy;
	//printf("%d \n",jj);



	//int a[][3] = { 1,2,3 ,4,5,6 };
	//int(*ptr)[3] = a;

	//printf("%d %d ", (*ptr)[1], (*ptr)[2]);

	//++ptr;
	//printf("%d %d", (*ptr)[1], (*ptr)[2]);
	//int a[3][3] = { { 1,2,3 } ,{ 4,5,6 },{ 7,8,9 } };
	//foo(a);
	//printf("%d, %d", a[2][1],a[1][1]);

	//int a[5] = { 1,2,3,4,5 };
	//
	//int *ptr = (int*)(&a + 1);
	//printf("addr: %p \n",ptr);

	//printf("%d %d", *(a + 1), *(ptr - 1));
	//printf("addr: %p \n", a);



	return 0;
}

void foo(int b[][3])
{
	++b;
	b[1][1] = 9;
}

