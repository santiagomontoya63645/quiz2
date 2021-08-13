/*Este programa que recibe una cadena de caracteres(numero y/o letras de maximo 20 caracteres) y separa los números del resto de caracteres,
generando una cadena que no tiene números y otra con los números que había en la cadena original. */
//
#include <iostream>
using namespace std;
int main()
{
    int i=0,cont=0,j=0,k=0;
    char CadenaP[20]={};
    char CadenaNum[20]={};
    char CadenaLetras[20]={};
    cout<<"Ingrese una cadena de caracteres(letras y/o  numeros)"<<endl;
    cin>>CadenaP;
    while(CadenaP[cont]!='\0')
            cont++;
    for (i=0;i<cont;i++){
        if (CadenaP[i]>=48 and CadenaP[i]<=57){   //aqui el 48 y 57 es por que los numeros estan en ese rango en la tabla ascii
            CadenaNum[k]=CadenaP[i];
            k++;
        }
        else{
            CadenaLetras[j]=CadenaP[i];
             j++;
        }

    }
    cout<<"Original: "<<CadenaP<<endl<<"Texto: "<<CadenaLetras<<endl<<"Numero: "<<CadenaNum<<endl;;
    return 0;
}
