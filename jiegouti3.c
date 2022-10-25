//
// Created by 杨敬华 on 2022/10/25.
//

#include "stdio.h"
#include "string.h"
# include "stdlib.h"
#include "mm_malloc.h"
struct Cat2{
    char name[10];
    int age;
};
int mainjiegouti3(){
    struct Cat2 *cat2 = malloc(sizeof (struct Cat2));
    strcpy(cat2,"jm");
    cat2->age=5;
    printf("pCat:%s\n",cat2->name);
    printf("pCat:%d\n",cat2->age);
    if (cat2){
        free(cat2);
        cat2=NULL;
    }
    return 0;
}