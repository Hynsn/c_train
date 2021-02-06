#include <stdio.h>
#include "var.h"

int g_a;
char g_x;
void f();

int extern_use() {
	f();
    g_a = 1;
    g_x = 'x';
	return 0;
}