// loops - 06

// Write a C++ program that prints its multiplication table of a given number from 1 to 10.
// Given: int N = 2;
// Expected Output:
// Multiplication Table for 2 (1 to 10):
// 2 x 1 = 2
// 2 x 2 = 4
// 2 x 3 = 6
// ...
// 2 x 10 = 20


#include <iostream>
using namespace std;

int main () {

     int N = 2;
     
     cout << "Multiplication Table for " << N << " (1 to 10):  " <<endl;

     for (int i=1; i<=10; i++) {

        cout << N << "x" << i << "= " << N*i << endl;
     }



      return 0;
}