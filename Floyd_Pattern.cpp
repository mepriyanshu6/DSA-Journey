/* Floyd's Triangle Pattern
Floyd's triangle is a right-angled triangular array of natural numbers, used in computer science education. It is named after Robert Floyd. The first few rows of Floyd's triangle are:
1   
2 3
4 5 6   
7 8 9 10
11 12 13 14 15


*/

#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout  <<"Enter a Number"<< endl;
    cin >> n;
    int num = 1;
    //Outer Loop 0 to (n-1)
    for (int i=0; i<n;i++)
    {
        //Inner Loop
        for (int j=i+1; j>0; j--)
            {
            cout << num; // To print the Number
            num ++; // To increment the Number
            }
        cout << endl;//  TO print the next line
    }
        return 0;
}
