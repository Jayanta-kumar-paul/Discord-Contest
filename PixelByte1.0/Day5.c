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
// Enter the multipication table no.:8
// 8*1=8
// 8*2=16
// 8*3=24
// 8*4=32
// 8*5=40
// 8*6=48
// 8*7=56
// 8*8=64
// 8*9=72
// 8*10=80