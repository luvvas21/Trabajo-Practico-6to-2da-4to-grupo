#include <stdio.h>

#define CM_PER_INCH 2.54

// Funci�n para convertir de cent�metros a pulgadas
float cm_a_pulgadas(float cm) {
    return cm / CM_PER_INCH;
}

// Funci�n para convertir de pulgadas a cent�metros
float pulgadas_a_cm(float pulgadas) {
    return pulgadas * CM_PER_INCH;
}

int main() {
    float cm, pulgadas;
    
    // Ejemplo de uso: conversi�n de cm a pulgadas
    printf("Ingrese la cantidad en cent�metros: ");
    scanf("%f", &cm);
    printf("%.2f cm es igual a %.2f pulgadas.\n", cm, cm_a_pulgadas(cm));
    
    // Ejemplo de uso: conversi�n de pulgadas a cm
    printf("Ingrese la cantidad en pulgadas: ");
    scanf("%f", &pulgadas);
    printf("%.2f pulgadas es igual a %.2f cm.\n", pulgadas, pulgadas_a_cm(pulgadas));
    
    return 0;
}

