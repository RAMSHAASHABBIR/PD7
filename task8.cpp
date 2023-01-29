#include <iostream>
using namespace std;
void result(int tonnage,int howmanyton);
main()
{
int tonnage;
int howmanyton;
cout <<"how many tons:";
cin >> howmanyton;
result(tonnage,howmanyton);
}
void result(int tonnage,int howmanyton)
{
    float tons=0;
    float tons1=0;
    float tons2=0;
    float totaltons=0;
    float perminibus=0;
    float pertruck=0;
    float pertrain=0;
    float average=0;
    for(int j=1;j<=howmanyton;j++)
    {
        cout<<"enter no of tons:";
        cin >> tonnage;
        if(tonnage<=3)
        {
            tons=tons+tonnage;
        }
        if(tonnage>3&&tonnage<=11)
        {
            tons1=tons1+tonnage;
        }
        if(tonnage>11)
        {
            tons2=tons2+tonnage;
        } 
    }
    totaltons=tons+tons1+tons2;
    perminibus=(tons/totaltons)*100;
    cout <<"percentage of cargo by mini bus:" <<perminibus << endl;
    pertruck=(tons1/totaltons)*100;
    cout <<"percentage of cargo by truck:" <<pertruck << endl;
    pertrain=(tons2/totaltons)*100;
    cout <<"percentage of cargo by train:" << pertrain << endl;
    average=(((tons*200.0)+(tons1*175.0)+(tons2*120.0))/totaltons);
    cout <<"average is:" <<average << endl;
}