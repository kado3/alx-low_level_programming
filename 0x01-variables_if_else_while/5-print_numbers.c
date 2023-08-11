#include <stdio.h>
int main(void) {
int number = 0;
while (number < 10) {
putchar(number + '0'); // Convert the number to its character representation
number++;
}
putchar('\n');
return 0;
}
