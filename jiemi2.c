//
// Created by 杨敬华 on 2022/10/27.
//
#include "stdio.h"
#include "string.h"
# include "stdlib.h"
#include "mm_malloc.h"
int main(){
    char * fileNameStr  = "/Users/yangjinghua/CLionProjects/untitled/jiamidel123.png";
    char *fileNameStrEncode  = "/Users/yangjinghua/CLionProjects/untitled/jiemidel123.png";
    //    密钥
    char *password = "123456";
    FILE * file = fopen(fileNameStr,"rb");
    FILE * fileencode = fopen(fileNameStrEncode,"wb");
    if (!fileNameStr||!fileNameStrEncode){
        printf("文件打开失败");
        exit(0);
    }
    int c;
    int  index =0;
    int Pass_len = strlen(password);
    while ((c = fgetc(file))!=EOF){
        char item = password[index%Pass_len];
        printf("item:%c",item);
        fputc(c^item,fileencode);
        index ++;
    }
    fclose(file);
    fclose(fileencode);
    return 0;
}
