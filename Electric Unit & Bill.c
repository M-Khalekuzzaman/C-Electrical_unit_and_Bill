#include<stdio.h>
int main()
{
    int unit;
    double charge;
    printf("Enter your consumption unit is : ");
    scanf("%d",&unit);
    if(unit>0 && unit<200)
    {
        charge = 0.75*unit;
        printf("The customer electrical charge is : %.2lf\n",charge);
    }
    else if(unit>=200 && unit<400)
    {
        charge = 1000 + 0.50*unit;
        printf("The customer electrical charge is : %.2lf\n",charge);
    }
    else if(unit>=400 && unit<600)
    {
        charge = 1200 + 0.75*unit;
        printf("The customer electrical charge is : %.2lf\n",charge);
    }
    else
    {
        charge = 1500 +  1.00*unit;
        printf("The customer electrical charge is : %.2lf\n",charge);
    }

    getch();
}
