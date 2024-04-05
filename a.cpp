#include <iostream>
#include <math.h>
#include <iomanip> //para limitar los decimales.

using namespace std;

/*calculadora de índice de masa corporal.*/

int main(){

    float IMC, peso, altura;

    cout<<"Ingrese su peso en kilogramos: "; cin>>peso;
    cout<<"\nIngrese su altura en metros: "; cin>>altura;

    IMC = peso/pow(altura,2);

    cout<<"\n\nIMC: " << fixed << setprecision(2) << IMC << "kg/m2" << endl;

return 0;
}
