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