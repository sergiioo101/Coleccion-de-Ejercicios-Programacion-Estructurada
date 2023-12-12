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
    // c. Instanciación con el operador malloc
    struct Estudiante *estudiante2 = (struct Estudiante *) malloc(sizeof(struct Estudiante));
    strcpy(estudiante2->nombre, "Ana");
    estudiante2->edad = 22;
    estudiante2->promedio = 9.8;
    // d. Punteros y estructuras
    struct Estudiante *punteroEst = &estudiante1;
    printf("Detalles del estudiante punteroEst:\n");
    imprimirEstudiante(punteroEst);
    // e. Organización de la programación

    // Crear una lista de estudiantes (puedes usar un arreglo en este ejemplo)
    struct Estudiante listaEstudiantes[10];
    int numEstudiantes = 0; // Contador de estudiantes en la lista

    // Añadir estudiantes a la lista
    listaEstudiantes[numEstudiantes++] = estudiante1;
    listaEstudiantes[numEstudiantes++] = *estudiante2;

    // Imprimir los detalles de los estudiantes en la lista
    printf("\nLista de Estudiantes:\n");
    for (int i = 0; i < numEstudiantes; ++i) {
        imprimirEstudiante(&listaEstudiantes[i]);
    }

