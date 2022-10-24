//
// Created by 杨敬华 on 2022/10/23.
//
#include "stdio.h"
int mainhuatu(){
    int arr[]={6,4,8,3,1,2,9,7,0,5};
    int result = arr[*arr+*(arr+4)];
    printf("%d",result);
    return 0;
}