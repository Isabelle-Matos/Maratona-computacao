#include <iostream>
#include <set>

using namespace std;


int main(){

    int n, r, y;
  

    while(cin >> n >> r){
         set<int> vetor_novo; //cria o cunjunto vetor_novo
        for(int i=1; i<=n; i++){
            vetor_novo.insert(i); // insere os itens de 1 a n no vetor
        }
        for(int i=1; i<=r; i++){
            cin >> y;
            vetor_novo.erase(y);//retira o item do vetor
        }
        if(vetor_novo.size() == 0){//se todos os itens foram retirados, ou seja, todos os nadadores voltarem...
            cout << '*' << endl; 
        }else{
            //iterador e um ponteiro que aponta para os elementos do conteiner
            for(set<int>::iterator it = vetor_novo.begin(); it != vetor_novo.end(); it++){
                cout << *it << ' ';
            }
            cout << endl;
        }
    }
    


    return 0;
}