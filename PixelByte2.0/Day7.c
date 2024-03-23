#include <stdio.h> 
int main() 
{ 
    int rows = 5; 
    for (int i = 0; i < rows; i++)
     { 
        for (int j = 0; j < (rows - i) ; j++)
        { 
            printf(" "); 
        } 
        for (int k = 0; k <=  i ; k++) 
        { 
            printf("* "); 
        } 
        printf("\n"); 
    } 
    for (int i = rows; i >= 0; i--)
    { 
        for (int j =(rows-i); j >0 ; j--) 
        { 
            printf(" "); 
        } 
        for (int k = i; k >=0 ; k--) 
        { 
            printf("* "); 
        } 
            printf("\n");
    }
    return 0; 
}
//      * 
//     * * 
//    * * * 
//   * * * * 
//  * * * * * 
// * * * * * * 
//  * * * * * 
//   * * * * 
//    * * * 
//     * * 
//      * 