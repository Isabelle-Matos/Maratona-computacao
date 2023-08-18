#include <bits/stdc++.h>
using namespace std;
int confere_maior(vector<int> vetor, int n){
    int qtd = 0, divisao, count =0;
    for(int i=0; i<n; i++){
        qtd+= vetor[i];
    }
    if(qtd%n !=0) return -1;
    else{
        divisao = qtd/n;
        for(int i=0; i<n; i++){
            if(vetor[i] > divisao){
                count+= vetor[i] - divisao;
            }
        }
        return count;
    }

}
int main(){

    int n;
    cin >> n;
    int resposta;

    while(n!=-1){
        vector<int> candy(n,0);
        for(int i = 0; i<n; i++){
            cin >> candy[i];
        }
        resposta = confere_maior(candy, n);
        cout << resposta << endl;
        candy.clear();
        cin >> n;
      
    }


    return 0;
}