#include<stdio.h>
int main ()
{
    int a[' '],size;
    printf("Enter the size of array :");
    scanf("%d",&size);

    printf("Input %d elements in the array :\n",size);
    for (int i=0;i<=size-1;i++)
    {
        printf("element-%d:",i);
        scanf("%d",&a[i]);
    }

    int max=a[0],min=a[0];


    for(int i=0;i<=size-1;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("maximum element is :%d\n",max);
     printf("minimum element is :%d\n",min);
    return 0;
}