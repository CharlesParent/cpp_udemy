#ifndef DATE_H
#define DATE_H

#include <iostream>

// Class Interface

class Date {
    int day;
    int month;
    int year;

    public:
        Date();
        Date(int d, int m, int y);
        ~Date();

        void setDate(int d, int m, int y);
        void printDate() const;
        //Friend function
        friend int addDay(Date d1, Date d2){
            return d1.day + d2.day;
        }

        int getDay() const;
        int getMonth() const;
        int getYear() const;

        void setDay(int d);
        void setMonth(int m);
        void setYear(int y);
};

#endif // !DATE_H
