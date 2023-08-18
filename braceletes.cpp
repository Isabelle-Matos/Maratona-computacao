#include <bits/stdc++.h>

using namespace std;

int main(){

    int qtd, index;
    string a, b, invertida;

    cin >> qtd;

    while(qtd--){
        index = 0;
        cin >> a >> b;
        invertida = a;
        reverse(invertida.begin(),invertida.end());
        b += b;

        if((index = b.find(a)) != string::npos) cout << "S" << endl;
        else if((index = b.find(invertida))!= string::npos) cout << "S" << endl;
        else cout << "N" << endl;


    }
    return 0;
}