//
// Created by housaibang on 2021-02-04.
//
#include <stdbool.h>
#include <stdio.h>
#include "math.h"
#include <time.h>

bool isPrime(long p) {
    long i;
    long end = (long)sqrt((double)p);
    for (i = 2; i <= end;i++) {
        if ((p%i) == 0)
            break;
    }
    return i > end ? true : false;
}

bool chkEvenNumIsOk(long a) {
    long end = a/2;
    long i;
    for (i = 2; i <= end; i++) {
        if (isPrime(i)&&isPrime(a-i)) { // 两个数都是素数
            printf("%d = %d + %d \n",a,i,a-i);
            return true;
        }
    }
    return false;
}

#define GOLDBACH_SIZE     360

void lexin_goldbach_test(){
    time_t t;
    struct tm * lt;
    time(&t);//获取Unix时间戳。
    lt = localtime(&t);//转为时间结构。
    printf("%d/%d/%d %d:%d:%d\n", lt->tm_year + 1900, lt->tm_mon, lt->tm_mday, lt->tm_hour, lt->tm_min, lt->tm_sec);//输出结果
    long k;
    int flg = GOLDBACH_SIZE;
    for (k = 4; k <= GOLDBACH_SIZE; ) {
        if (chkEvenNumIsOk(k)==false) {
            flg--;
        }
        k += 2;
    }
    if (flg == GOLDBACH_SIZE) printf("goldbach right!\n");
    time(&t);
    lt = localtime(&t);
    printf("%d/%d/%d %d:%d:%d \n", lt->tm_year + 1900, lt->tm_mon, lt->tm_mday, lt->tm_hour, lt->tm_min, lt->tm_sec);
}
