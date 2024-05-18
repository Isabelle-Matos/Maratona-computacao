#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int n;
    cin >> n;
 
    long int anterior = 0;
    long int atual = 0;
    long int passosmax = 0;
 
    cin >> anterior;
    for(int i = 1; i < n; i++){
        cin >> atual;
        
        if(atual < anterior){
            anterior = anterior - atual;
            atual += anterior;
            passosmax += anterior;
        }
 
        anterior = atual;
    }
 
    cout << passosmax << endl;
    return 0;
}