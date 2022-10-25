//
// Created by 杨敬华 on 2022/10/24.
//

#include "stdio.h"
#include "string.h"
# include "stdlib.h"
#include "mm_malloc.h"
struct Cat{
    char name[10];
    int age;
};
int mainjiegouti2(){
    struct Cat cat={"mao",1};
    struct Cat * pCat = &cat;
    strcpy(pCat->name,"sjfjfj");
    pCat->age=1;
    printf("pCat:%s\n",pCat->name);
    printf("pCat:%d\n",pCat->age);
    return 0;
}
