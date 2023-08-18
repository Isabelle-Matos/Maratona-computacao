#include <iostream>
#include <string.h>

using namespace std;

void verifica(char a, char *b)
{
    int count = 0;
    char novo[101];

    for(int i = 0; i < 101; i++) novo[i] = '\0';
 
    for(int i = 0; i < strlen(b); i++){
        if(b[i] != a){
            novo[count] = b[i];
            count++;
        }
    }

    int index = -1;
    for(int i = 0; i < strlen(novo); i++){
        if(novo[i] != '0'){
            index = i;
            break;
        }
    }
    if(index == -1){ 
        cout << '0' << endl;
    }else{
        for(int i = index; i < strlen(novo); i++){
            cout << novo[i];
        }
        cout << endl;
    }

}

int main()
{

    char a, b[101];

    cin >> a >> b;

    while (a != '0' && b != "0")
    {
        verifica(a, b);
        cin >> a >> b;
    }

    return 0;
}

