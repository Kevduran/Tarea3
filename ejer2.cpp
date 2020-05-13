#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int radio;
    float perimetro, area;

    cout<<"Ingrese el area del circulo: ";
    cin>>radio;

    //area= pi*radio al cuadrado
    area=3.1416*pow(radio,2);
    //perimetro= 2*pi*radio
    perimetro=2*3.1416*radio;

    cout<<"El perimetro del circulo es: "<<perimetro;
    cout<<"\nEl area del circulo es: "<<area;

    return 0;
}