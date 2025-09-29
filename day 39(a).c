//Q77 (2D Arrays)
//Check if the elements on the diagonal of a matrix are distinct.
#include<stdio.h>

int main()
{
    int n1,n2,b=0;
    printf("Enter the number of rows and columns of the matrix:");
    scanf("%d %d",&n1,&n2);
    if(n1!=n2)
    {
        printf("The matrix is not a square matrix ");
        return 2;
    }
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
        for(int j=i+1;j<n2;j++)
        {
            if (a[i][i]==a[j][j])
            {
               b=1;
               
            }
        }
    }
    if(b==1)
    {
        
       printf(" not distinct");
    }
    else
    {
        printf("distinct");
    }
    return 0;
}
