#include <iostream>
using namespace std;

int main()
{
    int quant;
    int m[9][9];
    cin >> quant;
    while (quant--)
    {

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                m[i][j] = 0;
            }
        }

        for (int i = 0; i < 9; i += 2)
        {
            for (int j = 0; j < i + 1; j += 2)
            {
                cin >> m[i][j];
            }
        }

        for (int j = 1; j < 9; j += 2)
        {
            m[8][j] = (m[6][j - 1] - m[8][j - 1] - m[8][j + 1]) / 2;
        }

        for (int i = 7; i > 0; i--)
        {
            for (int j = 0; j < i + 1; j++)
            {
                m[i][j] = m[i + 1][j] + m[i + 1][j + 1];
            }
        }

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                cout << m[i][j];
                if(j!=i) cout << " ";
            }
            cout << endl;
        }
    }
    return 0;
}