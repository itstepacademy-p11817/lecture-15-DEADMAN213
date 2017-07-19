#include <math.h>
#include "task_1.h"

// Function counting sum of digits in number given
long long get_digits_sum(long long number) {
	int sum = 0;

	while (number != 0) {
		sum += number % 10;
		number /= 10;
	}

    return sum;
}

// Function counting sum of digits for each prime number in range (l,r)
long long counter(long long l, long long r) {
	long long sum = 0;

	if (l + 1 == 2) {
		sum += 2;
		l += 2;
	}
	else if ((l + 1) % 2 == 0) {
		l += 2;
	}
	else {
		l++;
	}

	for (long long i = l; i < r; i += 2) {
		int num = 0;
		for (long long j = 3; j <= (long long)sqrt(i); j += 2) {
			if (i%j == 0) {
				num++;
				break;
			}
		}
		if (num == 0) {
			sum += get_digits_sum(i);
		}

	}//2 3 5 7 11 13 17 19 23    7

    return sum;
}
