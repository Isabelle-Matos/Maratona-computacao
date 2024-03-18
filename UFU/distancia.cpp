#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;


int main(){

    float distancia = 0;
    int qtd;
    int x2, y2;
    vector<pair<int, int>> coordenada;
    vector <float > dist;
    cin >> qtd;

    while(qtd--){
        cin >> x2 >> y2;
        coordenada.push_back(make_pair(x2, y2));
        distancia = sqrt(x2 * x2 + y2 * y2);
        dist.push_back(distancia);
    }

    //  for (const auto& ponto : coordenada) {
    //     std::cout << "(" << ponto.first << ", " << ponto.second << ")" << std::endl;
    // }

    sort(dist.begin(), dist.end());

    // for (const auto& d : dist) {
    //     cout << "(" << d << endl;
    // }

    for (size_t i = 0; i < dist.size(); i++){

            for (size_t j = 0; j < coordenada.size(); j++){
                int x = coordenada[j].first;
                int y = coordenada[j].second;

                distancia = sqrt(x* x + y * y);
           
                
                if(distancia == dist[i]){
                    cout << coordenada[j].first << " " << coordenada[j].second << endl;
                    coordenada.erase(coordenada.begin() + j);
                
                }
                
            }
        
        }
    return 0;
}