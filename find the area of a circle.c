#include<stdio.h>
int main()
{
float r,c,a,pi;
pi=3.14;
printf("Enter The radius:");
scanf("%f",&r);
a=pi*r*r;
printf("area= %f\n",a);
c= 2*pi*r;
printf("circumference= %f",c);
return 0;
}