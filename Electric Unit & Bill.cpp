#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int unit;
    double charge;
    cout<<"Enter your consumption unit is : ";
    cin>>unit;
    if(unit>0 && unit<200)
    {
        charge = 0.75*unit;
        cout<<"The customer electrical charge is : "<<charge<<endl;
    }
    else if(unit>=200 && unit<400)
    {
        charge = 1000 + 0.50*unit;
        cout<<"The customer electrical charge is : "<<charge<<endl;
    }
    else if(unit>=400 && unit<600)
    {
        charge = 1200 + 0.75*unit;
        cout<<"The customer electrical charge is : "<<charge<<endl;
    }
    else
    {
        charge = 1500 +  1.00*unit;
        cout<<"The customer electrical charge is : "<<charge<<endl;
    }

    getch();
}
