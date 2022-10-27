 //
// Created by 杨敬华 on 2022/10/27.
// 加密文件
#include "stdio.h"
#include "string.h"
# include "stdlib.h"
#include "mm_malloc.h"
int main123(){
    char * fileNameStr = "/Users/yangjinghua/CLionProjects/untitled/del.png";
    char * fileNameStrEncode = "/Users/yangjinghua/CLionProjects/untitled/jiamidel.png";
    FILE * file = fopen(fileNameStr,"rb");
    FILE * fileencode = fopen(fileNameStrEncode,"wb");
    if (!fileNameStr||!fileNameStrEncode){
        printf("文件打开失败");
        exit(0);
    }
    int c;
//    返回值
    while ((c= fgetc(file))!=EOF){
        fputc(c ^5,fileencode);
    }
    fclose(file);
    fclose(fileencode);
    return 0;
}

