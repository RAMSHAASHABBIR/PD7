#include <iostream>
using namespace std;
main()
{
    int rows;
    cout <<"enter no of rows:";
    cin >> rows;
for(int j=1;j <=rows;j++)
{
    for(int k=rows;k>=j;k--)
    {
        cout <<"*";
    }
cout <<endl;
}
}