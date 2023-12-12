#include <cstdio>
#include <cstring>

// Definición del alias para la estructura Estudiante
typedef struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
} Estudiante;
int main() {
    // Crear una estructura Estudiante usando el alias
    Estudiante estudiante3;

    // Asignar valores a la estructura
    strcpy(estudiante3.nombre, "Pedro");
    estudiante3.edad = 25;
    estudiante3.promedio = 9.7;

    // Imprimir los detalles del estudiante
    printf("Estudiante:\n");
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", estudiante3.nombre, estudiante3.edad, estudiante3.promedio);

    return 0;
}