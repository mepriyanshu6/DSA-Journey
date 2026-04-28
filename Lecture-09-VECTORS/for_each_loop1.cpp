#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<char>vec = {'a','b','c','d','e'};
    for ( char i : vec){// for each loop
        cout << i << endl;
    }
    return 0;
}