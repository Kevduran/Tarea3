#include <iostream>

using namespace std;

int main(){

    string nombre;
    int cantidad;
    float precio, total;

    cout<<"Digite el nombre de su producto: ";
    cin>>nombre;

    cout<<"Ingrese el precio de su producto: ";
    cin>>precio;

    cout<<"Ingrese la cantidad de productos comprados: ";
    cin>>cantidad;


    total=precio*cantidad;

    cout<<"Su total a pagar es de: "<<total;


    return 0;
}