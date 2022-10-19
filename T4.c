//
// Created by 杨敬华 on 2022/10/17.
//
#include <stdlib.h>
#include "stdio.h"

int mainT4() {
//    静态内存空间大小是不能修改的，如果不需要动态修改空间大小当然使用栈区
    int arr[6];
//    开辟空间想要变化，动态范畴
    int num = 0;
    printf("请输入数的个数");
    scanf("%d",&num);
//    动态开辟用户输入的值空间大小
    int *arr1 = malloc(sizeof (int)*num);
    int print_num;
    for (int i = 0; i < num; ++i) {
        printf("第%d个",i);
        scanf("%d",&print_num);
        arr1[i]= print_num;
        printf("述职%d，地址%p",*(arr1+i),&arr1+i);
    }
    return 9;
}