#include <iostream>
using namespace std;
#define ORDEM 3
void ler_matriz(int matriz[ORDEM][ORDEM]){
  for(int i = 0; i < ORDEM; i++){
    for(int j = 0; j < ORDEM; j++){
      cout<<"digite um valor para a matriz ";
      cin>>matriz[i][j];
    }
  }
}
int soma_diagonal(int matriz[ORDEM][ORDEM]){
  int soma = 0;
  for(int i = 0; i < ORDEM; i++){
      soma = soma + matriz[i][ORDEM - i - 1];
  }
  return soma;
}
void imprimir_matriz(int matriz[ORDEM][ORDEM]){
  for(int i = 0; i < ORDEM; i++){
    for(int j = 0; j < ORDEM; j++){
      cout<<matriz[i][j]<<" ";

    }
    cout<<endl;
  }
}
int main(){
int matriz[ORDEM][ORDEM];
ler_matriz(matriz);
int resultado = soma_diagonal(matriz);
imprimir_matriz(matriz);
cout<<resultado;
}