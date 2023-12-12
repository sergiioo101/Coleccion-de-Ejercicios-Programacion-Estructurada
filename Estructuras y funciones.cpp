#include <stdio.h>

// Definición de la estructura Estudiante
typedef struct {
    char nombre[50];
    int edad;
    float promedio;
} Estudiante;
// a. Pasar una estructura por valor como argumento
void imprimirEstudiante(Estudiante est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est.nombre, est.edad, est.promedio);
}
// b. Pasar una estructura por referencia como argumento
void modificarEstudiante(Estudiante *est) {
    est->edad = 30;
}
// c. Pasar una estructura por dirección como argumento
void imprimirEstudiante2(Estudiante *est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est->nombre, est->edad, est->promedio);
}