#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


int main(){

    vector <string> vetor_strings;
    vector <int> vetor_quantidade;
    int n;
    string p;

    cin >> n;

    while(n--){
        cin >> p;
        vetor_strings.push_back(p);

        int qtd = p.length();
        vetor_quantidade.push_back(qtd);
    }


    sort(vetor_quantidade.begin(), vetor_quantidade.end());

    sort(vetor_strings.begin(), vetor_strings.end());

  
    int tam = 0;
    for (size_t i = 0; i < vetor_quantidade.size(); i++){

        for (size_t j = 0; j < vetor_strings.size(); j++){
            tam = vetor_strings[j].length();
            
            if(tam == vetor_quantidade[i]){
                cout << vetor_strings[j] << endl;
                vetor_strings.erase(vetor_strings.begin() + j);
              
            }
            
        }
     
    }
    return 0;
}