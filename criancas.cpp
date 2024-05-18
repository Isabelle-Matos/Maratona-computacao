#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int n;
    cin >> n;
 
    long long pesomax;
    cin >> pesomax;

    vector<long long>pesos;
    long long x;
    for(int i = 0; i < n; i++){
        cin >> x;
        pesos.push_back(x);
    }

    sort(pesos.begin(), pesos.end());

    long long qtd = 0;
    long int i = 0;
    long int j = pesos.size() - 1;    
    while(i <= j){
        if(pesos[i] + pesos[j] <= pesomax){
            i++;
            j--;
        }else{
            j--;
        }
        qtd++;
    }

    cout << qtd << '\n';
    
    return 0;
}