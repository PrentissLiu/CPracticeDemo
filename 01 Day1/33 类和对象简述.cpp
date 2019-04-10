//
// Created by Prentiss on 2019-04-06.
//

#include <iostream>
using namespace std;

typedef struct Person{
    char name[64];
    int age;
}Person;


typedef struc Animal{
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

    returen EXIT_SUCCESS;
}
