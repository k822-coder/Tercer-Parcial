/*Universidad Politecnica de Tulancingo
Ingenieria en Electronica y Telecomunicaciones
Logica de programacion
Karina Ibarra A
Programa para llenar una matriz de manera automatica.
*/

// matriz (secuencia).cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>
#include<stdlib.h>

const int n = 4;
int main()
{
	int matriz[n][n];
	int ren = 0, col;
	int seq = 1;
	while (ren < n) {
		col = 0;
		while(col<n){
		//printf ("captura el elemento [%d,%d] ", ren, col);
		//scanf_s("%d", &matriz[ren] [col]);
		matriz[ren][col] = seq;
		seq++;
		col++;
	
	    }
		ren++; col = 0;
	}
	ren = 0;
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
