#include <stdio.h>

int main(void)
{
    char str[BUFSIZ];
    printf("What is your name please: ");
    scanf("%s", str);
    printf("hello, %s\n", str);
}
