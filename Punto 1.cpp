#include <iostream>
using namespace std;

// Funci�n para convertir metros a cent�metros
int metrosACentimetros(int metros) {
    return metros * 100;
}

// Funci�n para convertir cent�metros a metros
int centimetrosAMetros(int centimetros) {
    return centimetros / 100;
}

int main() {
    int opcion, valor, resultado;
    
	// Codigo para la seleccion de CM o M
    cout << "Selecciona una opci�n:\n";
    cout << "1. Convertir Metros a Cent�metros\n";
    cout << "2. Convertir Cent�metros a Metros\n";
    cout << "Opci�n: ";
    cin >> opcion;


	//un IF y ELSE para saber que opcion eligio. Y luego introducir el valor que quiera convertir para despues dar el resultado
    if (opcion == 1) {
        cout << "Introduce el valor en metros: ";
        cin >> valor;
        resultado = metrosACentimetros(valor);
        cout << valor << " metros son " << resultado << " cent�metros." << endl;
    }
    else if (opcion == 2) {
        cout << "Introduce el valor en cent�metros: ";
        cin >> valor;
        resultado = centimetrosAMetros(valor);
        cout << valor << " cent�metros son " << resultado << " metros." << endl;
    }
    
    	//Opcion no valida para que cuando pregunte que opcion y no ponga entre 1 o 2 sea opcion no valida
    else {
        cout << "Opci�n no v�lida." << endl;
    }

    return 0;
}
/
