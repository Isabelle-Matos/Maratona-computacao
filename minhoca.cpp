#include <iostream>
#include <map>
using namespace std;


int main(){
    int linhas, colunas;

    cin >> linhas >> colunas;

    int matriz[linhas][colunas];
    int matriz_transposta[colunas][linhas];
    map<int, int> dicionario_linhas;
    map<int, int> dicionario_colunas;
    int maior_linha = 0, maior_coluna = 0;

    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            cin >> matriz[i][j];
            dicionario_linhas[i]+= matriz[i][j];
        }
    }

    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            matriz_transposta[j][i] = matriz[i][j];
        }
    }

    for(int i=0; i<colunas; i++){
        for(int j =0; j< linhas; j++){
            dicionario_colunas[i] +=  matriz_transposta[i][j];
        }
       
    }

    for(int i =0; i<linhas; i++){
        if(dicionario_linhas[i] > maior_linha)
            maior_linha = dicionario_linhas[i];
    }
   

    for(int i =0; i<colunas; i++){
        if(dicionario_colunas[i] > maior_coluna)
            maior_coluna = dicionario_colunas[i];
    }
   
    if(maior_coluna > maior_linha) cout << maior_coluna << endl;
    else cout << maior_linha << endl;

    return 0;
}