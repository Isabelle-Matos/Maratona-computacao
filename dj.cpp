#include <bits/stdc++.h>
using namespace std;

int main(){
    string joia;
    map<string, char> tipos;
    int count = 0;
    while(cin >> joia){
        
        if(tipos.find(joia) == tipos.end()){
            tipos[joia] = '.';
            count++;
        }
    }
    cout << count << endl;
    return 0;
}