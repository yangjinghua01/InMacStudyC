//
// Created by 杨敬华 on 2022/10/17.
//

#include <stdlib.h>
#include <time.h>
#include "stdio.h"
int mainT2(){
//    时间单位
    srand((unsigned )time(NULL));
    int i;
    for (i = 0;  i<10 ; ++i) {
        printf("随机书%d\n", rand()%100);
    }
    return 0;
}