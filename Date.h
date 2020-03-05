//
// Created by pouyan on 3/3/20.
//

#ifndef SIMPLEOOP_DATE_H
#define SIMPLEOOP_DATE_H


class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int year, int month, int day);

    int getYear(){
        return year;
    }

    int getDay(){
        return day;
    }

    int getMonth(){
        return month;
    }

    void setYear(int year);
    void setMonth(int month);
    void setDay(int day);

};


#endif //SIMPLEOOP_DATE_H
