//
// Created by 杨敬华 on 2022/10/17.
//
#include "stdio.h"
#include "string.h"
int mainT3(){
//    c语言非0就是ture 0 == false
    char string[10]; //定义一个数组
    char * string1 = "abcdefghi";//就是把string复制到数组
    strcpy(string,string1);
    printf("%s\n",string);//打印
    return 0;
}
