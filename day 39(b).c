// Q78 (2D Arrays)
//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main()
{
    int n1,n2,sum=0;
    printf("Enter the number of rows and columns in the matrix respectively :");
    scanf("%d %d",&n1,&n2);
    if(n1!=n2)
    {
        printf("It is not a square matrix and diagonal exists only in square matrix");
        return 1;
    }
    int a[n1][n2];
    
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            printf("enter the a[%d][%d] entry of the matrix:",i,j);
            scanf("%d",&a[i][j]);
            if(i==j)
            {
                sum+=a[i][j];
            }
        }
    }
    printf("%d",sum);

    return 0;
}
