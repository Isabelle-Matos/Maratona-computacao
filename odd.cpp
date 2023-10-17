#include <iostream>

using namespace std;


int main(){

    int qtd, a, b;
    cin >> qtd;

    while(qtd--){
        cin >> a >> b;

        if(a == b) cout << "0" << endl;
        else if(a%2== 0){
            if(b%2 == 0){
                if(a < b) cout << "2" << endl;
                else cout << "1" << endl;
            }
            else{
                if(a < b) cout << "1" << endl;
                else cout << "2" << endl;
            }
        }
        else{
             if(a%2 !=0){
                if(b%2!=0){
                    if(a<b) cout <<"2" << endl;
                    else cout << "1" << endl;
                }
                else{
                    if(a<b) cout << "1" << endl;
                    else cout << "2" << endl;
                }
             }
        }
    }


    return 0;
}