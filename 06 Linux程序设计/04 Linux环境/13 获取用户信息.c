//
// Created by prentiss on 19-4-15.
//



//用户有一个UID(用户名标示符号)
//UID 有自己的类型 uid_t 定义在头文件sys/types.h中

//getlogin返回当前用户关联的登录名
//getuid函数返回程序关联的UID

//还是存在问题的...

#include <sys/types.h>
#include <pwd.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
	uid_t uid;
	gid_t gid;

	struct passed *pw;
	uid = getuid();
	gid = getgid();

	printf("User is %s\n",getlogin() );

	printf("User Ids:uid = %d,gid = %d\n",uid,gid);

	pw = getuid(uid);

	printf("UID password entry:\n name = %d; gid = %d; home = %s,shell = %s\n",pw->pw_uid,pw->gid,pw->pw_dir,pw->pw_dir,pw->pw_shell);


	return 0;

}