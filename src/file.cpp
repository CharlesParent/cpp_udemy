#include <fstream>
#include <iostream>
#include "file.h"

void file(void){
    std::cout << "Hello File" << std::endl;

    std::ofstream f("test.txt");
    f << "Hello World" << std::endl;

    f.close();
}
