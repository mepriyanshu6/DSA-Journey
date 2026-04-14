//Two's compliment of a number is obtained by taking the one's compliment of the number and then adding 1 to it.
/*
Steps to find the two's compliment of a number:
1. Take the one's compliment of the number by inverting all the bits (changing 0s to 1s and 1s to 0s).
2. Add 1 to the one's compliment to get the two's compliment.   

Example:
Let's find the two's compliment of the binary number 1010 (which is 10 in decimal):
1. One's compliment of 1010 is 0101 (inverting the bits).
2. Adding 1 to 0101 gives us 0110 (which is 6 in decimal).

example :
Input: 1010
Output: 0110


*/

#include <iostream>
using namespace std;
string onesComplement(string binary) {
    string onesComp = "";
    for (char bit : binary) {
        onesComp += (bit == '0') ? '1' : '0'; // Invert the bits
    }
    return onesComp;
}
int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary; // Read the binary number as a string
    string onesComp = onesComplement(binary); // Get the one's complement
    cout << "One's Complement: " << onesComp << endl; // Output the one's complement

    // To get the two's complement, we add 1 to the one's complement
    int carry = 1; // We need to add 1
    string twosComp = "";
    
    for (int i = onesComp.length() - 1; i >= 0; i--) {
        char bit = onesComp[i];
        if (bit == '1' && carry == 1) {
            twosComp = '0' + twosComp; // If bit is 1 and we need to add 1, it becomes 0 and we still have a carry
        } else if (bit == '0' && carry == 1) {
            twosComp = '1' + twosComp; // If bit is 0 and we need to add 1, it becomes 1 and we no longer have a carry
            carry = 0;
        } else {
            twosComp = bit + twosComp; // If no carry is needed, just keep the bit as is
        }
    }
    
    if (carry == 1) {
        twosComp = '1' + twosComp; // If we still have a carry after processing all bits, add it to the front
    }

    cout << "Two's Complement: " << twosComp << endl; // Output the two's complement
    return 0;
}