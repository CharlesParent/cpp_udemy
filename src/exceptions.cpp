// No Excceptions in C !
#include <iostream>
#include <cmath>
#include <stdexcept>

static double Sqrt(double);
void some(int);

int exceptionTest(void){
    double square_root = 0;
    // double num;
    // std::cout << "Enter number ";
    // std::cin >> num;
    
    try {
        square_root = Sqrt(2);
        std::cout << "Sqrt number is : " << square_root << std::endl;   
    } catch (const char * text) {
        std::cout << "ERROR: "<< text << std ::endl;
        return 1;
    }

    try {
        some(101);
    } catch (int i){
        std::cout << "Caught int " << i << std::endl;
        return 1;
    } catch (char c){
        std::cout << "Caught char " << c << std::endl;
        return 1;
    } catch (const char * text){
        std::cout << "Caught text " << text << std::endl;
        return 1;
    } catch (std::domain_error stdError){
        std::cout << "Caught std error" << std::endl;
        return 1;
    }


    return 0;
}

static double Sqrt(double x){
    if( x < 0)
        throw "Negative Number should not be passed to this function";
    return std::pow(x, 0.5);
}

void some(int n){
    if(n == 0)
        throw 1;
    if(n > 0 && n < 100)
        throw "Exception string";
    if(n > 100)
        throw 'c';
    if(n < 0)
        throw std::domain_error("Standard Exception");
}
