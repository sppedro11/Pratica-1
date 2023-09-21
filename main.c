

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "function_ordenação.h"
#include "function_media.h"
#include "function_distancia.h"
#define M 10
#define C 2
int main(void){
	
	double valores[M] = {5, 6, 0, 2, 8, 1, 3, 9.7, 4.2, 7.3};
	double coordenadas_1[C] = {4, 5};
	double coordenadas_2[C] = {7, 8};
	
	int i;
	
	ordem_crecente(valores, M);
	double med = med_elementos(valores, M);
	double dist = distancia(coordenadas_1,coordenadas_2);

    printf("Os valores em ordem crescente são : ");
	for(i = 0; i < M; ++i){
		printf("%1.f ", valores[i]);
	}
	printf("\nA média dos valores vale: %.2f",med);
	printf("\nA distância entre o pontos A e B é: %.2f",dist);
	
	return 0;
}
