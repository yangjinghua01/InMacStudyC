//
// Created by 杨敬华 on 2022/10/23.
//

#include "stdio.h"
void submint(char result[20], char *str, int *start, int *end) {
    int count = 0;
    char * temp = str;
    while ((*end)--) {
        temp++;
        count++;
        if (count >= *start) {
            *result = *temp;
            printf("%c\n", *temp);
            result++;
        }
        *result = '\0';
    }
}
void submintAction(char * result, char *str, int *start, int *end) {
    char * temp = str;
    int count = 0;
    while (*temp) {
        if (count >= *start && count <= *end) {
            *result = *temp;
            result++;
        }
        temp++;
        count ++;
    }
}

int main() {
    char *str = "Derry is";
    char result[20];
    char * result2;
    int start = 2;
    int end = 5;
//    submint(result, str, &start, &end);
    submintAction(result2, str, &start, &end);
    printf("result:%s\n", result2);
    return 0;
}