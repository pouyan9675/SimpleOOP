#include <iostream>
#include <vector>
#include "Human.h"

void leak(){
    int *node;
    node = (int *) malloc(8);   // TODO: Memory Leak!
    char *login = new char(50);     // TODO: Memory Leak!

//    free(node);                   // Using free() function for malloc
//    delete login;                 // Using delete syntax for new
}

int main() {

    for(int i=0; i<100000; i++)
        leak();

    Human h1("Person1", 89, 192);
    float h1_bmi = h1.getBMI();

    Human h2("Person2", 62, 171);
    Date *d2 = new Date(1999, 4, 24);
    h2.birthday = d2;
    cout << h2.name << " is " << h2.getAge() << " years old!" << endl;

    Human h3("Person3", 85, 183);
    Date *d3 = new Date(1990, 10, 3);
    h3.birthday = d3;

    Human h4("Person4", 110, 160);
    cout << h4.name << ", BMI: " << h4.getBMI() << endl;

    vector<Human*> humans;

    humans.push_back(&h1);
    humans.push_back(&h2);
    humans.push_back(&h3);
    humans.push_back(&h4);

    for(Human* h: humans){
        float bmi = h->getBMI();
        if(bmi > 30)
            cout << "Dear " << h->name << ", be careful!" << endl;
    }

    try{
        humans.at(50);          // We raise an intended exception
    }catch(exception &e){
        cout << e.what() << endl;
    }

    return 0;
}
