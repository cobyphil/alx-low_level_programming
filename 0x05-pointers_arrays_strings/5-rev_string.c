#include "main.h"
#include <string.h>

/*
 *@temp : temporary variable
 *@i:
 *@s:
 *@len:
 */

void rev_string(char *s)
{
    int len = strlen(s);
    char temp;
    for (int i = 0; i < len / 2; i++)
    {
        temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }
}
