#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[256];
    int length;

    scanf("%s", str );

    length = strlen(str);

    for(int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    return 0;
}