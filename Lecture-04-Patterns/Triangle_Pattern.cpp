/*
*
**
***
****
*****
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
        //Inner Loop
        for (int j=0; j<i+1; j++)
            {
            cout << "*"; // To print the Stars
            }
        cout << endl;//  TO print the next line
    }
        return 0;
}
