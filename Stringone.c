//
// Created by 杨敬华 on 2022/10/23.
//
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int mainqaz() {
    char *text = "name is Yjh";
    char *subtext = "Y";
    char *pop = strstr(text, subtext);
//    怎么区查找
    if (pop) {//非null 就进入了if查找到了
        printf("查找的是，%s\n", pop);
    } else {
        printf("没有查找到,%s\n", subtext);
    }
    int index = pop - text;
    printf("第一次出现的位置：%d\n", index);
//    拼接
    char destination[25];
    char *blank = "to", *cpp = "Cpp", *java = "Java";
    strcpy(destination,cpp);//先copy到数组
    strcat(destination,blank);//在拼接
    strcat(destination,java);//在拼接
    printf("%s\n",destination);
    return 0;
}