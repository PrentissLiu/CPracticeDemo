//
// Created by prentiss on 19-4-13.
//

//始终没有想通这段程序是想要干什么啊
//其实是说想把文件读取之后映射到内存中
//13章有 System V共享内存的方法

#include <unistd.h>
#include <stdio.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdlib.h>

typedef struct{
    int integer;
    char string[24];
} RECORD;

#define NRECORDS 100

int test1(){
    RECORD record ,*mapped;
    int i,f;
    FILE *fp;

    fp = fopen("./10_records.txt","w");
    for(i = 0;i<NRECORDS;i++) {
        record.integer = i;
        sprintf(record.string, "RECORD   %d\n", i);
        fwrite(&record, sizeof(record), 1, fp);
    }
    fclose(fp);

    fp =fopen("records.dat","r+");
    fseek(fp,43*sizeof(record),SEEK_SET);
    //文件描述符 占用的存储

    fread(&record,sizeof(record),1,fp);
    //从文件流中读取数据,最多读取count个,每个size个字节,如果不成功返回0

    record.integer = 143;
    sprintf(record.string,"RECORD-%d",record.integer);
    //把格式化的数据写入字符串缓冲区 第一个参数char型指针,指向要写入的字符串缓冲区
    //第二个参数格式化字符串        第三个参数可选参数 可以是任何类型的数据

    fseek(fp,43*sizeof(record),SEEK_SET);
    //第一个参数文件描述符,第一二个从哪里结束  SEEK_SEK是从开头

    fwrite(&record,sizeof(record),1,fp);
    //FILE *__restrict __s  指的是文件描述符

    fclose(fp);
    //把f指向文件0地址开始大小为NRECORDS*sizeof(record)映射到内存处，返回内存起始地址
    //---------------------------------------------------------------------
    //把文件映射到内存去,并改变内存中其值,等于就是在改变文件中的内容的!!
    //---------------------------------------------------------------------
    f = open("./10_records.txt",O_RDWR);
    mapped = (RECORD *)mmap(0, NRECORDS*sizeof(record),
                            PROT_READ|PROT_WRITE, MAP_SHARED, f, 0);
    mapped[43].integer = 243;
    sprintf(mapped[43].string,"RECORD-%d",mapped[43].integer);
    //实现磁盘文件内容与共享内存区中的内容一致,即同步操作
    msync((void *)mapped, NRECORDS*sizeof(record), MS_ASYNC);
    munmap((void *)mapped, NRECORDS*sizeof(record));
    close(f);
    exit(0);


}


int main(){
    test1();

    return 0;



}
