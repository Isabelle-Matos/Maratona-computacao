#include <iostream>
using namespace std;
#include <map>

int main(){

    map <int, int> num;
    int count = 0;
    int n,c;
    cin >> n;

    while(n--){
        cin >> c;
      
        num.insert({c, 0});
        

        if(num.find(c) != num.end()){
            num[c]++;
        }
        else{
            num[c] = 1;
        }
    }

    int chave, nu = 0, maior = 1;

    for (auto const& [numero, contador] : num){
        if(contador > maior){
            maior = contador;
            chave = numero;
        }
       
       if(numero > nu){
            nu = numero;
       }

        cout << "Número: " << numero << ", Contador: " << contador << endl;

    }

    if(num[nu] == maior){
        chave = nu;
        cout << chave << " " << maior << endl;
       }
       else{
        cout << chave << " " << maior << endl;
       }


    return 0;
}