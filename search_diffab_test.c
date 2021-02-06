//
// Created by housaibang on 2021-02-05.
//
#include <stdio.h>

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

void search_difab_test(){
    // 从两两成对的数中找出不成对的两个数a和b
    int arry[12] = {2,2,3,3,5,4,4,5,6,6,12,23};
    int a = 0, b = 0;
    search_different_ab(arry,12,&a,&b);
    printf("search different a: %d, b: %d \n",a,b);
}