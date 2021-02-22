#include "./var.h"
#include <stdio.h>

// 定义一次
int g_a = 0;
char g_x = 0;

void f() {
    printf("extern_f \n");
    g_a = 1;
	g_x = 'x';
}