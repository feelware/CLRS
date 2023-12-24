#include <iostream>
#include <cstdlib>
#include <ctime>

void print(int* arr, int n, bool extra = 0) {
    if (extra) {
        std::cout << "  ";
    }
    for(int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int* addBinaryIntegers(int* a, int* b, int n) {
    int* c = new int[n + 1];
    int sum = 0, carry = 0;
    for(int i = n - 1; i >= 0; i--) {
        sum = a[i] + b[i] + carry;
        if (sum > 1) {
            c[i + 1] = sum - 2;
            carry = 1;
        }
        else {
            c[i + 1] = sum;
            carry = 0;
        }
    }
    c[0] = carry;
    return c;
}

int main() {
    std::srand(time(NULL));
    
    int n = 4;
    int* a = new int[n];
    int* b = new int[n];

    for(int i = 0; i < n; i++) {
        a[i] = std::rand() % 2;
        b[i] = std::rand() % 2;
    }

    print(a, n, 1);
    print(b, n, 1);
    print(addBinaryIntegers(a, b, n), n + 1);
}