#include <iostream>

using namespace std;

int main() {
  float base, resultado = 1;
  int expo;
  
  cout << "Informe a base: \n";
  cin >> base;
  cout << "Informe o expoente: \n";
  cin >> expo;

  for (int i = 1; i <= expo; i++){
    resultado *= base;
  }

  cout << "O resultado é: " << resultado;
  
    return 0;
}