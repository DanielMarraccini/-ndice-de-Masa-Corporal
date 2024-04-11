#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){

float peso, altura, IMC;

cout<<"Ingrese su peso: "; cin >> peso;
cout<<endl;
cout<<"Ingrese su altura: "; cin >> altura;

IMC = peso/pow(altura, 2);

cout<<"\n\nIMC: " << IMC; cout<<" kg/m2";

cout<<"\n\n\nClasificación: ";

if (IMC < 16.5){

    cout<<"Bajo peso severo.";

    } else if(IMC >= 16.5 && IMC < 18.5){

    cout<<"Bajo peso.";

            } else if (IMC >= 18.5 && IMC < 25){

            cout<<"Peso normal.";

                } else if (IMC >= 25 && IMC < 30){

                cout<<"Sobrepeso.";

                    } else if (IMC >= 30 && IMC < 35){

                    cout<<"Obesidad tipo 1 (moderada)";

                        } else if (IMC >= 35 && IMC < 40){

                        cout<<"Obesidad tipo 2 (severa)";

                            }else if (IMC >= 40 && IMC){

                            cout<<"Obesidad tipo 3 (móribda)";
                            }


cout<<endl<<endl;
return 0;
}
