#include <iostream>
using namespace std;

// Función para convertir metros a centímetros
int metrosACentimetros(int metros) {
    return metros * 100;
}

// Función para convertir centímetros a metros
int centimetrosAMetros(int centimetros) {
    return centimetros / 100;
}

int main() {
    int opcion, valor, resultado;
    
	// Codigo para la seleccion de CM o M
    cout << "Selecciona una opción:\n";
    cout << "1. Convertir Metros a Centímetros\n";
    cout << "2. Convertir Centímetros a Metros\n";
    cout << "Opción: ";
    cin >> opcion;


	//un IF y ELSE para saber que opcion eligio. Y luego introducir el valor que quiera convertir para despues dar el resultado
    if (opcion == 1) {
        cout << "Introduce el valor en metros: ";
        cin >> valor;
        resultado = metrosACentimetros(valor);
        cout << valor << " metros son " << resultado << " centímetros." << endl;
    }
    else if (opcion == 2) {
        cout << "Introduce el valor en centímetros: ";
        cin >> valor;
        resultado = centimetrosAMetros(valor);
        cout << valor << " centímetros son " << resultado << " metros." << endl;
    }
    
    	//Opcion no valida para que cuando pregunte que opcion y no ponga entre 1 o 2 sea opcion no valida
    else {
        cout << "Opción no válida." << endl;
    }

    return 0;
}
/
