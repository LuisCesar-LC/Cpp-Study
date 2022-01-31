#include <iostream>

using namespace std;

int main() {
    
  int idade;
  float renda;

  cout << "Informe sua idade: \n";
  cin >> idade;
  cout << "Informe sua renda: \n";
  cin >> renda;
  
  (idade > 21 && renda < 1200) ? cout << "Você pode participar do programa! \n" : cout << "Você não pode participar do programa! \n";
  
    return 0;
}