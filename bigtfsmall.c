//
// Created by 杨敬华 on 2022/10/23.
//
#include "stdio.h"
#include <ctype.h>
void lower(char dest[20],char * name){
    while (*name){
        *dest = tolower(*name);
        name++;
        dest++;
    }
    *dest='\0';

}
int main0kkk() {
    char * name = "YJH";
//    定义结果
    char dest[20];
    lower(dest,name);
    printf("大小写转化后的结果是：%s", dest);
    return 0;
}