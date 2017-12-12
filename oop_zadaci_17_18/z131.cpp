#include <stdio.h>

int max(int N[]) {
	int i, max = N[0];
	for (i = 0; i < 5; i++)
	{
		if (N[i] > max)
			max = N[i];
	}
	return max;
}

int main() {
	int A[5], i;
	for (i = 0; i < 5; i++)
	{
		printf("Unesite element");
		scanf("%d",&A[i]);
	}

	printf("Maksimum je %d", max(A));
	return(0);
}

