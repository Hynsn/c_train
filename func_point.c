#include "stdio.h"

// 函数指针，int(*func)(int,int);
typedef int(*Func) (int,int);// typedef定义代码移植考虑

int add(int a, int b) {
	return a + b;
}
void func_point_use1() {
	Func fun = &add;
	printf("\nfun = %d", fun(3,4));
}

struct Tom{
    int x,y;
    int(*eat)(int); //函数指针
};
int eat(int x)
{
    if (x<=0) {
        return 0;// 0 未吃饱
    }
    else return 1;// 1 吃饱
}

void func_point_use2() {
	struct Tom cat;
	cat.eat = &eat;
	printf("\n cat eat: %d", cat.eat(8));
}
