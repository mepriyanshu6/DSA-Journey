  /*
ABCDEF
ABCDEF...
ABCDEF...
ABCDEF...
ABCDEF...
ABCDEF...
 ..... 
 .....
 .....
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

    char ch = 'A';// To write in LOOP
        //Inner Loop
        for (j=0; j<=n; j++) //Inner loop => to print the character
            {
            cout << ch; // To print the character
            ch = ch + 1; // To print the next character

            }
        cout << endl;// To print the next line
    }
        return 0;
}