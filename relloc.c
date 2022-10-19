//
// Created by 杨敬华 on 2022/10/18.
//
#include <stdlib.h>
#include "stdio.h"
int main(){
    int num;
    printf("请输入数字的个数：");
    scanf("%d",&num);
    int *arr =(int*)malloc(sizeof (int)* num);
    for (int i = 0; i < num; ++i) {
        arr[i]=(i+1001);
        printf("第%d个值%d\n，地址为%p\n",i,arr[i],&arr+i);
    }

    int newnum;
    printf("请输入新增的个数");
    scanf("%d",&newnum);
    int *newarr = (int*)realloc(arr,sizeof (int)* (num+newnum));
    int j = num;
    if (newarr){
        for ( j;j < (num+newnum); j++) {
            arr[j] =(j+1001);
            printf("第%d个值%d\n，地址为%p\n",j,arr[j],&arr+j);
        }
    }

    return 0;
}