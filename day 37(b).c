//Q74 (2D Arrays)
//Find the transpose of a matrix.
#include<stdio.h>

int main()
{
    int n1,n2;
    printf("Enter the number of rows and columns of the array respectively:");
    scanf("%d %d",&n1,&n2);
    
    int a[n1][n2],b[n2][n1];
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            printf("Enter the a[%d][%d] entry of the array :",i,j);
            scanf("%d",&a[i][j]);
            b[j][i]=a[i][j];
        }
    }
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n1;j++)
        {
            printf("%d\t",b[i][j]);
        }
       printf("\n");
    }
    
    return 0;
}
