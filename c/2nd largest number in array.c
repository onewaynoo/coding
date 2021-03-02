#include <stdio.h>
main()
{
    int i,largest=0,secondlargest=0,size;
    printf("enter the size of array");
    scanf("%d",&size);
    int a[size];
    printf("enter the numbers");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        if (a[i]>largest)
           {
            secondlargest=largest;
            largest=a[i];
           }
         else if(a[i]<largest && a[i]>secondlargest)
         {
             secondlargest=a[i];
         }

    } printf("second largest number is %d \n",secondlargest);
    printf("largest number is %d",largest);
}
