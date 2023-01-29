#include <iostream>
using namespace std;
void patients(int timeperiod,int patient);
main()
{
int timeperiod;
int patient;
cout <<"enter timeperiod:";
cin>>timeperiod;
patients(timeperiod,patient);
}
void patients(int timeperiod,int patient)
{
    int doctor = 7;
    int treated=0;
    int untreated=0; 
    for(int x=1;x<=timeperiod;x++)
    {
        cout <<"enter patient:";
        cin >> patient;
        
        if(patient<=doctor)
        {
            treated=treated+patient;
        }
        else if(patient>doctor)
        {
            treated=treated+doctor;
            untreated=untreated+(patient-doctor);
        }
        if(x%3 == 0)
        {
            if(untreated>treated)
            {
           doctor=doctor+1; 
            }
        }
    }
    cout <<"treated patients:" << treated << endl;
    cout <<"untreated patients:" << untreated << endl;
}
