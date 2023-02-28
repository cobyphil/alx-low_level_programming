#include "main.h"

/* *
*swap integers
* @a to @b
* @b to @a
*/

void swap_int(int *a, int *b)
{
int temp=0;
temp = *a;
*a = *b;
*b = temp;
}
