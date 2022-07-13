#include <stdio.h>
#include <math.h>
int num;
float i,v,r,p,g,fr,t,cp,q,x,a,b;

double z,e;
void main()
{
printf("***Welcome to calculate BASIC ELECTRICAL PARAMETRS***\n\n Which Parameter you want to calculate??\n Enter no in front of them\n");
printf(" 1.Resister\n 2.Voltage\n 3.Current\n 4.Conductance\n 5.Power\n 6.Frequency\n 7.Period\n 8.Capacitance\n 9.Charge\n 10.Impedence\n");

while(1)
{
    scanf("%d",&num);
switch(num)
{
case 1:
    printf("To Calculate value of Register:\n Enter values of voltage and current\n");
    scanf("%f%f",&v,&i);
    r=v/i;
    printf("Value of Register R=%f ohm",r);
    break;
case 2:
    printf("To Calculate value of Voltage:\n Enter values of current and register\n");
    scanf("%f%f",&i,&r);
    v=i*r;
    printf("Value of Voltage V=%f Volt",v);
    break;

case 3:
    printf("To Calculate value of Current:\n Enter values of voltage and register\n");
    scanf("%f%f",&v,&r);
    i=v/r;
    printf("Value of Current I=%f Ampere",i);
    break;
case 4:
    printf("To Calculate value of Conductance:\n Enter values of register\n");
    scanf("%f",&r);
    g=1/r;
    printf("Value of Conductance G=%f Mho",g);
    break;
case 5:
    printf("To Calculate value of Power:\n Enter values of voltage and current\n");
    scanf("%f%f",&v,&i);
    p=v*i;
    printf("Value of Power P=%f Watts",p);
    break;

case 6:
    printf("To Calculate value of frequency:\n Enter values of time period\n");
    scanf("%f",&t);
    fr=1/t;
    printf("Value of Frequency F=%f Hz",fr);
    break;

case 7:
    printf("To Calculate value of period:\n Enter values of frequency\n");
    scanf("%f",&fr);
    t=1/fr;
    printf("Value of Period T=%f sec",t);
    break;
case 8:
    printf("To Calculate value of Capacitance:\n Enter values of charge and voltage\n");
    scanf("%f%f",&q,&v);
    cp=q/v;
    printf("Value of Capacitance C=%f Farad",cp);
    break;
case 9:
    printf("To Calculate value of Charge:\n Enter values of capacitance and voltage \n");
    scanf("%f%f",&cp,&v);
    q=cp*v;
    printf("Value of Charge Q=%f Coulomb",q);
    break;

case 10:
    printf("To Calculate value of Impedence:\n Enter value of resitance and reactance\n");
    scanf("%f%f",&r,&x);
    a=pow(r,2);
    b=pow(x,2);
     e=a+b;
    z= sqrt(e);
     printf("Value of Impedence Z=%lf",z);
    break;

default:
    printf("Default");
}
}
}
