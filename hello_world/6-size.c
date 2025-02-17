#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char CharType;
	int IntType;
	long int LongType;
	long long int LonglongType;
	float FloatType;

	printf("\n %lu octets pour variable de type char ", sizeof(char));
	printf("\n %lu octets pour variable de type int ",sizeof(int));
	printf("\n %lu octets pour variable de type long int ",sizeof(long int));
	printf("\n %lu octets pour variable de type long long int ",sizeof(long long int));
	printf("\n %lu octets pour variable de type float ",sizeof(float));
	return (0);
}
