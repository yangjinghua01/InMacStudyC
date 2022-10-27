//
// Created by 杨敬华 on 2022/10/26.
//
#include "stdio.h"
#include "string.h"
# include "stdlib.h"
#include "mm_malloc.h"
int mainioasek(){
    char *fileNameStr = "/Users/yangjinghua/CLionProjects/untitled/1.txt";
    FILE *file = fopen(fileNameStr, "rb");
    if (!file) {
        printf("文件打开失败");
        exit(0);
    }
    fseek(file,0,SEEK_END);
    long len = ftell(file);
    printf("%s文件的字节:%ld,",fileNameStr,len);
    return 0;
}
