// STL: Standard Library
#include <iostream>
#include <vector>

void vectors(void) {
    // Very similar to array, more expensive regarding system resources
    // They have dynamic size
    std::vector<int> vec1 (10); // Vector of 10 integers
    std::vector<double> vec2 (10); // Vector of 10 double
    std::vector<int> vec3; // Only declaration here

    std::vector<int> vec4 (3,7); // 3 elements all init to 7

    for(int i : vec4)
        std::cout << i << " ";
    std::cout << std::endl;

    unsigned int vec1_size = vec1.size();
    std::cout << "size of vec1 : "<< vec1_size  << std::endl;

    for (int i = 0; i < vec1_size; i++)
    {
        std::cout << vec1[i] << " ";
    }
    std::cout << std::endl;
    // vec1[i] = vec1.at(i)

    bool emp1 = vec2.empty();
    bool emp2 = vec3.empty();

    std::cout << emp1 << " " << emp2 << std::endl;

    std::cout << "size of vec3 : "<< vec3.size()  << std::endl;
    vec3.push_back(100);
    std::cout << "size of vec3 : "<< vec3.size()  << std::endl;

    std::vector<int> vec5 {5, 6, 7, 8};
    for(int i : vec5)
        std::cout << i << " ";
    std::cout << std::endl;
    vec5.pop_back();
    for(int i : vec5)
        std::cout << i << " ";
    std::cout << std::endl;
}
