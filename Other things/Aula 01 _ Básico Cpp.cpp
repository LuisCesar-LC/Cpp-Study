#include <iostream>

using namespace std;

int main() {

  //Declaração é atribuição junto;
  int num_inteiro = 5; 
  //Impressão do número armazenado anteriormente;
  cout << "O valor da variável que foi armazenado é: " << num_inteiro << endl;

  //Declaração e atribuição de valor em momentos distintos;
  int num_inteiro2;
  num_inteiro2 = 10;
  //Impressão do número declarado e atribuido anteriormente;
  cout << "O valor da segunda variável é: " << num_inteiro2 << endl;

  //Teste de variáveis para números reais;
  float num_float;
  num_float = 10.1;
  //Impressão do número float;
  cout << "O número a seguir é um número fracionário: " << num_float;


  //Teste da variável real Double;
  double num_double;
  num_double = 22.2e39;
  //Impressão do valor armazenado anteriormente;
  cout << "O valor armazenado na variável double é: " << num_double << endl;

//Teste variável Booleana;
bool var_boolean;
var_boolean = true;
//Impressão do resultado da variável boolean;
  if (var_boolean == 0) {
    cout << "O resultado da operação booleana anterior é: False\n";
  }
  else{
    cout << "O resultado da operação booleana anterior é: True\n";
  };

  //Teste char;
  char var_letra;
  var_letra = 'A';
  //Impressão do caractere armazenado anteriormente;
  cout << "A letra armazenada é: " << var_letra << endl;

  //Teste String;
  string var_string;
  var_string = "Bola";
  //Impressão;
  cout << "A palavra salva é: " << var_string << endl;

  int idade;
  cout << "Informe sua idade: \n";
  cin >> idade;
  
  cout << "Sua idade é: " << idade << endl;
  
  return 0;
}