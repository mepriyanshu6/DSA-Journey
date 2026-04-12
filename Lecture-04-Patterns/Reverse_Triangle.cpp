/* Reverse Triangle Pattern
   12345
    1234
     123
      12
       1
*/




#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout  <<"Enter a Number"<< endl;
    cin >> n;
    //Outer Loop 0 to (n-1)
    for (int i=0; i<n;i++)
    {
        //Inner Loop n to j--
        for (int j=n-i; j>0; j--)
            {
            cout << j; // To print the numbers

            }
        cout << endl;//  TO print the next line
    }
        return 0;
}
