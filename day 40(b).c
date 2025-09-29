//Q80 (2D Arrays)
//Multiply two matrices.
#include<stdio.h>

int main()
{
    int n1,n2,n3,n4;
    printf("Enter the number of rows and columns of the first  matrix respectively:");
    scanf("%d %d",&n1,&n2);
    
    printf("Enter the number of rows and columns of the second  matrix respectively:");
    scanf("%d %d",&n3,&n4);
    
    if(n2!=n3)
    {
        printf("Matrix multiplication can not take place ");
        return 1;
    }
    
    int a[n1][n2],b[n3][n4],c[n1][n4];
    
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            printf("Enter a[%d][%d] entry of the firts matrix:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
     for(int i=0;i<n3;i++)
    {
        for(int j=0;j<n4;j++)
        {
            printf("Enter a[%d][%d] entry of the second matrix:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n4;j++)
        {
            int sum =0;
            for(int k=0;k<n2;k++)
            
            {
                sum+=a[i][k]*b[k][j];
                c[i][j]=sum;
            }
            
        }
    }
    
    
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n4;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
    
