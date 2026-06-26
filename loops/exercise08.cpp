// loops - 08

// Write a C++ program to reverse a integer number using a loop.
// Given: int N = 7568;
// Expected Output:
// The reverse of 7568 is: 8657


#include <iostream>
using namespace std;

int main () {

   int N=7568;
   int reverse=0;
   int temp=N;


   while (temp !=0) {
    int digit = temp % 10;
    reverse = reverse * 10 + digit;
    temp= temp/10;
   }

   cout << "the reverse of " << N << " is: " << reverse << endl;

   return 0;
}
