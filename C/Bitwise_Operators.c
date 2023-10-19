#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void calculate_the_maximum(int n, int k)
{
  int and,or,xor;
  int maxAnd=0,maxOr=0,maxXor=0;
  for(int i=1;i<n;i++)
  {
      for(int j=2+i-1;j<=n;j++)
      {
          and = i&j;
          or = i|j;
          xor = i^j;
          maxAnd=((and>maxAnd) && and<k)?and:maxAnd;
          maxOr=((or>maxOr) && or<k)?or:maxOr;
          maxXor=((xor>maxXor) && xor<k)?xor:maxXor;
      }
  }
  printf("%d\n%d\n%d",maxAnd,maxOr,maxXor);
}

int main()
{
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
