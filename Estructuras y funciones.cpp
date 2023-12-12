#include <cstdio>

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
int main() {
    // Crear una estructura Estudiante
    Estudiante estudiante1 = {"Juan", 20, 9.5};

    // a. Llamar a la función para imprimir la estructura por valor
    printf("Estudiante1 antes de modificar:\n");
    imprimirEstudiante(estudiante1);

    // b. Llamar a la función para modificar la estructura por referencia
    modificarEstudiante(&estudiante1);

    // Imprimir la estructura después de la modificación
    printf("Estudiante1 después de modificar la edad:\n");
    imprimirEstudiante(estudiante1);

    // c. Llamar a la función para imprimir la estructura por dirección
    printf("Estudiante1:\n");
    imprimirEstudiante2(&estudiante1);

    return 0;
}