#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

#include <vector>

int main(){

    vector<string> nomes;
    int qtd;
    string nome;
    cin >> qtd;
    
    while(qtd--){
        cin >> nome;
        nomes.push_back(nome);
    }

    sort(nomes.begin(), nomes.end());
     for(const auto& nome : nomes) {
        cout << nome << endl;
    }

    return 0;
}