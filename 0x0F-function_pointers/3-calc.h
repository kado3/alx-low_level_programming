#ifndef CALC_H
#define CALC_H
/* Structure for the function pointers */
typedef struct op {
    char *op;
    int (*f)(int a, int b);
} op_t;

/* Function prototypes */
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divi(int a, int b);
int mod(int a, int b);

#endif
