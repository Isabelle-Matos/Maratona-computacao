#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


int main(){

    int musicos, pares, max = 0, a, b, c;
    cin >> musicos >> pares;
    vector<vector<int>> entrosamento;
    for(int i= 0; i<musicos; i++){
        vector<int> temp;
        for(int j = 0; j<musicos; j++){
            temp.push_back(0);
        }
        entrosamento.push_back(temp);
    }
    while(pares--){
        int i, j, k;
        cin >> i >> j >> k;
        entrosamento[i-1][j-1] = k;
        entrosamento[j-1][i-1] = k;
    }
    for(int i = 0; i < musicos; i++){
        for(int j = i+1; j < musicos; j++){
            for(int k = j+1; k < musicos; k++){
                if(entrosamento[i][j] + entrosamento[j][k] + entrosamento[i][k] >= max){
                    a = i;
                    b = j;
                    c = k;
                    max = entrosamento[i][j] + entrosamento[j][k] + entrosamento[i][k];
                }
            }
        }
    }
    cout << a+1 << ' ' << b+1 << ' ' << c+1 << endl;
    return 0;
}
