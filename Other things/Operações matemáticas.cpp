#include <iostream>
#include <math.h> //Biblioteca de funções matemáticas

using namespace std;

int main() {   
  //Quando declaro uma variável tenho a possibilidade de realizar uma atribuição, ou seja, até mesmo operações que o resultado seja atribuido a variável;

  int a, b;

  cout << "Informe um valor para A: \n";
  cin >> a;
  cout << "Informe um valor para B: \n";
  cin >> b;
  
  //Soma;
  int soma = a + b;
  cout << "Soma (atráves de variável para armazenar valor): " << soma << endl;
  //Ou;
  cout << "Soma (Realizando diretamente): " << a+b << endl;

  //SUBTRAÇÃO;
  int sub = a - b;
  cout << "Subtração: " << sub << endl;

  //MULTIPLICAÇÃO;
  int mult = a * b;
  cout << "Multiplicação: " << mult << endl;

  //DIVISÃO;
  int quo_div = a / b;
  cout << "Quociente da divisão: " << quo_div << endl;

  int rest_div = a % b;
  cout << "Resto da divisão: " << rest_div << endl;

  //Para obter o resultado da divisão em float, ou seja, uma divisão "real" é necessário considerar as variáveis e os números envolvidos na operação como números "reais";
  float div = (float)a / (float)b;
  cout << "Divisão: " << div << endl;

  //Funções e outras coisas legais com a biblioteca math.h;
  float pot = pow(a,b); //pow() é uma função da biblioteca math.h para realização de potência;
  cout << "A elevado a B: " << pot << endl;

  //Incremento e decremento;
  cout << "A antes da incrementação: " << a << endl;
  //Formas:
  //  a = a + 1;
  //  a += 2; -> Possibilita um número infinito de incrementos;
  a++;
  cout << "A após incrementação: " << a << endl;

  cout << "A antes do decremento: " << a << endl;
  //Formas:
  //  a = a - 1;
  //  a -= 1; -> Possibilita um número infinito de decrementos;
  a--;
  cout << "A após decremento: " << a <<endl;

  //É possivel realizar a forma abaixo com a maioria das operação caso o simbolo da operação seja adicionado antes do "=":
  //  a *= 1;  
  
    return 0;
}