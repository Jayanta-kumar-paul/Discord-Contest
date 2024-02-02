#include<stdio.h>
int main()
{
    int num,multi;
    printf("Enter the multipication table no.:");
    scanf("%d",&num);
    for(int i=1;i<=10;i++)
    {
        multi=num*i;
        {
            printf("\n%d*%d=%d",num,i,multi);
        }
    }
    return 0;
}