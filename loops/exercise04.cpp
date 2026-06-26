// loops - 04

// Write a C++ program that calculates and displays the separate sums of all even numbers and all odd numbers between 1 and N (inclusive).
// Given: int N = 10;
// Expected Output:
//Results up to : 10  
//Sum of even numbers: 30 
//Sum of odd numbers: 25


#include <iostream>
using namespace std;

int main () {

    int N =10;
    int evensum =0;
    int oddsum =0;

    for (int i=1; i<=N; i++) {
        if (i%2 == 0) {
            evensum+=i;
        } else {
            oddsum+=i;
        }
    }
    
    cout << "sum of even numbers: " << evensum << endl;
    cout << "sum of odd numbers: " << oddsum << endl;
    

     return 0;
     
}