#include <iostream>
using namespace std;
#include <map>

#define endl '\n'
#define FOR(i, m, n) for (int i = m; i < n; i++)

int pontos(int *mao)
{
    FOR(i, 0, 5)
    {
        FOR(j, i, 5)
        {
            if (mao[j] < mao[i])
            {
                int temp = mao[i];
                mao[i] = mao[j];
                mao[j] = temp;
            }
        }
    }
    map<int, int> cartas;
    cartas[1] = 0;
    cartas[2] = 0;
    cartas[3] = 0;
    cartas[4] = 0;
    cartas[5] = 0;
    cartas[6] = 0;
    cartas[7] = 0;
    cartas[8] = 0;
    cartas[9] = 0;
    cartas[10] = 0;
    cartas[11] = 0;
    cartas[12] = 0;
    cartas[13] = 0;
    FOR(i, 0, 5)
    cartas[mao[i]]++;
    if (mao[1] == mao[0] + 1 and
        mao[2] == mao[1] + 1 and
        mao[3] == mao[2] + 1 and
        mao[4] == mao[3] + 1)
        return mao[0] + 200;
    FOR(i, 1, 14)
    {
        if (cartas[i] == 4)
            return i + 180;
        if (cartas[i] == 3)
        {
            FOR(j, 1, 14)
            {
                if (cartas[j] == 2)
                    return i + 160;
            }
            return i + 140;
        }
        if (cartas[i] == 2)
        {
            FOR(j, 0, 14)
            {
                if (cartas[j] == 3)
                    return j + 160;
            }
            FOR(j, i + 1, 14)
            {
                if (cartas[j] == 2)
                    return (3 * j) + (2 * i) + 20;
            }
            return i;
        }
    }
    return 0;
}

int main()
{
    int n, cartas[5], teste = 1;
    cin >> n;
    FOR(i, 0, n)
    {
        FOR(i, 0, 5)
            cin >> cartas[i];
        int p = pontos(cartas);
        cout << "Teste " << teste << endl
             << p << endl;
        if (i != n - 1)
            cout << endl;
        teste++;
    }
    return 0;
}
