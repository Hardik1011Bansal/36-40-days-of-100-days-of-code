//Q76 (2D Arrays)
//Check if a matrix is symmetric.
// MATRIX SHOULD BE EQUAL TO ITS TRANSPOSE 
#include<stdio.h>

int main()
{
    int n1,n2;
    printf("Enter the number of rows and columns in the matrix respectively :");
    scanf("%d %d",&n1,&n2);
    if(n1!=n2)
    {
        printf("To be a symmetric matrix , the matrix should be square matrix first ");
        return 1;
    }
    int a[n1][n2],b[n1][n2];// square matrix so transpose matrix(b[i][j]) ko b[n2][n1] lena not a must as n1=n2)
    
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            printf("Enter the a[%d][%d] entry of the matrix:",i,j);
            scanf("%d",&a[i][j]);
            b[j][i]=a[i][j];
        }
    }
    
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(b[i][j]!=a[i][j])
            {
                printf("Not symmetric");
                return 2;
            }
        }
    }
    printf("Symmetric");
    
    return 0;
}
    
    
    
