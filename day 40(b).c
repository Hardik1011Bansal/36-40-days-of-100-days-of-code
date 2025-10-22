//Q80 (2D Arrays)
//Multiply two matrices.
#include <stdio.h>

int main() 
{
    int m,n;
        printf("Enter the number of rows and columns in the first matrix respectively :");
        scanf("%d%d",&m,&n);
        if((m<=0)||(n<=0))
        {
            printf("Such a matrix cannot exist ");
            return 1;
        }
        int p,q;
        
        printf("Enter the number of rows and columns in the second matrix respectively :");
        scanf("%d%d",&p,&q);
        if((p<=0)||(q<=0))
        {
            printf("Such a matrix cannot exist ");
            return 2;
        }
         int a[m][n],b[p][q];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("Enter the a[%d][%d] element of the first matrix :",i+1,j+1);
                scanf("%d",&a[i][j]);
             }
        }
        printf("\n");
        
         for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
            {
                printf("Enter the b[%d][%d] element of the second matrix :",i+1,j+1);
                scanf("%d",&b[i][j]);
             }
        }
        
        printf("           MATRIX 1\n");
         for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        
        printf("           MATRIX 2\n");
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
            {
                printf("%d\t",b[i][j]);

             }
             printf("\n");
        }
        if(n!=p)
        {
            printf("Matrix multiplication cannot take place ");
            return 3;
        }
        
        int c[m][q];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                int sum=0;
                for(int k=0;k<n;k++)
                sum+=a[i][k]*b[k][j];
                c[i][j]=sum;
            }
        }
        printf("     RESULTANT PRODUCT MATRIX\n");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
        
        
        
        
    
   
    

    return 0;
}
