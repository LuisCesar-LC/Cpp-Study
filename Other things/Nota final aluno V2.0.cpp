#include <iostream>

using namespace std;

//Operadores lógicos: E -> &&, OU -> ||, NÃO -> !;

float calc_media(float x1, float x2){
  float media = (x1 + x2) / 2;

  return media;
}

#define mediafinal cout << "Sua média é: " << media << endl;

int main() {
    
  float n1, n2, media, freq;

  cout << "Informe sua primeira nota: \n";
  cin >> n1;

  cout << "Informe sua segunda nota: \n";
  cin >> n2;

  media = calc_media(n1, n2);

  mediafinal
  
  if (media < 2.5){
    cout << "Nota final: D\n";
  }else if (media < 5) {
    cout << "Nota final: C\n";
  }else if (media < 7.5){
    cout << "Nota final: B\n";
  }else{
    cout << "Nota final: A\n";
  }

  cout << "Qual é o seu percentual de frequência: \n";
  cin >> freq;

  if (media < 5 || freq < 75){
    cout << "O aluno está reprovado!\n";
  }else {
    cout << "O aluno está aprovado!\n";
  }

  (media >= 5) ? cout << "aprovado" : cout << "reprovado";

  //Operador ternário: - DOIDERA FDP -
  //(media >= 5) ? cout << "aprovado" : cout << "reprovado";
  
    return 0;
}