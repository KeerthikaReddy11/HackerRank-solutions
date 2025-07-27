#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,digit,sum;
    scanf("%d", &n);
    sum=0;
    while(n>0)
    {
       digit=n%10;
       sum=sum+digit;
       n=n/10;
    }
    printf("%d",sum);
    return 0;
}
