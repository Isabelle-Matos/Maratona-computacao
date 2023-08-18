#include <iostream>
using namespace std;


int main()
{

    int n;
    cin >> n;

    long long int aux;
    int a = 0, b = 1;
    int vetor[n];
    vetor[0] = 0;
    vetor[1] = 1;

    if(n > 1){
    for (int i = 2; i < n; i++)
    {
        aux = a + b;
        a = b;
        b = aux;
        vetor[i] = aux;
    }
    for(int i=0; i<n; i++){
        cout << vetor[i] << " ";
    }
    }
    else{
    for(int i=0; i<n; i++){
        cout << vetor[i] << " ";
    }
    }
    cout << "\n";
    return 0;
}