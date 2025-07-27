#include <stdio.h>
#include <string.h>

int main() 
{
    char ch,str[100],sen[100];
    scanf("%c",&ch);
    scanf("%s",&str);
    getchar();
    fgets(sen, sizeof(sen), stdin);
    printf("%c",ch);
    printf("\n%s",str);
    printf("\n%s",sen);
    return 0;
}
