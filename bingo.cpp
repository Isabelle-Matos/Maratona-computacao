#include <iostream>
#include <map>
using namespace std;

bool confere_linha(int matriz[5][5]){
    int count = 0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            for(int k=0; k<5; k++){
                if((j!=k) && (matriz[i][j] == matriz[i][k])){
                    count++;
                    if(count == 4){
                        return true;
                        break;
                    }
                }        
            }
            count =0;
        }
    }
    return false;  
}

bool confere_coluna(int matriz[5][5]){
    int count = 0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            for(int k=0; k<5; k++){
                if((j!=k) && (matriz[j][i] == matriz[k][i])){
                    count++;
                    if(count == 4){
                        return true;
                        break;
                    }
                }        
            }
            count = 0;
        }
    }
    return false;  
}

bool confere_digprincipal(int matriz[5][5]){

    if(matriz[0][0] == matriz[1][1]){
        if(matriz[1][1] == matriz[2][2]){ 
            if(matriz[2][2] == matriz[3][3]){
                if(matriz[3][3] == matriz[4][4]){
                    return true;
                }
            }
        }
    }
    return false;
    
}

bool confere_digsec(int matriz[5][5]){
     if(matriz[0][4] == matriz[1][3]){
        if(matriz[1][3] == matriz[2][2]){ 
            if(matriz[2][2] == matriz[3][1]){
                if(matriz[3][1] == matriz[0][0]){
                    return true;
                }
            }
        }
    }
    return false;
}

int main(){ 
    
    int matriz[5][5];
    
    int qtd, cartela, numeros, count = 1, bingo =0, vencedor;
    cin >> qtd;

    while(qtd--){

        for(int i=0; i<5; i++){
            for(int j=0; j<5; j++){
                if(i == 2 && j ==2){
                    continue;
                }
                cin >> matriz[i][j];
              
            }   
        }

      

        while(count <75){ 
            cin >> numeros;

            for(int i=0; i<5; i++){
                for(int j=0; j<5; j++){
                    if(matriz[i][j] == numeros){
                        matriz[i][j] = 0;
                    }   
                }
            }


            if(bingo<=1){ 
            if(confere_coluna(matriz) || confere_linha(matriz) || confere_digprincipal(matriz) || confere_digsec(matriz)){
                bingo++;
                }
            }

            if(bingo == 1) vencedor = count;

            
            count++;

        }
    }
        cout << "BINGO after " << vencedor<< " numbers announced" << endl;
    


    return 0;
}