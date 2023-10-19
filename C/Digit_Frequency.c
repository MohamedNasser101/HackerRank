#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1000];
    char frequency[11]={0};
    int length=0;
    scanf("%[^\n]",s);

    while(s[length]!='\0')
    {
        switch((s[length]-48))
        {
            case 0:
                frequency[0]++;
                break;
            case 1:
                frequency[1]++;
                break;
            case 2:
                frequency[2]++;
                break;
            case 3:
                frequency[3]++;
                break;
            case 4:
                frequency[4]++;
                break;
            case 5:
                frequency[5]++;
                break;
            case 6:
                frequency[6]++;
                break;
            case 7:
                frequency[7]++;
                break;
            case 8:
                frequency[8]++;
                break;
            case 9:
                frequency[9]++;
                break;
        }
        length++;
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",frequency[i]);
    }

    return 0;
}
