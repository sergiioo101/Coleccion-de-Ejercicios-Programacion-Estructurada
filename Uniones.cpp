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
