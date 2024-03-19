#include <iostream>
#include <iostream>
#include <stdio.h>
#include <stdarg.h>
#include "Math.h"

int Math::Add(int x, int y)
{
	return x + y;
}

int Math::Add(int x, int y, int z)
{
	return x + y + z;
}

int Math::Add(double x, double y)
{
	return x + y;
}

int Math::Add(double x, double y, double z)
{
	return x + y + z;
}

int Math::Mul(int x, int y)
{
	return x * y;
}

int Math::Mul(int x, int y, int z)
{
	return x * y * z;
}

int Math::Mul(double x, double y)
{
	return x * y;
}

int Math::Mul(double x, double y, double z)
{
	return x * y * z;
}

int Math::Add(int count, ...)
{
	int result = 0;
	va_list args;
	va_start(args, count);

	for (int i = 0; i < count; i++)
		result += va_arg(args, int);

	va_end(args);
	return result;
}

char* Math::Add(const char* a, const char* b)
{
	if (a == nullptr || b == nullptr)
		return nullptr;
	else
	{
		char* s = new char[strlen(a) + strlen(b) + 1];
		strcpy(s, a);
		strcat(s, b);

		return s;
	}

}


