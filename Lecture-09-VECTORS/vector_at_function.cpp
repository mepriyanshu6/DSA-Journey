#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec = {1, 2, 3, 4, 5};
    for ( int i : vec){// for each loop
        cout << i << endl;
    }
   cout << vec.at(1); //to access an element by index with bounds checking.
    return 0;
}

/*

Bounds Checking Means:
Before giving you the element, at() checks:

Is index less than 0?
Is index greater than or equal to size of vector?


If index is outside valid range, it stops and gives an error instead of accessing bad memory.

*/