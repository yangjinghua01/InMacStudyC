//
// Created by 杨敬华 on 2022/10/26.
//
#include "stdio.h"
#include "string.h"
# include "stdlib.h"
#include "mm_malloc.h"
int main234(){
    char * fileNameStr = "/Users/yangjinghua/CLionProjects/untitled/1.txt"; //来源
    char * fileNameStrCopy = "/Users/yangjinghua/CLionProjects/untitled/2.txt";//目标
    FILE  * file = fopen(fileNameStr,"rb");
    FILE  * fileCopy = fopen(fileNameStrCopy,"wb");
    if (!fileNameStr||!fileNameStrCopy){
        printf("文件打开失败");
        exit(0);
    }
    int buffer[1024];
    int len;//每次读取的长度
//    fread : 参数1 容器 buffer 参数2 每次偏移多少  参数3 容器大小
    while ((len = fread(buffer,sizeof (int),sizeof (buffer)/sizeof(int),file))!=0){
        fwrite(buffer,sizeof (int),len,fileCopy);
    }
    fclose(file);
    return 0;
}
