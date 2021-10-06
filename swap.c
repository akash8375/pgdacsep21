#include<stdio.h>
void main()
{
    int a,b,temp;

    printf("Enter first no.:  ");
    scanf("%d",&a);
    
    printf("Enter Second no.:  ");
    scanf("%d",&b);

    temp = a;
    a    = b;
    b    = temp;
printf("After Swapping\n");

    printf("first no is %d :  ",a);
    printf("second no is %d :  ",b);
}