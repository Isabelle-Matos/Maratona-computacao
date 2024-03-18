#include <iostream>
#include <map>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main(){

    unordered_map <string, int> cafes;
    int n, count = 0;
    string c;

    cin >> n;

    while(n--){
        cin >> c;

        cafes.insert({c, 0});
        

        if(cafes.find(c) != cafes.end()){
            cafes[c]++;
        }
        else{
            cafes[c] = 1;
        }
    }
    
    vector<pair<string, int>> vetor_pares(cafes.begin(), cafes.end());

    sort(vetor_pares.begin(), vetor_pares.end(), [](const auto& a, const auto& b) {
        return a.second > b.second; // Ordena com base nos valores dos pares (chave, valor)
    });


    for (const auto& par : vetor_pares) {
        std::cout << par.first << ": " << par.second << std::endl;
    }



    return 0;
}