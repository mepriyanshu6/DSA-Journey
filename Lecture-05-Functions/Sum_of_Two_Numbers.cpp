//Sum of two numbers
#include <iostream>
using namespace std;

int sum (int a, int b) //Variables inside a function are local to that function only
{
    int S = a +b ;
    return S;
}
int main()
{
    int a, b; //Must declare variables before using them
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "The sum of two numbers is: " << sum(a, b) << endl;     
    return 0;
}