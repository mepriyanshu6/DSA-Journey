//Minimum of Two Numbers
#include <iostream>
using namespace std;
int min(int a, int b)// Parameterized function
{
    if (a < b)
        return a;
    else
        return b;
}
int main()
{ 
    int num1, num2;
cout << "Enter two numbers: ";
cin >> num1 >> num2;
int minimum = min(num1, num2); // Function call
cout << "The minimum of " << num1 << " and " << num2 << " is: " << minimum << endl;
    return 0;

}
