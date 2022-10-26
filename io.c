//
// Created by 杨敬华 on 2022/10/26.
//
#include "stdio.h"
#include "string.h"
# include "stdlib.h"
#include "mm_malloc.h"

int mainwerq() {
    //fopen() 打开文件的意思（参数 1： 文件路径。 参数2： 模式r（读）w（写）rb （作为二进制文件读）rw（作为二进制文件写） 返回file结构体）
    char *fileNameStr = "/Users/yangjinghua/CLionProjects/untitled/1.txt";
    FILE *file = fopen(fileNameStr, "r");
    if (!file) {
        printf("文件打开失败");
        exit(0);
    }
//    先定义缓冲区
    char buffer[10];
//    1.缓冲区  2长度 3文件指针
    while (fgets(buffer, 10, file)) {
        printf("%s",buffer);
    }
    return 0;
}