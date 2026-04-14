//Sum of digit of Number
#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    int digsum = 0;

    while (n > 0) 
    {
    int lastdig = n % 10; //Exact last digit
    digsum += lastdig; //addn to sum 
    n /= 10;// Remove the last digit
    }

    return digsum ;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = sumOfDigits(n);


    cout << "The sum of the digits is: " << result << endl;
    return 0;
}