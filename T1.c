//
// Created by 杨敬华 on 2022/10/17.
//

#include <printf.h>

void add(int num1, int num2){
    printf("输出内容%d",(num1+num2));
}
void test(void(*p)(int,int)){
    p(1,3);
}
int main1(){
    test(add);
    return 0;
}