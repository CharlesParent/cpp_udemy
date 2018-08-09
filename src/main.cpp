#include <iostream>
#include "chapter_function.h"
#include "min_max.h"
#include "exceptions.h"
#include "structures.h"
#include "generic.h"
#include "stl.h"

void lambdaExamples(void);

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
    vectors();
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
