#include <iostream>

using namespace std;

int main()
{
    
    int x, y;
    
    cout << "================== Dimensões das Matrizes ===================\n";
    
    cout << "Informe a quantidade de linhas da matriz: \n";
    cin >> x;
    cout << "Informe a quantidade de colunas da matriz: \n";
    cin >> y;

    int* matriz1 = new int[x,y];
    
    int* matriz2 = new int[x,y];
    
    cout << "========================= Matriz 1 =========================\n";
    
    for (int i = 1; i <= x; i++){
        for (int j = 1; j <= y; j++){
            cout << "Informe o valor da coluna " << i << " e linha " << j << " : \n";
            cin >> matriz1[i,j];
        }
    }

    cout << "========================= Matriz 2 =========================\n";

    for (int i = 1; i <= x; i++){
        for (int j = 1; j <= y; j++){
            cout << "Informe o valor da coluna " << i << " e linha " << j << " : \n";
            cin >> matriz2[i,j];
        }
    }
    
    for (int i = 1; i <= x; i++){
        cout << "| ";
        for (int j = 1; j <= y; j++){
            cout << matriz1[i,j] + matriz2[i,j] << " ";
        }
        cout << "|\n";
    }
    
    return 0;
}
