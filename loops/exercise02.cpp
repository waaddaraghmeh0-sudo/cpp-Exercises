// loops - 02

// Write a C++ program that uses a for loop to display all even numbers in the range from 1 to 20 (inclusive).
// Expected Output: Even numbers between 1 and 20 are: 2 4 6 8 10 12 14 16 18 20


#include <iostream> 
using namespace std;

int main () {

    for (int i=1; i<=20; i++) {
        if (i%2 == 0) {
            cout << i;
        }
    }


    return 0;



}