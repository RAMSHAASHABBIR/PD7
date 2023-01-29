#include <iostream>
using namespace std;
main()
{
    int rows;
    cout <<"enter no of rows:";
    cin >> rows;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout <<"*";
        }
        for(int k=i+1;k<=((2*rows)-i);k++)
        {
            cout <<" ";
        } 
        for(int l=rows;l>(rows-i);l--)
        {
            cout <<"*";
        }
        cout << endl;
    }
}