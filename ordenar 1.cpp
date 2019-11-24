/*Universidad Politecnica de Tulancingo
Ingenieria en Electronica y Telecomunicaciones
Logica de programacion
Karina Ibarra A
Programa para ordenar de mayor a menor una lista de "n" numeros 
*/

#include <stdlib.h>
#include <stdio.h>

const int n = 5;

int main()
{
	int a[n], indice, limite, pivote;
	//capture una lista de ene valores enteros
	indice = 0;
	while (indice < n) {
		printf("Captura a[%d]: ", indice);
		scanf_s("%d", &a[indice]);
		indice = indice + 1;
	}
	printf("\nEl arreglo original es: ");
	indice = 0;
	while (indice < n) {
		if (indice > 0) printf(", ");
		printf("%d", a[indice]);
		indice = indice + 1;
	}
	printf("\n");
	//ahora si va,os a ordenar la lista
	indice = 0;
	limite = n - 1;
	while (limite > 0) {
		while (indice < limite) {
			if (a[indice] < a[indice + 1]) {
				pivote = a[indice + 1];
				a[indice + 1] = a[indice];
				a[indice] = pivote;
			}
			indice = indice + 1;
		}
		limite = limite - 1;
		indice = 0;
	}
	printf("\nEl arreglo ordenado es: ");
	indice = 0;
	while (indice < n) {
		if (indice > 0) printf(", ");
		printf("%d", a[indice]);
		indice = indice + 1;
	}
	printf("\n");
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
