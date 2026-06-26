// loops - 10
// Write a C++ program that calculates the sum of all digits of a number using a loop.
// Given: int N = 1234;
// Expected Output:
// The sum of the digits of 1234 is: 10


#include <iostream>
using namespace std;

int main () {

    int N = 1234;
    int temp = N;
    
    int sum =0;
    while (temp !=0) {
        int digit = temp % 10;
        sum+=digit;
        temp =temp/10;
    }

    cout << "the sum of the digits of " << N << " is:  " << sum << endl;

    return 0;
}