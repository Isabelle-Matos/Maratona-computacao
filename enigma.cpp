#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    string s1, s2;
    int index = 0;
    while(cin >> s1 >> s2){
        int diferenca = s1.size() - s2.size();
        int j = 0;
        int aux = 0;
        int cribs = 0;
        int bl = 0;

        while(j + aux <= diferenca){
            
            for(int i = 0; s2[i] != '\0'; i++){
                if(s2[i] == s1[j + aux]){
                    bl = 1;
                    break;
                }
                j++;
            }

            if(!bl){
                cribs++;
            }

            bl = 0;
            aux++;
            j = 0;
        }

        cout << cribs << endl;
    }
    
    return 0;
}