//
// Created by Prentiss on 2019-04-06.
//

//
// Created by Prentiss on 2019-04-06.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>



typedef struct Person{
    char name[64];
    int age;
}Person;


typedef struct Animal{
    char name[64];
    int age;
    int type;

}Animal;


void PersonEat(Person* person){
    printf("人在吃饭%s\n",person->name);
}

void AnimalEat(Animal* animal){
    printf("动物吃饭%s\n",animal -> name);
}

int main(){
    Person person;
    strcpy(person.name,"小明");
    person.age = 30;

    AnimalEat(&person);

    return EXIT_SUCCESS;
}

//在C语言中，行为和属性不属于某一类对象，而是属于共同的数据
//因此AnimalEat也可以调用Person数据，就很容易造成问题发生

//场景：某个对象的某个属性不想为外界所知，就可以设置权限（封装