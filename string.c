//
// Created by 杨敬华 on 2022/10/23.
//
#include "stdio.h"
int mainfafa(){
    char str[] ={'D','e','r','r','r','r','r','\0'};//这里的\0是给printf用的防止打印系统值
    str[2]='z';
    printf("第一种方式%s\n",str);
    char * Str2 = "yjh";
//    Str2[2]="x";
    printf("第二种方式%c\n",*(Str2+1));
    return 0;
}
