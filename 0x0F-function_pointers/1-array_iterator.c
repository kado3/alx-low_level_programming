#include <stdio.h>
#include "function_pointers.h"
void print_element(int num)
{
printf("%d ", num);
}
void square_element(int num)
{
printf("%d ", num * num);
}
int main(void)
{
int my_array[] = {1, 2, 3, 4, 5};
size_t array_size = sizeof(my_array) / sizeof(my_array[0]);
printf("Printing elements of the array:\n");
array_iterator(my_array, array_size, print_element);
printf("\n");
printf("Squaring elements of the array:\n");
array_iterator(my_array, array_size, square_element);
printf("\n");
return (0);
}
