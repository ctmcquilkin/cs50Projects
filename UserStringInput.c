#include <stdio.h>
/* not for production use buffer overflow danger! */
/* Source: http://stackoverflow.com/questions/7831755/what-is-the-simplest-way-of-getting-user-input-in-c */

int main(void)
{
    char file[100];
    printf("File Name?: \n");
    fgets(file, 100, stdin);
    printf("Your input: %s", file);
}

