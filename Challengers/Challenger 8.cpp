#include <iostream>

using namespace std;

int main()
{
    
    char condicao = 'S';
    int tamanho = 0;
    
    while (condicao == 'S'){
        
      cout << "informe o tamanho do vetor: ";
      cin >> tamanho;
      
      int* vetor = new int[tamanho];
      
      for (int i = 1; i <= tamanho; i++){
          cout << "Informe o " << i << " item do vetor: \n";
          cin >> vetor[i];
      }
      
      cout << "============= IMPRIMINDO O VETOR =============" << endl << "(";
      
      for (int i = 1; i<= tamanho; i++){
          cout << vetor[i];
          (i==tamanho) ? cout<<")" : cout<<",";
      }
      
      //condição ? instrução1 : instrução2 ;
      
      cout << "\n";
        
      delete[] vetor;    
    
      cout << "Deseja imprimir outro vetor (S/N): \n";
      cin >> condicao;
    };

    return 0;
}
