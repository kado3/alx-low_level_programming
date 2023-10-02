#include "main.h"
/**
* get_endianness - Checks the endianness of the system.
*
* Return: 0 if big endian, 1 if little endian.
*/
int get_endianness(void)
{
unsigned int num = 1;
char *endian_check = (char *)&num;
if (*endian_check == 1)
{
/* The least significant byte is stored first (little endian) */
return (1);
}
else
{
/* The most significant byte is stored first (big endian) */
return (0);
}
}
