#include <iostream>

using namespace std;

#define curtir cout << "The life is snake!\n" << a;

  //Constantes:
      //  "#define pi 3.14;"
      //  #define serve para determinar uma constante;
      // Também da para criar funções constantes com o define, como por exemplo o curtir acima;

  //Variáveis globais e locais, o nome é autoexplicativo, ou seja, as variáveis locais so existem dentro da própria função;

  //Nas funções a variáveis de entrada recebem uma copia do valor das variáveis do código principal, assim qualquer alteração nessa variável por padrão não altera a variável de origem;
    // Caso queira modificar as variáveis originas basta adicionar o & antes do nome das variáveis na sua declaração na função:

 void escrever()
    {
      cout << "Aló mundo! \n";
    } 

  int soma(int a,int b) 
    {
      int soma;
      soma = a + b;
      return soma;
    }

int main() {

  //Chamando a função repetidas vezes com estrutura de repetição;
  
  int repeat = 1;

  while (repeat < 6){
    repeat+=1;
    escrever(); 
  }

  //Função de soma;
  int a = 5, b = 4;
  int s;
  s = soma(a, b);
  cout << "Soma: " << s << endl;

  curtir
  
  return 0;
}