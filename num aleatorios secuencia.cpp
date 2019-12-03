/*Universidad Politecnica de Tulancingo
Ingenieria en Electronica y Telecomunicaciones
Logica de programacion
Karina Ibarra A
Programa para llenar una matriz en un rango de [30] ,manualmente o de manera automatica;
segun la desicion de el usuario
*/

// num aleatorios secuencia //

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
void aleatorio(int matriz[n][n]) {
	int ren = 0, col;
	while (ren < n) {
		col = 0;
		while (col < n) {
			matriz[ren][col] = (rand() % 30) + 1;
			col++;
		}
		ren++; col = 0;
	}
}
void secuencia(int matriz[n][n]) {
	int arreglo[30], resultado[30];
	int ren = 0, col, indice;
	//primero la secuencia
	while (ren < 30) {
		arreglo[ren] = ren + 1;
		ren++;
	}
	ren = 0; col = 29;
	while (col > 0) {
		indice = rand() % col;
		resultado[ren] = arreglo[indice];
		arreglo[indice] = arreglo[col];
		ren++;
		col--;
	}
	resultado[ren] = arreglo[col];

	ren = 0;
	while (ren < 30) {
		printf("%d, ", resultado[ren]);
		ren++;
	}
	printf("\n\n");
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
int main()
{
	int cuadro[n][n];
	char rspt;
	srand(time(NULL));

	secuencia(cuadro);

	printf("Desea capturar(S/N: ");
	rspt = getchar();
	if (rspt == 'S' || rspt == 's') {
		Captura(cuadro);
	}
	else {
		aleatorio(cuadro);
	}
	muestra(cuadro);
}