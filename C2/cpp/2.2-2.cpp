#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>

void print(int* arr, int n) {
    for(int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void insertionSort(int* a, int n) {
    for (int i = 0; i < (n-1); i++) {
        int smallestIndex = i;
        for (int j = i+1; j < n; j++) {
            if (a[j] < a[smallestIndex]) {
                smallestIndex = j;
            }
        }
        int smallest = a[smallestIndex];
        a[smallestIndex] = a[i];
        a[i] = smallest;
    }
}

int main() {
    std::srand(time(NULL));
    
    int n = 5;
    int a[n] = {1, 2, 3, 4, 5};

    // for(int i = 0; i < n; i++) {
    //     a[i] = std::rand() % 100 + 1;
    // }

    // for(int i = 0; i < n; i++) {
    //     a[i] = n-i;
    // }

    print(a, n);
    insertionSort(a, n);
    print(a, n);
    
    return 0;
}