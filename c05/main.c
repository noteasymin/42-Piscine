#include <stdio.h>
#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"
#include "ex05/ft_sqrt.c"
#include "ex06/ft_is_prime.c"
#include "ex07/ft_find_next_prime.c"

int main() {
	// Exercise 00
	for (int i = -2; i <= 12; ++i)
		printf("fact[%d] = %d\n", i, ft_iterative_factorial(i));
	printf("\n");

	// Exercise 01
	for (int i = -2; i <= 12; ++i)
		printf("fact[%d] = %d\n", i, ft_recursive_factorial(i));
	printf("\n");

	// Exercise 02
	for (int i = -4; i <= 4; i += 4) {
		for (int j = -2; j < 10; ++j)
			printf("(%d)^(%d) = %d\n", i, j, ft_iterative_power(i, j));
		printf("\n");
	}

	// Exercise 03
	for (int i = -4; i <= 4; i += 4) {
		for (int j = -2; j < 10; ++j)
			printf("(%d)^(%d) = %d\n", i, j, ft_recursive_power(i, j));
		printf("\n");
	}

	// Exercise 04
	for (int i = -2; i <= 10; ++i)
		printf("fibo[%d] = %d\n", i, ft_fibonacci(i));
	printf("\n");

	// Exercise 05
	for (int i = 1; i <= 10000; i *= 10)
		printf("sqrt(%d) = %d\n", i * i, ft_sqrt(i * i));
	printf("\n");

	for (int i = 1; i <= 10000; i *= 10)
		printf("sqrt(%d) = %d\n", -i * i, ft_sqrt(-i * i));
	printf("\n");

	for (int i = 2147395599; i <= 2147395601; ++i)
		printf("sqrt(%d) = %d\n", i, ft_sqrt(i));
	printf("\n");

	int x = 2147483647;
	printf("sqrt(%d) = %d\n", x, ft_sqrt(x));
	x = -2147483648;
	printf("sqrt(%d) = %d\n", x, ft_sqrt(x));
	x = 0;
	printf("sqrt(%d) = %d\n\n", x, ft_sqrt(x));

	// Exercise 06
	for (int i = -5; i <= 50; ++i)
		if (ft_is_prime(i))
			printf("%d ", i);
	printf("\n");

	printf("%d ", ft_is_prime(-2147483648));
	printf("%d\n\n", ft_is_prime(2147483647));

	// Exercise 07
	for (int i = -5; i <= 20; ++i)
		printf("%d -> %d\n", i, ft_find_next_prime(i));
	printf("\n");
	x = -2147483648;
	printf("%d -> %d\n", x, ft_find_next_prime(x));
	x = 2147483647;
	printf("%d -> %d\n", x, ft_find_next_prime(x));
	return 0;
}
