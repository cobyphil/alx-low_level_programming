#include "main.h"

/**
 *swap integers
 * @a: first number
 * @b: second number
 * @temp: temporary variable
 */

int swap_int(int *a, int *b)
{
int temp = 0;
temp = *a;
*a = *b;
*b = temp;
}
