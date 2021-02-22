#include "./var.h"
#include <stdio.h>

int extern_use() {
	f();
    g_a = 1;
    g_x = 'x';
    printf("extern_use \n");
    return 0;
}