//Decimal to Binary and Binary to Decimal Conversion
#include <iostream>
using namespace std;

int decimalToBinary(int decNum) {
  int ans = 0, pow = 1;

    while (decNum> 0) {
        int rem = decNum % 2;// Get the remainder (0 or 1)

        decNum /= 2;
        ans += rem * pow;// Update the answer by adding the remainder multiplied by the current power of 10
        pow *= 10;// Update the power of 10 for the next iteration
    }
    return ans; // Return the binary representation as an integer
}
int main () 
{
    int decNum;
    cout << "Enter a decimal number: ";
    cin >> decNum;

    int binaryNum = decimalToBinary(decNum);
    cout << "Binary representation of " << decNum << " is: " << binaryNum << endl;

    return 0;
}