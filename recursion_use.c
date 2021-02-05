//
// Created by housaibang on 2021-02-04.
//
#include <assert.h>
#include <stdio.h>

int strlen_my(char *p) {
    return assert(p), *p ? (1 + strlen_my(p + 1)) : 0;
}

int fbnac_my(int n) {
    if (n == 1) return 1;
    else if (n == 2) return 1;
    else return fbnac_my(n - 1) + fbnac_my(n - 2);

    return -1;
}

void han_move(int n,char a,char b,char c) {
    if (n==1) {
        printf("%c --> %c \n",a,c);
    }
    else {
        han_move(n-1,a,c,b);
        han_move(1,a,b,c);
        han_move(n-1,b,a,c);
    }
}

void recursion_test(){
    printf("strlen: %d\n", strlen_my("")); // 一行代码实现strlen
    printf("fbnac(1): %d\n", fbnac_my(1));
    printf("fbnac(2): %d\n", fbnac_my(2));
    printf("fbnac(5): %d\n", fbnac_my(5)); // 斐波那契数列 1 1 2 3 5

    han_move(4,'a','b','c');
}

