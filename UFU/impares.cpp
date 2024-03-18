#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){

    int n, num;
    cin >> n;
    vector<int> numeros_impares;
    vector<int> numeros_pares;

    for (int i =0; i < n; i++){
        cin >> num;

        if(num%2 == 0) numeros_pares.push_back(num);
        else numeros_impares.push_back(num);
    
    }

    sort(numeros_pares.begin(), numeros_pares.end());
    sort(numeros_impares.begin(), numeros_impares.end());

    for (size_t i = 0; i < numeros_impares.size(); i++){
        cout << numeros_impares[i] << " ";
    }

    for (size_t i = 0; i < numeros_pares.size(); i++){
        cout << numeros_pares[i] << " ";
    }
    cout << endl;
    return 0;
}