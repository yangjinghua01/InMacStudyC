//
// Created by 杨敬华 on 2022/10/25.
//

#include "stdio.h"
#include "string.h"
# include "stdlib.h"
#include "mm_malloc.h"

struct Cat3 {
    char name[10];
    int age;
};

int mainjiegoutiarr() {
//    静态开辟 栈区
    struct Cat3 cat3[10] = {
            {"0", 0},
            {"1", 1},
            {"2", 2},
            {"3", 3},
            {"4", 4},
            {"5", 5},
            {"6", 6},
            {"7", 6},
            {"8", 6},
            {"9", 6},
    };
//     VS 写法
//    cat3[9] = {"g9", 0};
//      Clion 写法
    struct Cat3 cat = {"g9", 1};
//    cat3[9] = cat;
    *(cat3 + 9) = cat;
    printf("pCat:%s\n",cat.name);
    printf("pCat:%d\n",cat.age);
    for (int i = 0; i < 10; ++i) {
        printf("cat3:%s\n",cat3[i].name);
    }

    struct Cat3 * cat4 = malloc(sizeof (struct Cat3)*10);
    strcpy(cat4->name,"11");
    cat4->age=1;
    strcpy(cat4[1].name,"22");
    cat4[1].age=2;
    for (int i = 0; i < 10; ++i) {
        printf("cat4的name:%s，cat4的age:%d\n",cat4[i].name,cat4[i].age);
    }
    free(cat4);
    cat4 =NULL;
    return 0;
}