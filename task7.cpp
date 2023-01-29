#include <iostream>
using namespace std;
void divisible(int count,int digit);
main()
{
    int count;
    int digit;
    cout <<"how many numbers:";
    cin >> count;
    divisible(count,digit);
}
void divisible(int count,int digit)
{
    float save=0;
    float save1=0;
    float save2=0;
    float p1=0;
    float p2=0;
    float p3=0;
    for(int j=1;j<=count;j++)
    {
        cout <<"how many digits:";
        cin >> digit;
        if(digit%2==0)
        {
            save=save+1;
        }
        if(digit%3==0)
        {
            save1=save1+1;
        }
        if(digit%4==0)
        {
            save2=save2+1;
        } 
    }
    p1=(save/count)*100;
    p2=(save1/count)*100;
    p3=(save2/count)*100;
    cout <<"per of num disivible by 2 is:" << p1 << endl;
    cout <<"per of num disivible by 3 is:" << p2 << endl;
    cout <<"per of num disivible by 4 is:" << p3 << endl;
}
