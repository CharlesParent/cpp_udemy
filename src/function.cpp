#include <functional>
#include <iostream>
#include "function.h"

// std::function<RETURN_TYPE(PARAM_TYPE, ...)> f;
static double Calculate(std::function<double(double)> f, double x);
static double TestFun1(double x);
static double TestFun2(double x);

void function(void) {
    double i = 2;
    std::cout << TestFun1(i) << std::endl;
    std::cout << TestFun2(i) << std::endl;
    std::cout << Calculate(TestFun1, i) << std::endl;
    std::cout << Calculate(TestFun2, i) << std::endl;

    // Lambda function
    // std::function<RETURN_TYPE(PARAM_TYPE, ...)> f = 
    // [capture] (params) -> ret {body}
    // capture: variables visible à l'intérieur de la fonction 
    std::function<int(int, int)> f = [] (int a, int b) -> int {return a * b;};
    int res = f(10, 20);
    std::cout << res << std::endl;
}

static double Calculate(std::function<double(double)> f, double x) {
    return f(x) * f(x) * f(x);
}

static double TestFun1(double x) {
    return x * x;
}
static double TestFun2(double x) {
    return x * x - 2 * x + 1;
}
