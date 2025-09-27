//Q75 (2D Arrays)
//Add two matrices.
#include<stdio.h>

int main()
{
    int n1,n2,n3,n4;
    printf("Enter the number of rows and columns in the first matrix respectively :");
    scanf("%d %d",&n1,&n2);
   
    printf("Enter the number of rows and columns in the second matrix respectively :");
    scanf("%d %d",&n3,&n4);
    
    if((n1!=n3) || (n2!=n4))
    {
        printf("The order of the matrices should be equal in order to add them ");
        return 1;
    }
     int a[n1][n2],b[n3][n4],sum[n1][n2];
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            printf("Enter the a[%d][%d] entry of the first matrix:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
     for(int i=0;i<n3;i++)
    {
        for(int j=0;j<n4;j++)
        {
            printf("Enter the b[%d][%d] entry of the second matrix:",i,j);
            scanf("%d",&b[i][j]);
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            printf("%d \t",sum[i][j]);
           
        }
        printf("\n");
    }
    
    
    return 0;
}
