//
// Created by 杨敬华 on 2022/10/23.
//
#include "stdio.h"
//int getlength(char *string){
//    int count =0;
//    while (*string){
//        string++;
//        count++;
//    }
//    return count;
//}
//int main(){
//    char string []={'a','b','c','\0'};
//    int len = getlength(&string);
//    printf("%d",len);
//    return 0;
//}
void gerlen(int  arr[]){
    int ln = sizeof(arr) /sizeof (int);
    printf("test3,%d\n",ln);
        int count =0;
    while (*arr){
        arr++;
        count++;
    }
    printf("test4,%d\n",count);
}
int main099(){
    char string []={'a','b','c','\0'};
    int len = sizeof string/sizeof (char);
    printf("test1,%d\n",len);
    int arr[]={1,3,4,2,5};
    int ln = sizeof arr /sizeof (int );
    printf("test2,%d\n",ln);
    gerlen(&arr);
    return 0;
}

