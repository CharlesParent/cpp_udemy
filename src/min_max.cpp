#include <iostream>
#define MAX_NUMBER 10

static void getMinAndMax(int * arr, int * min, int * max);

void minMaxAlgo(int * min, int * max){
    int arr[MAX_NUMBER];

    std::cout << "Enter " << MAX_NUMBER << " numbers and I\'ll tell you min and max: " << std::endl;
    for (int i = 0; i < MAX_NUMBER ; i++)
        std::cin >> arr[i];
    getMinAndMax(arr, min, max);
}

static void getMinAndMax(int * arr, int * min, int * max) {
    *min = arr[0];
    *max = arr[0];
    for (int i = 1; i < MAX_NUMBER; i++){
        if (*min > arr[i]) *min = arr[i];
        if (*max < arr[i]) *max = arr[i];
    }
}
