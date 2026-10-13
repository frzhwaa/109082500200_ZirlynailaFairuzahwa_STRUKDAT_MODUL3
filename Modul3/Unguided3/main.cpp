#include <iostream>
#include "array.h"

using namespace std;

int main() {
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int B[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };
    cout << "Array A sebelum ditukar:" << endl;
    tampilArray(A);
    cout << "\nArray B sebelum ditukar:" << endl;
    tampilArray(B);
    tukarArray(A, B, 1, 1);
    cout << "\nArray A setelah pertukaran posisi [1][1]:" << endl;
    tampilArray(A);
    cout << "\nArray B setelah pertukaran posisi [1][1]:" << endl;
    tampilArray(B);
    int x = 100;
    int y = 200;
    int *p1 = &x;
    int *p2 = &y;
    cout << "\nSebelum pertukaran pointer:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    tukarPointer(p1, p2);
    cout << "\nSetelah pertukaran pointer:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    return 0;
}
