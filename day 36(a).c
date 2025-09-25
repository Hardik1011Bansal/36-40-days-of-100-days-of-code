
//Q71 (2D Arrays)
//Read and print a matrix.
#include<stdio.h>

int main()
{
    int n1,n2;
    printf("Enter number of rows and columns respectively :");
    scanf("%d %d",&n1,&n2);
    int a[n1][n2];
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            printf("Enter a[%d][%d] entry of the matrix:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
