//
// Created by Prentiss on 2019-04-12.
//

#include <stdio.h>
#include <stdlib.h>

void test(){
    int c;
    FILE *in,*out;

    in = fopen("07_file.txt","r");

    out = fopen("07_fileout.txt","w");

    while((c = fgetc(in)) != EOF)
        fputc(c,out);
    //第一次写的时候c==fgetc(in)
}


int main(){
    test();

    return 0;
}