//
// Created by pouyan on 3/3/20.
//

#include "Date.h"

Date::Date(int year, int month, int day) : year(year), month(month), day(day) {}

void Date::setDay(int day) {
    this->day = day;
}

void Date::setMonth(int month) {
    this->month = month;
}

void Date::setYear(int year) {
    this->year = year;
}
