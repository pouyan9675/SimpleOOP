//
// Created by pouyan on 3/3/20.
//

#include "Human.h"
#include <ctime>
#include <iostream>

Human::Human(string name, int weight, int height): name(name), weight(weight), height(height) {}

Human::~Human(){
//    delete birthday;
}

int Human::getAge() {

    if(birthday == NULL){
        cout << "Please fill the birthday first!" << endl;
        return 0;
    }

    time_t now = time(0);   // current date/time based on current system

    tm *ltm = localtime(&now);

    int y = ltm->tm_year;
    int m = ltm->tm_mon;
    int d = ltm->tm_mday;

    if(m < birthday->getMonth()){
        return y - birthday->getYear();
    }else if(m == birthday->getMonth()){
        if (d <= birthday->getDay()){
            return y - birthday->getYear();
        }else{
            return y - birthday->getYear() - 1;
        }
    }else{
            return y - birthday->getYear() - 1;
    }

}

float Human::getBMI(){
    return (weight / (height * height)) * 703;
}