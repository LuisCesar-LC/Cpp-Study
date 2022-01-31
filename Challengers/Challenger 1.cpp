#include <iostream>

using namespace std;

float calc(float x){
  float result;
  result = (x*x) - (3*x) + 5;
  return result;
}

int main() {

  float x;
  cout << "Informe x para a função f(x)=x²-3x+5: \n";
  cin >> x;
  cout << "O resultado è: " << calc(x) << endl;;
  
    return 0;
}