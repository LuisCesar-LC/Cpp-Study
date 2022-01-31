#include <iostream>

using namespace std;

float calc_media(float x1, float x2){
  float media = (x1 + x2) / 2;

  return media;
}

int main() {
    
  float n1, n2, media;

  cout << "Informe sua primeira nota: \n";
  cin >> n1;

  cout << "Informe sua segunda nota: \n";
  cin >> n2;

  media = calc_media(n1, n2);
  
  if (media < 2.5){
    cout << "Nota final: D\n";
  }else if (media < 5) {
    cout << "Nota final: C\n";
  }else if (media < 7.5){
    cout << "Nota final: B\n";
  }else{
    cout << "Nota final: A\n";
  }
  
    return 0;
}