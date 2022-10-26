//
// Created by 杨敬华 on 2022/10/25.
//
//枚举
#include "stdio.h"
#include "string.h"
# include "stdlib.h"
#include "mm_malloc.h"

enum CommentType {
    TEXT = 10,
    TEXT_IMAGE,
    IMAGE
};
typedef enum CommentType com;

int main143333333() {
//    Clion 工具写法
    enum CommentType commentType = TEXT;
    enum CommentType commentType1 =TEXT_IMAGE ;
    enum CommentType commentType2= IMAGE;
    printf("%d,%d,%d",commentType,commentType1,commentType2);
//    VS写法
// CommentType enumCommentType=TEXT；
    com com1 = TEXT;
    return 0;
}
