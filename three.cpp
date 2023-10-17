#include <iostream>

using namespace std;

int main(){

    string a, b, c;
    int n, count = 0;
    cin >> n;
    while(n--){
        cin >> a >> b >> c;
        count  = 0;

        for(int i=0; i<a.length(); i++){
            if(a[i] == c[i]){
                swap(b[i],c[i]);
                count++;
            }
            else if(b[i] == c[i]){
                swap(a[i],c[i]);
                count++;
            }
            else if(a[i] == b[i] && b[i] == c[i]) count++;
        }
     
        if(a == b && count == c.length()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }



    return 0;
}