// Problem2-3-2_FindMaximum.c : Defines the entry point for the console application.
//

#include "stdafx.h"

#pragma warning(disable : 4996)


int main()
{
	size_t n;
	scanf("%u", &n);
	double maximum;
	double term;
	for (size_t i = 0; i < n; i++)
	{
		scanf("%lf", &term);
		if (i == 0)
		{
			maximum = term;
		}
		else
		{
			if (maximum < term)
			{
				maximum = term;
			}
		}
	}
	printf("%lf", maximum);
    return 0;
}

