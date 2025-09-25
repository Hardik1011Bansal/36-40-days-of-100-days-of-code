//Q72 (2D Arrays)
//Find the sum of all elements in a matrix.
#include<stdio.h>

int main()
{
    int n1,n2,sum=0;
    printf("Enter number of rows and columns respectively :");
    scanf("%d %d",&n1,&n2);
    int a[n1][n2];
    
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            printf("Enter the a[%d][%d] entry of the array:",i,j);
            scanf("%d",&a[i][j]);
            sum += a[i][j];
            }
    }
    printf("%d",sum);
    
    return 0;
}
