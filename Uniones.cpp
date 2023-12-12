#include <stdio.h>
#include <string.h>

// Definición de la unión
union Dato {
    int i;
    float f;
    char str[20];
};

int main() {
    // Crear una variable de la unión
    union Dato dato;
    // Asignar diferentes tipos de valores
    dato.i = 10;
    printf("dato.i: %d\n", dato.i);

    dato.f = 220.5;
    printf("dato.f: %.2f\n", dato.f);

    strcpy(dato.str, "C programming");
    printf("dato.str: %s\n", dato.str);

    return 0;
}
