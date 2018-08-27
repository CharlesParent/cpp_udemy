#include <iostream>
#include "Date.h"
// Parameters are initalized
Date::Date() : day(1), month(1), year(2019) {
    std::cout << "Hello! Constuctore" << std::endl;
}
Date::Date(int d, int m, int y) : day(d), month(m), year(y) {
    std::cout << "Hello! Constuctor 2" << std::endl;
}
// Destructor: only one
Date::~Date(){
    std::cout << "Destructor has been called" << std::endl;
}

void Date::setDate(int d, int m, int y) {
    setDay(d);
    setMonth(m);
    setYear(y);
}
// Const : this method will not change the instance of the class
void Date::printDate() const {
    std::cout << this->month << "/" 
        << this->day << "/"
        << this->year << std::endl;
}

int Date::getDay() const {return this->day;}
int Date::getMonth() const {return this->month;}
int Date::getYear() const {return this->year;}

void Date::setDay(int d) {this->day = d;}
void Date::setMonth(int m) {this->month = m;}
void Date::setYear(int y) {this->year = y;}
