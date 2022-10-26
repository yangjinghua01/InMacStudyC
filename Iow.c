//
// Created by 杨敬华 on 2022/10/26.
//
#include "stdio.h"
#include "string.h"
# include "stdlib.h"
#include "mm_malloc.h"
int mainxieru(){
    char * fileNameStr = "/Users/yangjinghua/CLionProjects/untitled/10.txt";
    FILE *file = fopen(fileNameStr, "w");
    if (!file) {
        printf("文件打开失败");
        exit(0);
    }
    fputs("c语言代码写入成功",file);
    fclose(file);
    return 0;
}
