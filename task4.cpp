#include <iostream>
using namespace std;
void howmanydigit(int digit);
main()
{
   int digit;
   cout <<"how many digit:";
   cin>> digit;
   howmanydigit(digit);
}
void howmanydigit(int digit)
{
    int j=0;
    for(int x=1;x<=digit;x++)
    {
        cout << x << endl;
        if(x%4==0)
        {
            j=x*10;
            cout << j << endl;
        }
    }
}