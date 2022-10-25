//
// Created by 杨敬华 on 2022/10/24.
//

#include "stdio.h"
#include "string.h"
# include "stdlib.h"
#include "mm_malloc.h"

struct Dog {
//    成员
    char name[10];
    int age;
    char sex;
};//必须写结束号
int mainjiegouti() {
    struct Dog dog;//这样写完成员是没有初始化的，成员默认值是系统值。
    strcpy(dog.name, "旺财");
    dog.age = 2;
    dog.sex = "G";
    printf("name:%s,age:%d,sex:%c", dog.name, dog.age, dog.sex);

    return 0;
}