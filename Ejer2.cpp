#include <iostream>

using namespace std;

int main(){

    int num1, num2;

    cout<<"Ingrese sus 2 numeros"<<endl;
    cout<<"Dividendo: ";
    cin>>num1;

    cout<<"Divisor: ";
    cin>>num2;

    if (num1%num2==0){
        cout<<"Su numero "<<num1<<" es divisible entre "<<num2<<endl;
    }
    else{
        cout<<"Sus numeros no son divisibles";
    }

    return 0;
}