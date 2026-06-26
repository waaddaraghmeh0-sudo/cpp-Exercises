// loops - 07
 
// Develop a C++ program that counts the total number of digits it contains using a while loop.
// Given: long long number = 7568;
// Expected Output:
// Enter an integer: 7568 
// The number 7568 has 4 digits.


#include <iostream> 
using namespace std;

int main () {

    long long num = 7568;
    int count = 0;

    long long tempNumber = abs(num);

    while (tempNumber > 0) { 
        tempNumber /= 10;
        count++;
    }

    cout << "the number " <<  num << " has " << count << " digits.";
    
    return 0;
}
