#include <stdio.h>

int max_of_four(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
int max_of_four(int a, int b, int c, int d)
{
    return (((((a>=b)?a:b)>=c)?((a>=b)?a:b):c)>=d)?((((a>=b)?a:b)>=c)?((a>=b)?a:b):c):d;
}
//       (a>=b)?a:b            return >>      max1
//       (max1>=c)?max1:c      return >>      max2
//       (max2>=d)?max2:d       return >>     max3
//       Final result max3 
