// STL: Standard Library
#include <iostream>
#include <vector>
#include <deque>

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

void deque(void) {
    // similar to vectors
    // They are not continuous in memory
    // can be seen as a list of list
    std::deque<int> dq1 (10); // deque of 10 integers
    std::deque<double> dq2 (10); // deque of 10 double
    std::deque<int> dq3; // Only declaration here

    std::deque<int> dq4 (3,7); // 3 elements all init to 7

    for(int i : dq4)
        std::cout << i << " ";
    std::cout << std::endl;

    unsigned int dq1_size = dq1.size();
    std::cout << "size of dq1 : "<< dq1_size  << std::endl;

    for (int i = 0; i < dq1_size; i++)
    {
        std::cout << dq1[i] << " ";
    }
    std::cout << std::endl;
    // vec1[i] = vec1.at(i)

    bool emp1 = dq2.empty();
    bool emp2 = dq3.empty();

    std::cout << emp1 << " " << emp2 << std::endl;

    std::cout << "size of vec3 : "<< dq3.size()  << std::endl;
    dq3.push_back(100);
    std::cout << "size of vec3 : "<< dq3.size() << " " << dq3.at(0) << std::endl;

    std::deque<int> dq5 {5, 6, 7, 8};
    for(int i : dq5)
        std::cout << i << " ";
    std::cout << std::endl;
    dq5.pop_back();
    for(int i : dq5)
        std::cout << i << " ";
    std::cout << std::endl;
    dq5.push_front(100);
    for(int i : dq5)
        std::cout << i << " ";
    std::cout << std::endl;
    dq5.pop_front();
    for(int i : dq5)
        std::cout << i << " ";
    std::cout << std::endl;
    // dq5.pop_back delete the last element
    // dq5.push_front add element at the beginning

}
