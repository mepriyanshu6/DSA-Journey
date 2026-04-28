#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec = {1, 2, 3, 4, 5};
    for ( int i : vec){// for each loop
        cout << i << endl;
    }
    cout << vec.front() <<endl;//to get the first element of the vector.
    cout << vec.back() <<endl;//to get the last element of the vector.
    return 0;
}