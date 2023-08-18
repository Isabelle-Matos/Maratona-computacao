#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int matriz[n][n];
    int indice, count =0, maior = 0;

    while(n!= 0){   
        int matriz[n][n];
        count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
             cin >> matriz[i][j];
        }
    }
    for(int j=0; j<n; j++){
        for(int i=0; i<n; i++){
            if(matriz[i][j] == 1) count ++;
        }
        if(count > maior) maior = count;
        count = 0;
    }
        cout << maior << endl;
        cin >> n;
        maior = 0;
    }
    return 0;
}