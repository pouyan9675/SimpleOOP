//
// Created by pouyan on 3/3/20.
//

#ifndef SIMPLEOOP_HUMAN_H
#define SIMPLEOOP_HUMAN_H

#include <string>
#include "Date.h"

using namespace std;

class Human {
public:
    string name;
    Date *birthday = NULL;
    bool gender;
    float weight;
    float height;

    Human(string name, int weight, int height);
    ~Human();

    int getAge();
    float getBMI();

};


#endif //SIMPLEOOP_HUMAN_H
