                    /*
                    1 2 3 4 5 
                    6 7 8 9 10
                    11 12 13 14 15 
                    16 17 18 19 20
                    21 22 23 24 25    
                
                    */





#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout  <<"Enter a Number"<< endl;
    cin >> n;

     int num=1; //To stop value resetting to 1 in each iteration of outer loop     


    //Outer Loop for n times

    for (int i=0; i<n;i++)
    {
        //Inner Loopi want to depent number on n

        for (int j=0; j<n; j++)
            {
            cout <<num<< " "; // To print the value of num
            num++; // To increment the value of num
            }
        cout << endl;//  TO print the next line
    }
        return 0;
}

