//#include "Fraccion.h"
#include "Arrfrac.h"
#include <iostream>
using namespace std;

int main(){
    cout << "Evaluando la clase Fraccion:" << endl << "============================" << endl;
    cout << "Definicion y reduccion:" << endl;
    
    cout << "Fraccion 1 (f1): ";
    Fraccion f1 (30000,75000); // Fraccion 1: 2/5
    f1.imprimir();
    cout << "Fraccion 2 (f2): ";
    Fraccion f2 (6,12); //  Fraccion 2: 1/2
    f2.imprimir();
    cout << "Fraccion 3 (f3): ";
    Fraccion f3 (-3,12); // Fraccion 3: -1/4 (negativo/positivo)
    f3.imprimir();
    cout << "Fraccion 4 (f4): ";
    Fraccion f4 (3,-12); // Fraccion 4: -1/4 (positivo/negativo)
    f4.imprimir();
    cout << "Fraccion 5 (f5): ";
    Fraccion f5 (-3,-12); // Fraccion 5: 1/4 (negativo/negativo)
    f5.imprimir();
    cout << "Fraccion 6 (f6): ";
    Fraccion f6; // Fraccion 6: 0/1 (valor por defecto)
    f6.imprimir();
    
    cout << "Suma y multiplicacion:" << endl;   
    cout << "f6 = f1 + f2:" << endl;
    f6 = f1.suma(f2); // Suma: 2/5 + 1/2 = 9/10
    f6.imprimir();
    cout << "f6 = f1 * f2:" << endl;
    f6 = f1.multiplicacion(f2); // Multiplicacion: 2/5 * 1/2 = 1/5
    f6.imprimir();

    cout << endl << "Evaluando la clase ArrFrac:" << endl << "============================" << endl;
    cout << "Definicion de arreglos:" << endl;
    cout << "Arreglo 1 (af1): ";
    Arrfrac af1; 
    af1.imprimir(false);
    cout << "Arreglo 2 (af2): ";
    Arrfrac af2(4);
    af2.imprimir(false);
    Fraccion farray[4] = {f1,f2,f3,f6};
    Fraccion farray2[4] = {f1,f2,f1,f5};   
    cout << "Arreglo 3 (af3): ";
    Arrfrac af3(4,farray);
    af3.imprimir(false);
    cout << "Arreglo 4 (af4): ";
    Arrfrac af4(4,farray2);
    af4.imprimir(false);
    
    cout << "Suma y multiplicacion de arreglos:" << endl;
    cout << "af2 = af3 + af4:" << endl;
    af2 = af3.suma(af4);
    af2.imprimir(false);
    cout << "af2 = af3 * af3:" << endl;
    af2 = af3.multiplicacion(af3);
    af2.imprimir(false);
    cout << "Suma 'InPlace': "<< endl;
    cout << "af2 = af2 + af2:" << endl;    
    af2.sumaInPlace(af2);
    af2.imprimir(false);
    
    cout << "Agregar y eliminar elementos: (modificando af2)" << endl;
    af2.imprimir(true);
    af2.agregarFraccion(f5);
    af2.imprimir(true);
    af2.eliminarFraccion();
    af2.imprimir(true);
    af2.eliminarFraccion();
    af2.imprimir(true);
}