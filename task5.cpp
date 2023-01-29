#include <iostream>
using namespace std;
int tr(int no);
main()
{
    int no;
    int sum;
    cout <<"sum of how many num:";
    cin>> no;
    sum = tr(no);
}
int tr(int no)
{ 
    int sum =0;
    for(int x=0;x<=no;x++)
    {
        sum =sum+x;
    }
    cout <<"total num of dotes are:" << sum;
    return sum;
}