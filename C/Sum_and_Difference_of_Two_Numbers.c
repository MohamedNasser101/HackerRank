#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int intNum1;
    int intNum2;
    float floatNum1;
    float floatNum2;
    
    scanf("%d %d",&intNum1,&intNum2);
    scanf("%f %f",&floatNum1,&floatNum2);
    
    printf("%d %d\n%.1f %.1f",intNum1+intNum2,intNum1-intNum2,floatNum1+floatNum2,floatNum1-floatNum2);
    
    return 0;
}
