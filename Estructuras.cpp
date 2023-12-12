#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Estudiante{
    char nombre [20];
    int edad;
    float promedio;
};
// Función para imprimir los detalles de un estudiante
void imprimirEstudiante(struct Estudiante* estudiante) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", estudiante->nombre, estudiante->edad, estudiante->promedio);
}
int main() {
    // a. Constitución de una estructura
    struct Estudiante estudiante1;
    // b. Instanciación de estructuras
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;
