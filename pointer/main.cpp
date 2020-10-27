#include <stdio.h>
#include <stdlib.h>
//#include "Array.h"

// Compilador executa de forma "top-down"

// 10*80 number of atoms in the universe

#define SIZE_ARR 10

void change(int* numPtr);

int main() {
	
	//int arrInt[SIZE_ARR] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	//int lastIndex = last_index_of_int_arr(SIZE_ARR);
	
	//int lastElement = arrInt[lastIndex];
	
	//printf("%d \n", lastElement);

	
	/*int* pInt = arrInt;
	// Is the same way
	// int* pInt = &arrInt[0];
	
	for (int i = 0; i < 10; i++) {
		
		// Converte de hexadecimal para decimal
		printf("Decimal: %d, Hexadecimal: %p \r\n", pInt, pInt);
		
		// Incrementando ponteiro é basicamente fazendo a soma tamanho do tipo.
		// Logo é igual que pInt = pInt + sizeof(int)
		pInt++;
	}*/
	
	return 0;
}

// Sem a variavel ser estatica perderiamos o ponteiro e logo teremos um undefined behavior?
// Com a variavel estatica, deveria existir a variavel para pegar fora do escopo da função?
void change(int* numPtr) {

	static int numTemp = 20;

	numPtr = &numTemp;	
}