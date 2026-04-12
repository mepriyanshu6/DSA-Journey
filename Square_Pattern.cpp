                  /*

                  
                  12345...
                  12345...
                  12345...
                  ....
                  ....
                  ....
                 
                  */



#include <iostream>
using namespace std;
int main ()
{
    int n;
int j;
    cout  <<"Enter a Number"<< endl;
    cin >> n;
    //Outer Loop
    for (int i=0; i<=n;i++)
    {
        //Inner Loop
        for (j=1; j<=n; j++)
            {
            cout << j;
            }
        cout << endl;
    }
        return 0;
}

