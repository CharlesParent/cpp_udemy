#include <fstream>
#include <iostream>
#include "file.h"

void file(void){
    // Mode ios::app used to append content at the end of a file
    std::ofstream f("test2.txt", std::ios::app);
    // Check if we can access the file
    if (!f)
        std::cout << "File Does not exist "
            "or you do not have the permission to write to it" << std::endl;
    else
        f << "Hello World" << std::endl;
    f.close();
}
