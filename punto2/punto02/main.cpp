//para la entrada se tiene que recivir de a 1 caracter
#include <iostream>

using namespace std;
long long int cadena_a_enteros(char CaracteresNum[]);
long long int potencia(int valor,int potencia);
int main()
{
    int i=0,cont=0,j=0,k=0,n=3;
    long long int Numerocadena=0,Exponente=0,suma=0,aux;
    char mayor[1]={};
    char modo[1]={};
    int prueba=0;
    char CadenaP[50]={};
    char CadenaNum[50]={};
    char CadenaLetras[50]={};
    mayor[0]={-48};
    while(modo[0]!=42){


        cout<<"ingrese uncaracter"<<endl;cin>>modo;
        if(modo[0]>=48 && modo[0]<=57){
            CadenaNum[j]=modo[0];
            j++;
            cout<<CadenaNum<<endl;

        }
        else{
            CadenaLetras[i]=modo[0];


            if(mayor[0]<CadenaLetras[i]){
                mayor[0]=CadenaLetras[i];
                ;
            }
            i++;
        }
    }

    Numerocadena=cadena_a_enteros(CadenaNum);
    cout<<"original"<<Numerocadena<<endl;
    Exponente=potencia(10,n);
    while (Numerocadena>=Exponente) {
        aux=Numerocadena%Exponente;
        Numerocadena=Numerocadena/Exponente;
        suma=suma+aux;
    }
    suma=suma+Numerocadena;
    cout<<"suma: "<<suma<<endl;
    cout<<"letra mayor "<<mayor<<endl;
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
