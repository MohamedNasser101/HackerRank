#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
      
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<(i-1);j++)
        {
            printf("%d ",n-j);
        }
        for(int j=1;j<2*n-2*(i-1);j++)
        {
            printf("%d ",(n-(i-1)));
        }
        for(int j=0;j<(i-1);j++)
        {
            printf("%d ",n-(i-2)+j);
        }
        printf("\n");
    }
    /*
    5 5 5 5 5 5 5 5 5 
    5 4 4 4 4 4 4 4 5 
    5 4 3 3 3 3 3 4 5 
    5 4 3 2 2 2 3 4 5 
    5 4 3 2 1 2 3 4 5 
    */
    
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            printf("%d ",n-j);
        }
        for(int j=0;j<2*i-1;j++)
        {
            printf("%d ",1+i);
        }
        for(int j=0;j<n-i;j++)
        {
            printf("%d ",(1+i)+j);
        }
        printf("\n");
    }
    /*
    7 6 5 4 3 2 2 2 3 4 5 6 7 
    7 6 5 4 3 3 3 3 3 4 5 6 7 
    7 6 5 4 4 4 4 4 4 4 5 6 7 
    7 6 5 5 5 5 5 5 5 5 5 6 7 
    7 6 6 6 6 6 6 6 6 6 6 6 7 
    7 7 7 7 7 7 7 7 7 7 7 7 7 
    */
    
      
    return 0;
}
