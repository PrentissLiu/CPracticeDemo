//
// Created by Prentiss on 2019-04-09.
//

//为什么编译的时候会出现神奇的问题。。。
//乱码。。。

#include <iostream>
using namespace std;

template<class T>
void printArray(T arr[],int len){
    for (int i = 0; i < len;i++)
        cout << arr[i] << " ";
    cout << endl;
}



template<class T>
void mySort(T arr[],int len){
    for(int i= 0;i < len;i++)
        for(int j = len-1;j>1;j--)
            if(arr[j] > arr[j-1]){
                T temp = arr[j-1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
}

void test(){
    char tempChar[] = "skdfjdkdafjadskfjl";
    int charLen  = strlen(tempChar);

    int tempInt[] = {2,2,2,1,3,3,5,3,4,5,2};
    int intLen = sizeof(tempInt);       //int这里就要使用sizeof辽


    //排序前打印
    printArray(tempChar,charLen);
    printArray(tempInt,intLen);


    //排序
    mySort(tempChar,charLen);
    mySort(tempInt,intLen);


    //排序后打印
    printArray(tempChar,charLen);
    printArray(tempInt,intLen);

}


int main(){
    test();

    return 0;
}