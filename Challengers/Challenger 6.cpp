#include <iostream>

using namespace std;

int main() {
    int n, soma = 0;
    float media;
   
    cout << "Informe a quantidade de famílias que irá informar: \n";
    cin >> n;
    
    int* vetor = new int[n];
    
    for (int i = 1; i<= n; i++){
        cout << "Informe a renda da "<< i << " família: ";
        cin >> vetor[i];
        cout << endl;
    }
    
    for (int i = 1; i<=n ; i++){
        soma += vetor[i];
    }
    
        media = (float) soma/n;
    
    for (int i = 1; i<=n ; i++){
        if (vetor[i]<media){
            cout << "A " << i << " família esta abaixo da média! \n";
        }else{
            if (vetor[i]>media){
            cout << "A " << i << " família esta acima da média! \n";
            }else{
                cout << "A " << i << " família esta na média! \n";
            }
        }
    }
    
    return 0;
};