/*Universidad Politecnica de Tulancingo
Ingenieria en Electronica y Telecomunicaciones
Logica de programacion
Karina Ibarra A
Programa para llenar una matriz de 4x4 con numeros aleatorios, 
haciendo uso del tiempo y que a su vez pregunta al usuario 
si desea capturar los elementos de manera manual o automatica*/

// matriz na 2.cpp 

#include <stdio.h>
#include<stdlib.h>
#include <time.h>

const int n = 4;

void Captura(int matriz[n][n]) {
	int ren = 0, col;
	while (ren < n) {
		col = 0;
		while (col < n) {
			printf("Captura el elemento [%d,%d] ", ren, col);
			scanf_s("%d", &matriz[ren][col]);
			col++;
		}
		ren++; col = 0;
	}
}
void Llenado(int matriz[n][n]) {
	int ren = 0, col;
	int seq = 1;
	while (ren < n) {
		col = 0;
		while (col < n) {
			matriz[ren][col] = seq;
			seq++;
			col++;
		}
		ren++; col = 0;
	}
}
void muestra(int matriz[n][n]) {
	int ren = 0, col;
	while (ren < n) {
		col = 0;
		while (col < n) {
			printf("%4d", matriz[ren][col]);
			col++;
		}
		printf("\n");
		ren++;
	}
}
void aleatorio(int matriz[n][n]) {
	int ren = 0, col;
	while (ren < n) {
		col = 0;
		while (col < n) {
			matriz[ren][col] = (rand() % 30) + 1;
			col++;
		}
		printf("\n");
		ren++;
	}
}
int main() {
	int cuadro[n][n];
	char rspt;
	srand(time(NULL));
	printf("desea capturar (S/N): ");
	rspt = getchar(); //obtener un caracter
	if (rspt == 'S' || rspt == 's') {
		Captura(cuadro);
	}
	else {
		aleatorio(cuadro);
	}
	muestra(cuadro);
}