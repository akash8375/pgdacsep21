//Compound Interest
#include<stdio.h>
#include<math.h>
void main()
    {
        float p,r,t,n,ci;
        printf("Enter Principle amount: ");
        scanf("%f",&p);

        printf("Enter rate of Interest: ");
        scanf("%f",&r);
        
        printf("Enter time: ");
        scanf("%f",&t);

        printf("Enter no of years: ");
        scanf("%f",&n);

        ci = p*(pow(1+(r/100),(n*t)));
        printf("The compound interest is %f",ci);


    }