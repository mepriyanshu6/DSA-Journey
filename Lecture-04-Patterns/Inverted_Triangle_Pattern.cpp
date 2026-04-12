
/*
// Inverted Triangle Pattern
Input: 5
Output:
    1
   12
  123
 1234

*/
#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout  <<"Enter a Number"<< endl;
    cin >> n;
// Outer Loop
    for (int i=0; i<n;i++)
    {
        //Inner Loop
        //For Spaces

        for (int j=1; j<=n-1; j++)
            {
           cout << " "; // To print the Space
            }
           for (int j=1; j<=i;j++)// To print the numbers 
            {
                cout << j; 
            }
        cout << endl;//  TO print the next line
    }
        return 0;
}
