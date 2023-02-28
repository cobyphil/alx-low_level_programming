#include <stdio.h>
#include <string.h>

void puts_half(char *str)
{
    int len = strlen(str);
    int start = len / 2;
    printf("%s\n", &str[start]);
}
