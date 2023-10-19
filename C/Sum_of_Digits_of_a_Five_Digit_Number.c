#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d", &n);

    if(n>=10000 && n<=99999)
    {
        int temp=n;
        int flag=n*10;
        int sum=0;

        while(flag=flag/10)
        {
            n=n%10;
            sum=sum+n;
            temp=(temp-n)/10;
            n=temp;
        }
        printf("%d\n",sum);
    }
    else
    {
        printf("Invalid input, 10000<=Input<99999 ");
    }

    return 0;
}
