#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout << "Enter a Number" << endl;
    cin >> n;

    for (int i=0; i<n; i++)
    {
        // Spaces
        for (int j=0; j<n-i-1; j++)
        {
            cout << " ";
        }

        // Increasing
        for (int j=1; j<=i+1; j++)
        {
            cout << j;
        }

        // Decreasing
        for (int j=i; j>=1; j--)
        {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}