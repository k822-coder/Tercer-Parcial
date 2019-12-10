/*Universidad Politecnica de Tulancingo
Ingenieria en Electronica y Telecomunicaciones
Logica de programacion
Karina Ibarra A
Programa para llenar una matriz de tal manera que cumpla con las 
caracteristicas de un cuadro magico, cuyo limite es de 61
*/

#include <stdio.h>
#include <stdlib.h>

void vaciar(int cuadro[61][61]) {
	int inren = 0, incol = 0;
	while (inren < 61) {
		incol = 0;
		while (incol < 61) {
			cuadro[inren][incol] = 0;
			incol++;
		}
		inren++;
	}
}
void desplegar(int cuadro[61][61], int dim ) {
	int inren = 0, incol = 0;
	while (inren < dim) {
		incol = 0;
		while (incol < dim) {
			printf("%4d", cuadro[inren][incol]);
			incol++;
		}
		printf("\n");
		inren++;
	}
}
int main()
{
	int renglon, columna, renglona, columnaa, n, seq;
	int matriz[61][61];
	vaciar(matriz);
	do { //comienza el digrama de flujo 
		printf("Captura dimension (3 a 61: ");
		scanf_s("%d", &n);
	} while (n % 2 == 0 || n<0);
	desplegar(matriz, n);

	renglon = 0;
	columna = n / 2;
	seq = 1;
	while (seq <= (n * n)) {
		matriz[renglon][columna] = seq;
			seq++;
			renglona = renglon; columnaa = columna;
			renglon--; columna++;
			if (renglon < 0) { renglon += n;  }
			if (columna > (n - 1)) { columna -= n; }
			if (matriz[renglon][columna] != 0) {
				renglon = renglona;
				columna = columnaa;
				renglon++;
			}
	}
	printf("\n\n");
	desplegar(matriz, n);
	printf("\n\n");
}

