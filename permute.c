#include <stdio.h>

int main(void)
{
	// permutation des valeurs A et B
	int A=25;
	int B=48;
	int C=B;

	// resulta de la permutation de A et B
	B=A;
	A=C;
	printf("Valeur A et B : %d %d\n", A, B);

	return 0;
}
