#include <iostream>
#include "chapter_function.h"
#include "min_max.h"

void cString(void);

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
    cString();
    return 0;
}

void cString(void) {
    // C string tuto
    char str[6] = { 'G', 'W', 'E', 'N', 'T', '\0'};
    std::cout << str << std::endl;
}
