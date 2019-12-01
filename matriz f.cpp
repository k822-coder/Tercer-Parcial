/*Universidad Politecnica de Tulancingo
Ingenieria en Electronica y Telecomunicaciones
Logica de programacion
Karina Ibarra A
Programa para llenar una matriz utilizando funciones fuera de main.
*/

// matriz f.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>
#include<stdlib.h>

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
void Llenado(int matriz[n][n]){
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
int main(){
	int cuadro[n][n];
	char rspt;
	printf("desea capturar (S/N): ");
	rspt = getchar(); //obtener un caracter
	if (rspt == 'S' || rspt == 's') {
		Captura(cuadro);
	}
	else {
		Llenado(cuadro);
	}
	muestra(cuadro);
} 


