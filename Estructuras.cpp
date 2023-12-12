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