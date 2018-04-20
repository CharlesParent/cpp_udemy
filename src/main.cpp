#include <iostream>

void breakAndContinue(void);
void charTest(void);
void loopTest(void);
int infiniteLoop(void);
void displayOnes(int, int);
void declarationAndUsage(void);
void enterAndReturn(void);

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

    enterAndReturn();

    return 0;
}


void breakAndContinue(void){
    int number;
    int max_value = 30;
    int divisor = 3;
    std::cout << "Enter a number :";
    std::cin >> number;
    std::cout << "Enter a max_value :";
    std::cin >> max_value;

    std::cout << "Enter a divisor :";
    std::cin >> divisor;

    for (int i = 0; i < number; i++) {
        
        if (i % divisor == 0){
            std::cout << "Hmmmm.... not writing this one as divisible by " << divisor << std::endl;
            continue;
        }
        std::cout << i << std::endl;
        if (i == max_value){
            std::cout << "Sorry I'm lazy, stopping to " << max_value << std::endl;
            break;
        }
    }
}

void charTest(void){
    char const * myString = "I LOVE GWENT";
    std::cout << &myString << std::endl;
    std::cout << myString << std::endl;
    std::cout << "Favorite card is Ciri Nova" << std::endl;
}

void loopTest(void){
    int n = 0;
    int arr[] = {5, 4, 2, 1, -2};
    double arr2[] = {1.1, 2.2, 3.3};
    
    /*
    for(int i = 0; i < n; i++) {
        std::cout << i << std::endl;
    }
    */
    // DO WHILE / WHILE LOOP 
    do {
        std::cout << "enter n positive: ";
        std::cin >> n;
    } while (n < 1);
    std::cout << "listing all numbers inferior to n" << std::endl;
    n--;
    while (n > 0) {
        std::cout << n << std::endl;
        n--;
    }

    // FOR EACH LOOP
    for (int i : arr) {
        std::cout << "int displayed: " << i << std::endl;
    }
    for (double i : arr2) {
        std::cout << "double displayed: " << i << std::endl;
    }
}

int infiniteLoop(void){
    int sum = 0;
    while(1) {
    //for (int i = 0; ; i++){
        int number;
        std::cout << "Enter number (or -1 to end): ";
        std::cin >> number;
        if (number == -1)
            break;
        sum += number;
    }
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}

void displayOnes(int M, int N){
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            std::cout << "X ";
        }
        std::cout << std::endl;
    }
}

// Array, Memory representation and address
void declarationAndUsage() {
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Declaration, no initialization
    
    std::cout << "Array: " << arr1 << std::endl; // memory address
    std::cout << "Array: " << *arr1 << std::endl; // value in arr1[0]
    std::cout << "Array: " << &arr1[0] << std::endl; // memory address
    std::cout << "Array: " << arr1[0] << std::endl; // value in arr1[0]
    std::cout << "Array: " << &arr1[1] << std::endl; // memory address
    std::cout << "Array: " << arr1[1] << std::endl; // value in arr1[0]
    std::cout << "Array: " << &arr1[9] << std::endl; // memory address
    std::cout << "Array: " << arr1[9] << std::endl; // value
}

void enterAndReturn(){
    char arr[5];
    std::cout << "Enter your favorite card game" << std::endl;
    for(int i = 0; i < 5; i++){
        std::cin >> arr[i];
    }
    std::cout << std::endl;
    std::cout << arr;
} 
