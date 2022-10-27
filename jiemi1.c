//
// Created by 杨敬华 on 2022/10/27.
//
#include "stdio.h"
#include "string.h"
# include "stdlib.h"
#include "mm_malloc.h"
int main1214dsd(){
    char * fileNameStr = "/Users/yangjinghua/CLionProjects/untitled/jiamidel.png";
    char * fileNameStrDecode = "/Users/yangjinghua/CLionProjects/untitled/jiemidel.png";
    FILE * file = fopen(fileNameStr,"rb");
    FILE * fileencode = fopen(fileNameStrDecode,"wb");
    if (!fileNameStr||!fileNameStrDecode){
        printf("文件打开失败");
        exit(0);
    }
    int c;
    while ((c= fgetc(file))!=EOF){
        fputc(c ^5,fileencode);
    }
    fclose(file);
    fclose(fileencode);
    return 0;
}