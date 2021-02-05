//
// Created by housaibang on 2021-02-04.
//

#ifndef _UNION_STRUCT_USE_H
#define _UNION_STRUCT_USE_H
#include <stdio.h>
#include <string.h>

typedef unsigned char UINT8;

struct FLAG {
    UINT8 bit0 : 1;
    UINT8 bit1 : 1;
    UINT8 bit2 : 1;
    UINT8 bit3 : 1;
    UINT8 bit4 : 1;
    UINT8 bit5 : 1;
    UINT8 bit6 : 1;
    UINT8 bit7 : 1;
};
// 联合体里面套用结构体
union FLAGS { UINT8 byte; struct FLAG bit;};

volatile union FLAGS net_flag;
#define DEV_DIS         net_flag.bit.bit0
#define ON		1

//联合体的特性
void union_strict_use1(){
    union FLAGS flags;
    flags.byte = 8;

    printf(" flags 's size :%d value :%d \n",sizeof(flags.bit),flags.bit.bit2);

    flags.bit.bit0 = 0;
    flags.bit.bit1 = 0;
    flags.bit.bit2 = 1;
    flags.bit.bit3 = 1;
    printf(" flags 's size :%d value :%d \n", sizeof(flags.bit), flags.byte);
}

struct entity { char char0; char char1; char char2; char char3; unsigned short char4;};
union name{ char _name[7]; struct entity Fname;};

union name myname;
void union_strict_use2(){
    char *test = "abcdB";
    printf("myname.Fname char4 1 :%d\n", myname.Fname.char4);

    strncpy(myname._name,test,strlen(test));
    printf("myname.Fname char4 2 :%d\n", myname.Fname.char4);

    printf("sizeof char, unsigned short, int :%d, %d\n", sizeof(char),sizeof(unsigned short));

    printf("myname size :%d\n",sizeof(myname));
    printf("myname._name size :%d\n", sizeof(myname._name));
    printf("myname.Fname size :%d\n", sizeof(myname.Fname));
    printf("myname.Fname char4 :%d\n", myname.Fname.char4);

    printf("myname.Fname include :%c %c %c %c %c \n", myname.Fname.char0, myname.Fname.char1, myname.Fname.char2, myname.Fname.char3, myname.Fname.char4);
}

#endif //_UNION_STRUCT_USE_H
