//Sum upto N
#include <iostream>
using namespace std;
int sumN(int n) // Parameterized function
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}
int main ()
{
    int n;
cout << "Enter a number: ";
cin >> n;
cout << " Sum is " << sumN;
cout << "The sum of numbers from 1 to " << n << " is: " << sumN(n) << endl;
return 0;
}