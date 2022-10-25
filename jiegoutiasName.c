//
// Created by 杨敬华 on 2022/10/25.
//

#include "stdio.h"
#include "string.h"
# include "stdlib.h"
#include "mm_malloc.h"

struct Woekedr_ {
    char name[10];
    int age;
};
typedef struct Woekedr_;
typedef  struct Woekedr_ * Workder ;
int main233(){
    Workder workder = malloc(sizeof (Workder));
    return 0;
}
