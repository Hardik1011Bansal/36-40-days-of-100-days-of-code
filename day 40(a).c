//Q79 (2D Arrays)
//Perform diagonal traversal of a matrix.
#include<stdio.h>

int main()
{
    int n1,n2;
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
    
    for(int i=0;i<1;i++)
    {
        
        for(int j=0;j<n2;j++)
        {
            int c=i;
            int b=j;
           
            while(b>=0)
            {
                printf("%d\t",a[c][b]);
                b--;
                c++;
            }
       
        }
    }
    
    for(int j=n2-1;j<n2;j++)
    {
        for(int i=1;i<n1;i++)
        {
            int c=i;
            int b=j;
            while(c<n1)
            {
                printf("%d\t",a[c][b]);
                c++;
                b--;
            }
        }
    }
    
    
    
    return 0;
}
        
      
    
