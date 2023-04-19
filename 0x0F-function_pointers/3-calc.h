#ifndef CALC_H
#define CALC_H

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/*
 * Function prototypes for 3-op_functions.c
 */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/*
 * Function prototype for 3-get_op_func.c
 */
int (*get_op_func(char *s))(int, int);

#endif /* CALC_H */
