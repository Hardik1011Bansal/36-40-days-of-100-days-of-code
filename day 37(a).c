//Q73 (2D Arrays)
//Find the sum of each row of a matrix and store it in an array.
#include<stdio.h>

int main()
{
    int n1,n2;
    printf("Enter the number of rows and columns of the array respectively:");
    scanf("%d %d",&n1,&n2);
    
    int a[n1][n2],b[n1];
    for(int i=0;i<n1;i++)
    {
        int sum=0;
        for(int j=0;j<n2;j++)
        {
            printf("Enter the a[%d][%d] entry of the array :",i,j);
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
        b[i]=sum;
    }
    for(int i=0;i<n1;i++)
    {
        printf("%d\t",b[i]);
    }
    
    return 0;
}
