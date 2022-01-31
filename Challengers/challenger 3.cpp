#include <iostream>

using namespace std;

int fat (int x){
  int result = 1;
  
  for (int i = 1; i <= x; i++){
    result = i * result;
  }
  
  return result;
}

int main() {

  int num, cont = 0;
  
  cout << "Calculadora de fatorial! \n";
  cout << "Digite um número inteiro positivo: \n";
  
  while(cont == 0){
    cin >> num;
    if (num < 0){
      cout << "Por favor insira um número positivo: \n";
    }else {
      cont = 1;
    }
  }

  cout << "O fatorial é: " << fat(num);
  
    return 0;
}