//
// Created by 杨敬华 on 2022/10/24.
//
#include "stdio.h"
#include "string.h"
# include "stdlib.h"
#include "mm_malloc.h"

struct Person {
    char *name;
    int age;
    char sex;
}
        ppp = {
        "huazi",
        12,
        'n'}, ppp2, ppp3, ppp5;

int mainjiegouti1() {
    printf("name:%s,age:%d,sex:%c\n", ppp.name, ppp.age, ppp.sex);
//    strcpy(ppp5.name,"hg");
    ppp5.name = "ddd";
    ppp5.sex = "n";
    ppp5.age = 1;
    printf("name:%s,age:%d,sex:%c", ppp5.name, ppp5.age, ppp5.sex);
    return 0;
}