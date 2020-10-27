#include <stdio.h>
#include "Math.h"

int sum(int a, int b) {
	return a + b;
}

int power(int a) {
	return a * a;
}


/**
 ** Complexity: O(Log n)
**/
int sqrt(int a) {

	int left = 1;
	int right = a;
	
	if (a < 2) {
		return a;
	}
	
	while (left < right) {

		int mid = sum(left, (right - left) / 2);
		
		if (power(mid) == a) {
			return mid;
		} else if (power(mid) > a) {
			right = mid;
		} else if (power(mid) < a) {
			left = sum(mid, 1);
		}
	}
	
	return left - 1;
}