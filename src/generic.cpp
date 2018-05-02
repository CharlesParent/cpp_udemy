#include <iostream>

static void Print(int arr[], int len);
static void Print(double arr[], int len); // Creates an overloaded function, same name but input type / numbers different

void generic()
{
    int arr[] = {2, 3, 4, -5, 1, 1, 0, 4};
    double arrDouble[] = {2, 1.3, 4, -5, 1, 1.34, 0, 4};
    const int lenArr = sizeof arr / sizeof arr[0];
    const int lenDouble = sizeof arrDouble / sizeof arrDouble[0];
    std::cout << sizeof arr // Size of all the array --> therefore 32
        << " " << sizeof arr[0] // Size of the first element, which is an int, so 4 bytes
        << std::endl;
    Print(arr, lenArr);
    
    std::cout << sizeof arrDouble // Size of all the array --> therefore 32
        << " " << sizeof arrDouble[0] // Size of the first element, which is an int, so 4 bytes
        << std::endl;
    Print(arrDouble, lenDouble);
    
}

static void Print(int arr[], int len) // PRINT only an array of integers, would be great to have the same function accepting any type of array
{
    std::cout << "[";

    for (int i = 0; i < len - 1; i++)
        std::cout << arr[i] << ", ";
    if (len != 0)
        std::cout << arr[len - 1];

    std::cout << "] INT" << std::endl;
}

static void Print(double arr[], int len)
{
    std::cout << "[";

    for (int i = 0; i < len - 1; i++)
        std::cout << arr[i] << ", ";
    if (len != 0)
        std::cout << arr[len - 1];

    std::cout << "] DOUBLE" << std::endl;
}
