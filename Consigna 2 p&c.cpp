#include <stdio.h>
// CODIGO DE ALUMNO TEO B GOMEZ
//GIT PERSONAL:https://github.com/RonnieAnne9/Cajon-de-G0m32
//GIT GRUPAL (LIDER LOPEZ LUCAS):https://github.com/luvvas21/Trabajo-Practico-6to-2da-4to-grupo
#define CM_PER_INCH 2.54

// Función para convertir de centímetros a pulgadas
float cm_a_pulgadas(float cm) {
    return cm / CM_PER_INCH;
}

// Función para convertir de pulgadas a centímetros
float pulgadas_a_cm(float pulgadas) {
    return pulgadas * CM_PER_INCH;
}

int main() {
    float cm, pulgadas;
    
    // Ejemplo de uso: conversión de cm a pulgadas
    printf("Ingrese la cantidad en centímetros: ");
    scanf("%f", &cm);
    printf("%.2f cm es igual a %.2f pulgadas.\n", cm, cm_a_pulgadas(cm));
    
    // Ejemplo de uso: conversión de pulgadas a cm
    printf("Ingrese la cantidad en pulgadas: ");
    scanf("%f", &pulgadas);
    printf("%.2f pulgadas es igual a %.2f cm.\n", pulgadas, pulgadas_a_cm(pulgadas));
    
    return 0;
}

