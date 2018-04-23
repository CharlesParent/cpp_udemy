#include <iostream>

struct Date
{
    int day; // Attribute, or fields, public
    int month;
    int year;
};

static void displayDate(Date);

void structures(void)
{
    Date dt;

    std::cout << "Enter date" << std::endl << "day: ";
    std::cin >> dt.day;
    std::cout << std::endl << "month: ";
    std::cin >> dt.month;
    std::cout << std::endl << "year: ";
    std::cin >> dt.year;

    displayDate(dt);
}

static void displayDate(Date dt)
{
    std::cout << "Date: "<< dt.day << "/" << dt.month << "/" << dt.year << std::endl;
}
