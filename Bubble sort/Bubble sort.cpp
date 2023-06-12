#include <iostream>

// Función para ordenar los datos con Bubble Sort
void bubbleSort(int datos[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - i - 1; j++) {
            if (datos[j] > datos[j + 1]) {
                int temp = datos[j];
                datos[j] = datos[j + 1];
                datos[j + 1] = temp;
            }
        }
    }
}

// Función para ordenar los datos con Insertion Sort
void insertionSort(int datos[], int tam) {
    for (int i = 1; i < tam; i++) {
        int clave = datos[i];
        int j = i - 1;

        while (j >= 0 && datos[j] > clave) {
            datos[j + 1] = datos[j];
            j--;
        }

        datos[j + 1] = clave;
    }
}

// Función para ordenar los datos con Selection Sort
void selectionSort(int datos[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        int indiceMinimo = i;

        for (int j = i + 1; j < tam; j++) {
            if (datos[j] < datos[indiceMinimo]) {
                indiceMinimo = j;
            }
        }

        if (indiceMinimo != i) {
            int temp = datos[i];
            datos[i] = datos[indiceMinimo];
            datos[indiceMinimo] = temp;
        }
    }
}

int main() {
    const int maxDatos = 20; // Tamaño máximo del array
    int datos[maxDatos];
    int dato;
    std::cout << "Estos son los datos" << std::endl;
    for (int i = 0; i < 20; i++)
    {
        int random = rand() % 100 + 1;
        datos[i] = random;
        std::cout << datos[i] << " , ";
    }

    std::cout << "\nQue metodo de ordenamiento quieres usar?\n 1-Bubble sort\n 2-Insertion sort\n 3- Selection sort\n";
    std::cin >> dato;
    switch (dato)
    {
    case 1:
        bubbleSort(datos, maxDatos);
        break;
    case 2:
        insertionSort(datos, maxDatos);
        break;
    case 3:
        selectionSort(datos, maxDatos);
        break;
    default:
        bubbleSort(datos, maxDatos);
        break;
    }
    std::cout << "\nLos datos ordenados son:\n";
    for (int i = 0; i < maxDatos; i++) {
        std::cout << datos[i] << "\n";
    }
}