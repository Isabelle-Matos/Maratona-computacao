#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int a, b;
    
    cin >> a >> b;
    while(a !=0 && b !=0){
        int array[a], arrayb[b];
        int tam, tam2, menora, menorb1, menorb2;

        for(int i=0; i<a; i++){
            cin >> array[i];
        }

        tam = sizeof(array)/sizeof(array[0]);
        std::sort(array, array + tam);

        for(int i=0; i<b; i++){
            cin >> arrayb[i];
        }

        tam2 = sizeof(arrayb)/sizeof(arrayb[0]);
        std::sort(arrayb, arrayb+tam2);

        menora = array[0];
        menorb2 = arrayb[1];

      

        if(menora >= menorb2) cout << "N" << endl;
         else cout << "Y" << endl;
     
        cin >> a >> b;
    }


    return 0;
}