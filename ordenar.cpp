/*Universidad Politecnica de Tulancingo
Ingenieria en Electronica y Telecomunicaciones
Logica de programacion
Karina Ibarra A
Programa para ordenar de mayor a menor una lista de "n" numeros 
*/

#include <stdlib.h>
#include <stdio.h>

const int n = 5;

void Captura(int arreglo[]) {
	int ind;
	//captura una lista de ene valores enteros 
	ind = 0;
	while (ind < n) {
		printf("Captura a[%d]: ", ind);
		scanf_s("%d", &arreglo[ind]);
		ind++;
	}
}
void Mostrar(int arre[]) {
	int indi;
	indi = 0;
	while (indi < n) {
		if (indi > 0) printf(", ");
		printf("%d", arre[indi]);
		indi++;
	}
}
void (ordenar(int ar[])) {
	int indice, limite, pivote;
	indice = 0;
	limite = n - 1;
	while (limite > 0) {
		while (indice < limite) {
			if (ar[indice] < ar[indice + 1]) {
				pivote = ar[indice + 1];
				ar[indice + 1] = ar[indice];
				ar[indice] = pivote;
			}
			indice++;
		}
		limite--;
		indice = 0;
	}
	indice = 0;
	while (indice < n) {
		if (indice > 0) printf(", ");
		printf("%d", ar[indice]);
		indice = indice + 1;
	}
}
int main()
{
	int a[n];
	Captura(a);
	printf("\nEl arreglo original es: ");
	Mostrar(a);
	printf("\n");
	//ahora si va,os a ordenar la lista
	ordenar(a);
	printf("\nEl arreglo ordenado es: ");
	Mostrar(a);
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
