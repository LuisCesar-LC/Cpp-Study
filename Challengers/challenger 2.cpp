#include <iostream>

using namespace std;

int main() {
  
  float media, s_notas, nota;
  float m_turma;
  
  for (int x = 1; x <= 3; x++){
    cout << "Informe a " << x <<"° nota do aluno: \n";
    cin >> nota;
    s_notas += nota;
  }
  media = s_notas / 3;

  cout << "Informe a média da turma: \n";
  cin >> m_turma;

  (media < m_turma) ? cout << "Aluno possui média menor que a turma! \n": (media > m_turma) ? cout << "Aluno possui media maior que a turma" : cout << "aluno possui a media da turma";

  //O possivel concatenar operadores ternarios;
  
  return 0;
}