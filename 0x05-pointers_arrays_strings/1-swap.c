/*
 * File: 1-swap.c
 * Auth: harry dennis
 */

#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: integer to swap
 * @b:integer to swap
 */
void swap_int(int *a, int *b);
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
