#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec = {1, 2, 3, 4, 5};
    vec.push_back(25); //Used with C++ Standard Library std::vector to add an element at the end of the vector.
    for ( int i : vec){// for each loop
        cout << i << endl;
    }
    return 0;
}