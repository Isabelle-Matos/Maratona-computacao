#include <iostream>
using namespace std;

void verifica(int *vetor){
    int count_zero = 0, count_um = 0;
    int indice, indice2;
    for(int i=0; i<3; i++){
        if(vetor[i] == 0){
            indice = i;
            count_zero++;
        }
        else if(vetor[i] == 1){
            indice2 = i;
            count_um++;
        }
    }
    if(count_zero == 1){
        if(indice == 0){
            cout << 'A' << endl;
        }
        else if(indice == 1){
            cout << 'B' << endl;
        }
        else
        cout << 'C' << endl;
    }
      if(count_um == 1){
        if(indice2 == 0){
            cout << 'A' << endl;
        }
        else if(indice2 == 1){
            cout << 'B' << endl;
        }
        else
        cout << 'C' << endl;
    }
    if(count_um == 3 || count_zero == 3 ) cout << '*' << endl;

}

int main(){

    int A, B, C;
    int vetor[3];
    while(cin >> A >> B >> C){
        vetor[0] = A;
        vetor[1] = B;
        vetor[2] = C;

        verifica(vetor);

    }

    return 0;
}