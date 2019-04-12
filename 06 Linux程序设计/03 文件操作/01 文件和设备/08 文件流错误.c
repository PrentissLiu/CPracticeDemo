//
// Created by Prentiss on 2019-04-12.
//

#include <errno.h>

extern int errno;

void test(){
    errno("bad news")
}

int main(){
    test();

    return 0;
}