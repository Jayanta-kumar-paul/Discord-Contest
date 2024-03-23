#include<stdio.h>
int main()
{
    int i,j,n,f;
    printf("Enter term : ");
    scanf("%d",&n);
    for(i=1,f=0;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(j=0;j<=n-i;j++)
        {
            if(j==0 || j==n-i || i==1)
            {
                printf("%d ",f);
                ++f;
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for(i=1,f-=2;i<n;i++)
    {
        for(j=1;j<n-i;j++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            if(j==0 || j==i || i==n-1)
            {
                printf("%d ",f);
                f--;
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
// Enter term : 4
// 0 1 2 3 
//  4   5 
//   6 7 
//    8 
//   7 6 
//  5   4 
// 3 2 1 0