//Binary to Decimal Conversion
#include <iostream>
using namespace std;
int binaryToDecimal(int binNum) {
    int ans = 0, pow = 1;

    while (binNum > 0) {
        int rem = binNum % 10; // Get the last digit (0 or 1)

        binNum /= 10; // Remove the last digit
        ans += rem * pow; // Update the answer by adding the last digit multiplied by the current power of 2
        pow *= 2; // Update the power of 2 for the next iteration
    }
    return ans; // Return the decimal representation as an integer
}
int main() {
    int binNum;
    cout << "Enter a binary number: ";
    cin >> binNum; // Read the binary number as an integer
    int decimalNum = binaryToDecimal(binNum); // Convert the binary number to decimal
    cout << "The decimal representation is: " << decimalNum << endl; // Output the decimal representation
    return 0;
}