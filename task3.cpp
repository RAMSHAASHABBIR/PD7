#include <iostream>
using namespace std;
void uppertri(int rows);

main()
{
    int rows;
    cout <<"enter no of rows:";
    cin >> rows;
    uppertri(rows);
   
}
void uppertri(int rows)
{
for(int i=1;i<=(rows/2);i++)
   {
    for(int j=(rows/2);j>=i;j--)
    {
    cout <<" ";
    }
    for(int j=1;j<=i;j++)
    {
    cout <<"*";
    }
    cout << endl;
   }
   for(int i=1;i<=(rows/2);i++)
   {
    for(int j=1;j<=i;j++)
    {
    cout <<" ";
    }
    for(int j=(rows/2);j>=i;j--)
    {
    cout <<"*";
    }
    cout << endl; 
   }
}

    