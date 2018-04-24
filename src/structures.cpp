#include <iostream>
#include <string>

struct Date
{
    int day; // Attribute, or fields, public
    int month;
    int year;
};

struct Book
{
    int ID;
    std::string Name;
    std::string Author;
    Date Published;
    static int Count; // Attribute shared by all variables of type Book
};

int Book::Count; // Allows memory to static variables

static void displayDate(Date);

void books(void)
{
    Book b1, b2;
    b1.ID = 0;
    b1.Name = "Fondation";
    b1.Author = "Asimov";
    b1.Count = 1;

    std::cout << "B2 count value: " << b2.Count << std::endl; // Count shared by all books
    b2.Count = 10;
    std::cout << "B1 count value: " << b1.Count << std::endl; // Count shared by all books
    std::cout << "Books count value: " << Book::Count << std::endl; // Count shared by all books
}

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
