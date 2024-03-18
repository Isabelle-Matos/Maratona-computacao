#include <iostream>
#include <vector>
using namespace std;


int main(){

    int qtd, num, maior = 0;
    cin >> qtd;

    vector<int> numeros;

    while(qtd--){
        cin >> num;
        numeros.push_back(num);
    }

     for (size_t i = 0; i < numeros.size(); ++i) {
        for(size_t j = i+1; j< numeros.size(); j++){
            int resultado = numeros[i] - numeros[j];
            if(resultado < 0) resultado *= -1;
            if(resultado > maior)  maior = resultado;
        }
    }

    cout << maior << endl;
  
    return 0;
}