// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double result = 1;
	for (int i = 0; i < n; i++)
	{
		result *= value;
	}
	return result;
}

uint64_t fact(uint16_t n) {
  if (n == 0) {
		return 1;
	}
	else {
		return n * fact(n - 1);
	}
}

double calcItem(double x, uint16_t n) {
  return (pown(x, n)) / (fact(n));
}

double expn(double x, uint16_t count) {
  double result = 1;
	for (int i = 1; i <= count; i++)
	{
		result += calcItem(x, i);
	}
	return result;
}

double sinn(double x, uint16_t count) {
  double result = x;
	for (int i = 2; i <= count; i++)
	{
		if (pown(-1, i - 1) == 1)
		{
			result += calcItem(x, (i * 2) - 1);
		} else {
			result -= calcItem(x, (i * 2) - 1);
		} 
	}
	return result;
}

double cosn(double x, uint16_t count) {
  double result = 1;
	for (int i = 2; i <= count; i++)
	{
		if (pown(-1, i - 1) == 1)
		{
			result += calcItem(x, (i * 2) - 2);
		} else {
			result -= calcItem(x, (i * 2) - 2);
		}
	}
	return result;
}
