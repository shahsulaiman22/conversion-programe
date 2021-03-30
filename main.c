#include<stdio.h>
int main()
{
    int temperature [5];
    int index=0,sum=0;
    for (index=0; index<5; index++)
    {
        printf ("\n enter value of temprature [%d]\t",index);
        scanf ("%d",&temperature [index]);
    }
        printf ("\n the sum of array temprature is %d",sum);
        printf ("\n the avarage temperature is %d",sum/5);\
        return 0;
}

