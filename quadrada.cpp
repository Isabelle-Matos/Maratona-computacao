#include <iostream>
using namespace std;

int main(){

    int n, a, b;
    cin >> n;
    while(n!=0){

        b = n;
        a = 0;
        int matriz[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                matriz[i][j] = 0;
            }
        }
    while(b>=0){

        for(int i=a; i<b; i++){
            for(int j=a; j<b; j++){
                matriz[i][j]++;
            }
        }
        b--;
        a++;
    }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                printf("%3d", matriz[i][j]);
                if(j<n-1) cout << " ";
            }
            cout << endl;
        }
        cout << endl;
        cin >> n;

        }


    return 0;
}