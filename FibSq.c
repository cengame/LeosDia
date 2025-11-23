#include <stdlib.h>
#include <stdio.h>
#define CONST 100

void ExibNumb()
{
	//F = (n1 + n2)n
	int i;
	unsigned long long int PrevSum = 1ULL;
	unsigned long long int Sum = 0ULL;

	for(i = 0; i <= (CONST-1); i++)
	{
		if(i % 2 == 0) {
			Sum += PrevSum;
    			printf("[%llu] ", Sum);
		} else {
			PrevSum += Sum;
			printf("[%lld] ", PrevSum);
		}
	}
}

int main() {

	printf("O programa a seguir mostra os cem primeiros digitos da sequência de Fibonnaci (A000045 na OEIS).\n");
	printf("O sinal acrescido à algumas iterações demonstra o limite do tipo escolhido, não seu negativo matemático.\n");

	ExibNumb();
	printf("\n");
	return 0;
}
