#include<iostream>
using namespace std;
#include <vector>

int main(){
    int qtd, valores;
    vector<vector<int>> tijolos;
    cin >> qtd;


    while(qtd--){
        vector<int> temp;
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                temp.push_back(0);
            }
            tijolos.push_back(temp);
        }

         for(int i=0; i<9; i+=2){
            for(int j=0; j<i+1; j+=2){
              cin >> valores;
              tijolos[i][j] = valores;
            }
        }

        for(int i=1; i<9; i+=2){
            tijolos[8][i] = ((tijolos[6][i - 1] - tijolos[8][i - 1] - tijolos[8][i + 1]) / 2);
        }

        for (int i = 7; i > 0; i--)
        {
            for (int j = 0; j < i + 1; j++)
            {
                tijolos[i][j] = tijolos[i + 1][j] + tijolos[i + 1][j + 1];
            }
        }

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                cout << tijolos[i][j];
                if(j!=i) cout << " ";
            }
            cout << endl;
        }
    }


    return 0;
}