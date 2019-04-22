//
// Created by prentiss on 19-4-16.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <termios.h>

char *menu[] = {
        "a - add new record",
        "d - delete record",
        "q -quit",
        NULL,
};


int getchoice(char *greet,char *choices[], FILE *in, FILE *out);
//声明新变量

int main(){
    int choice = 0;
    FILE *input;
    FILE *output;
    struct termios initial_settings, new_settings;


    //改变终端的特性
    if(!isatty(fileno(stdout))){
        fprintf(stderr,"You are not a terminal ,OK.\n");
    }
    input = fopen("/dev/tty","r");
    output = fopen("/dev/tty","w");
    if(!input || !output){
        fprintf(stderr,"Unable to open /dev/tty\n");
        exit(1);
    }

    tcgetattr(fileno(input),&initial_settings);         //获取终端参数,成功返回0,失败设置错误标示
    new_settings = initial_settings;
    new_settings.c_lflag &= ~ICANON;    //使用标准输出模式
    new_settings.c_lflag &= ~ECHO;      //显示输出字符
    new_settings.c_cc[VMIN] = 1;        //等待的最小字节数
    new_settings.c_cc[VTIME] = 0;       //等待的最小时间
    new_settings.c_lflag &= ~ISIG;

    //c_iflag   输入模式,控制终端输入方式


    //c_oflag   输出标志,空值终端输出方式
    //c_cflag   空值模式标志,制定终端 硬件控制信息
    if(tcsetattr(fileno(input),TCSANOW,&new_settings) != 0){
        fprintf(stderr,"Could't see attributes\nn");
    }


    //退出终端之前,将终端的属性还原
    do{
        choice = getchoice("Please select an action",menu, input,output);
    }while(choice != 'q');
    tcsetattr(fileno(input), TCSANOW, &initial_settings);   //设置终端参数TCSANOW,成功的时候返回0,失败-1
    exit(0);



}


//对回车和换行符\r的映射进行检查
int getchoice(char *greet, char *choices[] , FILE *in, FILE *out){
    int chosen = 0;
    int selected;
    char **option;

    do{
        fprintf(out,"Choice: %s\n",greet);
        option = choices;
        while(*option){
            fprintf(out, "%s\n",*option);
            option++;
        }
        do{
            selected = fgetc(in);
        }while(selected == '\n' || selected == '\r');
        option = choices;
        while(*option){                     //C C++ 中非0 即为真
            if(selected = *option[0]){
                chosen = 1;
                break;
            }
            option ++;
        }
        if(!chosen){
            fprintf(out, "Incorrect choice, select again\n");
        }
    }while(!chosen);
    return selected;


}




//termios结构体中，该结构体一般包括如下的成员：
//tcflag_t c_iflag;
//tcflag_t c_oflag;
//tcflag_t c_cflag;
//tcflag_t c_lflag;
//cc_t     c_cc[NCCS];
//
// 其具体意义如下
//
//c_iflag：输入模式标志，控制终端输入方式，具体参数如下所示。
//
//c_iflag参数表
//键值说明
//IGNBRK 忽略BREAK键输入
//BRKINT 如果设置了IGNBRK，BREAK键的输入将被忽略，如果设置了BRKINT ，将产生SIGINT中断
//IGNPAR 忽略奇偶校验错误
//PARMRK 标识奇偶校验错误
//INPCK 允许输入奇偶校验
//ISTRIP 去除字符的第8个比特
//INLCR 将输入的NL（换行）转换成CR（回车）
//IGNCR 忽略输入的回车
//ICRNL 将输入的回车转化成换行（如果IGNCR未设置的情况下）
//IUCLC 将输入的大写字符转换成小写字符（非POSIX）
//IXON 允许输入时对XON/XOFF流进行控制
//IXANY 输入任何字符将重启停止的输出
//IXOFF 允许输入时对XON/XOFF流进行控制
//IMAXBEL 当输入队列满的时候开始响铃，Linux在使用该参数而是认为该参数总是已经设置
//
//
//
//c_oflag：输出模式标志，控制终端输出方式，具体参数如下所示。
//c_oflag参数
//键值说明
//OPOST 处理后输出
//OLCUC 将输入的小写字符转换成大写字符（非POSIX）
//ONLCR 将输入的NL（换行）转换成CR（回车）及NL（换行）
//OCRNL 将输入的CR（回车）转换成NL（换行）
//ONOCR 第一行不输出回车符
//ONLRET 不输出回车符
//OFILL 发送填充字符以延迟终端输出
//OFDEL 以ASCII码的DEL作为填充字符，如果未设置该参数，填充字符将是NUL（‘/0’）（非POSIX）
//NLDLY 换行输出延时，可以取NL0（不延迟）或NL1（延迟0.1s）
//CRDLY 回车延迟，取值范围为：CR0、CR1、CR2和 CR3
//TABDLY 水平制表符输出延迟，取值范围为：TAB0、TAB1、TAB2和TAB3
//BSDLY 空格输出延迟，可以取BS0或BS1
//VTDLY 垂直制表符输出延迟，可以取VT0或VT1
//FFDLY 换页延迟，可以取FF0或FF1
//
//c_cflag：控制模式标志，指定终端硬件控制信息，具体参数如下所示。
//c_oflag参数
//键值说明
//CBAUD 波特率（4+1位）（非POSIX）
//CBAUDEX 附加波特率（1位）（非POSIX）
//CSIZE 字符长度，取值范围为CS5、CS6、CS7或CS8
//CSTOPB 设置两个停止位
//CREAD 使用接收器
//PARENB 使用奇偶校验
//PARODD 对输入使用奇偶校验，对输出使用偶校验
//HUPCL 关闭设备时挂起
//CLOCAL 忽略调制解调器线路状态
//CRTSCTS 使用RTS/CTS流控制
//
//
//c_lflag：本地模式标志，控制终端编辑功能，具体参数如下所示。
//c_lflag参数
//键值说明
//ISIG 当输入INTR、QUIT、SUSP或DSUSP时，产生相应的信号
//ICANON 使用标准输入模式
//XCASE 在ICANON和XCASE同时设置的情况下，终端只使用大写。如果只设置了XCASE，则输入字符将被转换为小写字符，除非字符使用了转义字符（非POSIX，且Linux不支持该参数）
//ECHO 显示输入字符
//ECHOE 如果ICANON同时设置，ERASE将删除输入的字符，WERASE将删除输入的单词
//ECHOK 如果ICANON同时设置，KILL将删除当前行
//ECHONL 如果ICANON同时设置，即使ECHO没有设置依然显示换行符
//ECHOPRT 如果ECHO和ICANON同时设置，将删除打印出的字符（非POSIX）
//TOSTOP 向后台输出发送SIGTTOU信号
//
//