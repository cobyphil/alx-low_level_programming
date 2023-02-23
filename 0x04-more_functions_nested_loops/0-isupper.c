#Include "main.h"
/*
*checks if character is uppercase
*/

/*int _isupper(int c)
{
If isupper(c)
{
return (1);
}
Else
{
return (0);
}
}*/

#include "main.h"
/**
* _isupper - checks for uppercase character
* @c: Variable text
* Return: Always 0.
*/
int _isupper(int c)
{
 if (c >= 'A' && c <= 'Z')
 {
 return (1);
 }
 else
{
 return (0);
}

