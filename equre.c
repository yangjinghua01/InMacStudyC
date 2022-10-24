//
// Created by 杨敬华 on 2022/10/23.
//

#include <stdio.h>
#include "stdlib.h"
#include "string.h"

int main456() {
//    字符串转int
    char *num = "1";
    int result = atoi(num);
    if (result) {
        printf("转化成功：%d\n", result);
    }
//    字符串比较
    char *str1 = "yjh";
    char *str2 = "Yjh";
    int resultC = strcmp(str1, str2);//该函数判断的时候会对比大小写
    int resultC2 = strcasecmp(str1, str2);//该函数判断的时候不区分大小写
    if (!resultC){ //0代表相等 非0 不想等
        printf("相等");
    } else{
        printf("不相等");
    }
    if (!resultC2){ //0代表相等 非0 不想等
        printf("相等");
    } else{
        printf("不相等");
    }
    return 0;
}