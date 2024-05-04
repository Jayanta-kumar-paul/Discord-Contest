// #include<stdio.h>
// int main ()
// {
//     int a[]={1,2,3,6,9,2,7,8,2,5,9};
//     int size=11,i,j;
//     int found=0;

//    for ( i = 0; i < size; ++i) 
//     {
//         printf("%d ", a[i]);
//     }
//     for(i=0;i<size;i++)
//     {
//         for(j=i+1;j<size;j++)
//         {
//             if(a[i]==a[j]&&i!=j)
//             {
//                 found=1;
//                 printf("\n Duplicate numbers found at locations %d,%d",i,j);
//             }
//         }
//     }
//     if(found==0)
//     {
//         printf("\n No duplicate found");
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    int arr[] = {1, 2,3,6,9,2,7,8,2,5,9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target;
    printf("Enter the target integer: ");
    scanf("%d", &target);

    int found = 0;
    printf("All location of %d in array are:",target);
    for (int i = 0; i < size; ++i) 
    {
        if (arr[i] == target) 
        {
            found = 1;
            printf(" %d", i);
        }
    }
    
    if (!found)
    {
        printf("\nTarget integer not found in the array.");
    }

    return 0;
}
