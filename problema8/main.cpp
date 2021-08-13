//Este programa genera un arreglo aleatorio de letras mayusculas,ademas de eso lo imprme y contabiliza cuantas veces se repite cada letra
//Oscar David Pulgarin Carrasquilla
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void imprimir(char A[],int C[], int n);
void imprimir_Arreglo(char A[],int n);
void contarLetras(char A[], char L[], int C[]);


int main()
{
    char Aleatorios[200]={};
    char Letras[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int CLetras[26];


    srand(time(NULL));

    //Para generar
    for(int i=0;i<200;i++){
        Aleatorios[i]=Letras[rand()%26];
    }

    //cuenta las letras
    contarLetras(Aleatorios,Letras,CLetras);

    //imprimir
    imprimir_Arreglo(Aleatorios,200);
    imprimir(Letras,CLetras,26);


    return 0;
}


void imprimir(char A[],int c[],int n){
    int i;
    for(i=0; i<n; i++){
        cout<<A[i]<<" : "<<c[i]<<endl;
    }
    cout<<endl;
}


void imprimir_Arreglo(char A[], int n){
    int i;
    for(i=0; i<n; i++){
        cout<<A[i];
    }
    cout<<endl;
}

void contarLetras (char A[], char L[], int C[]){
    int contador;
    int i,j;

    //Buscar
    for (i = 0; i < 26; ++i) {
        contador = 0;
        for (j = 0; j < 200; ++j) {
            if(L[i]==A[j]){
                contador=contador+1;
            }
        }
        C[i]=contador;
    }
}
