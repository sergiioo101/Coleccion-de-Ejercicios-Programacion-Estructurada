#include <stdio.h>
#include <string.h>

// Definición de la estructura Estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};
// Función para copiar una estructura Estudiante
struct Estudiante copiarEstudiante(struct Estudiante est) {
    // Crear una nueva estructura Estudiante
    struct Estudiante nuevoEst;

    // Copiar los valores de la estructura original a la copia
    strcpy(nuevoEst.nombre, est.nombre);
    nuevoEst.edad = est.edad;
    nuevoEst.promedio = est.promedio;

    // Devolver la copia
    return nuevoEst;
}
int main() {
    // Crear una estructura Estudiante
    struct Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;

    // Llamar a la función para copiar la estructura
    struct Estudiante copiaEstudiante = copiarEstudiante(estudiante1);

    // Imprimir la estructura original
    printf("Estudiante Original:\n");
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", estudiante1.nombre, estudiante1.edad, estudiante1.promedio);

    // Imprimir la estructura copiada
    printf("\nCopia del Estudiante:\n");
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", copiaEstudiante.nombre, copiaEstudiante.edad, copiaEstudiante.promedio);

    return 0;
}