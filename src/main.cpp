#include <iostream>
#include "chapter_function.h"
#include "min_max.h"
#include "exceptions.h"
#include "structures.h"
#include "generic.h"
#include "stl.h"
#include "function.h"

void lambdaExamples(void);

class Date {
    int day;
    int month;
    int year;

    public:
        // Parameters are initalized
        Date() : day(1), month(1), year(2019) {
            std::cout << "Hello! Constuctore" << std::endl;
        }
        Date(int d, int m, int y) : day(d), month(m), year(y) {
            std::cout << "Hello! Constuctor 2" << std::endl;
        }
        // Destructor: only one
        ~Date(){
            std::cout << "Destructor has been called" << std::endl;
        }

        void setDate(int d, int m, int y) {
            setDay(d);
            setMonth(m);
            setYear(y);
        }
        // Const : this method will not change the instance of the class
        void printDate() const {
            std::cout << this->month << "/" 
                << this->day << "/"
                << this->year << std::endl;
        }

        //Friend function
        friend int addDay(Date d1, Date d2){
            return d1.day + d2.day;
        }

        int getDay() const {return this->day;}
        int getMonth() const {return this->month;}
        int getYear() const {return this->year;}

        void setDay(int d) {this->day = d;}
        void setMonth(int m) {this->month = m;}
        void setYear(int y) {this->year = y;}

};

// Generic class
template <typename TYPE>
class testGeneric{
    TYPE attribute;

    public:
        testGeneric(TYPE param) : attribute(param){}

        TYPE getAttribute() const {return this->attribute;}
        void setAttribute(TYPE a) { this->attribute = a;}
};

int main()
{

    // TEST LOOPS
    //loopTest();
    // CHAR TEST STRING DISPLAY
    //charTest();
    // BREAK AND CONTINUE TEST
    //breakAndContinue();
    //INFINITE LOOPS
    //infiniteLoop();
    //Display Ones
    // displayOnes(2, 7);
    // displayOnes(2, 3);
    // displayOnes(3, 7);
    // displayOnes(2, 3);
    // displayOnes(2, 7);

    // declarationAndUsage();
    //enterAndReturn();

    // int min, max;
    // minMaxAlgo(&min, &max);
    // std::cout << "Min number is : " << min << std::endl;
    // std::cout << "Max number is : " << max << std::endl;
    // cString();
    // countOnesInBin(7);
    // countOnesInBin(8);
    // countOnesInBin(1023);
    // lambdaExamples();
    // exceptionTest();
    // stdexcept();

    // STRUCTURES
    // structures();
    //books();

    // GENERIC PROGRAMMING
    //generic();

    // STANDARD LIB
    //vectors();
    //deque();
    //string();
    //map();

    // FUNCTIONS
    //function();

    /*Date dt;
    dt.setDate(9, 2, 1994);
    dt.printDate();
    int m, d, y;

    std::cout << "Enter date: ";
    std::cin >> m >> d >> y;

    Date dt1;
    dt1.printDate();
    dt1.setDate(d,m,y);
    std::cout << "Entered date: ";

    dt1.printDate();
    std::cout << "Month : " << dt1.getMonth() << std::endl;
    Date dt2(10,6,2018);
    dt2.printDate();

    int res = addDay(dt1, dt2);
    std::cout << res << std::endl;*/

    testGeneric<int> testInt(10);
    testGeneric<double> testDouble(10.99);
    testGeneric<char> testChar('E');
    std::cout << testChar.getAttribute() << std::endl;
    testChar.setAttribute('P');
    std::cout << testChar.getAttribute() << std::endl;
    return 0;
}

void lambdaExamples(void) {
    // []  (param) --> RETURN_TYPE {
    //     BODY
    // }
    auto lambda1 = [] (int x) -> int { return x*x*x; };

    std::cout << lambda1(10) << std::endl;
    std::cout << lambda1(2) << std::endl;
}
