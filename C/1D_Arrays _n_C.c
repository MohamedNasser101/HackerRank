#include <stdio.h>
#include <stdlib.h>

int main() {


    int n,flag=1,sum=0,*arr;
    scanf("%d",&n);
    if(n>=1 && n<=1000)
    {
        arr=(int*)malloc(n*sizeof(int));
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]<1 || arr[i]>1000)
            {
                flag=0;
                break;
            }
            sum+=arr[i];
        }
    }
    free(arr);
    if(flag)
    {
        printf("%d",sum);
    }

    return 0;
}
