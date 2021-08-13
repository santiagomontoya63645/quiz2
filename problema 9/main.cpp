//recive hasta un maximo de 12 caracteres
#include <iostream>

long long int cadena_a_enteros(char CaracteresNum[]);
long long int potencia(int valor,int potencia);
using namespace std;

int main()
{
    long long int n,Numerocadena,suma=0,Exponente,aux;
    char CadenaNum[20]={};
    cout<<"Ingrese un numero n"<<endl;
    cin>>n;
    cout<<"Ingrese una cadena de solo numeros"<<endl;
    cin>>CadenaNum;
    Numerocadena=cadena_a_enteros(CadenaNum);
    cout<<"Original: "<<Numerocadena<<endl;
    Exponente=potencia(10,n);
    while (Numerocadena>=Exponente) {
        aux=Numerocadena%Exponente;
        Numerocadena=Numerocadena/Exponente;
        suma=suma+aux;
    }
    suma=suma+Numerocadena;
    cout<<"suma: "<<suma<<endl;


    return 0;
}
long long int cadena_a_enteros(char CaracteresNum[])
{
    long long int valor=0,suma=0,contador=0,paso=0, aux;
    while(CaracteresNum[contador]!='\0')  //Pa saber el tamaño de CaracteresNum
        contador+=1;
    for(int n=0;n<contador ;n++)
    {
        valor=CaracteresNum[n]-48;    //esto es -48 por que si ejemplo es el 9  en la tabla ascii es 57 y se le resta 48 y queda 9
        aux=potencia(10,(contador-1)-paso);  //Aqui hay que restarle paso por que si primero es centena ya despues seria decenas y asi
        valor=valor*aux;
        suma+=valor;
        paso+=1;

    }
    return suma;
}

long long int potencia(int valor,int potencia) {  // esta funcion calcula la potencia
    long long int producto=1;
    for(int n=0;n<potencia;n+=1)
        producto*=valor;
    return producto;
}

