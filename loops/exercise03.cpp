// loops - 03
// Write a C++ program that calculates the sum of all natural numbers from 1 to N using a while loop.
// Given: int N = 10;
// Expected Output: The sum of the first 10 natural numbers is: 55


#include <iostream>
using namespace std;

int main () {

     int N = 10;
     int sum = 0;
     int i = 1;



    while (i<=N) {
        sum+=i;
        i++;
    }

     cout << sum;
    
    return 0;

}