#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    while (n != 0)
    {
        int num1 = 1;
        int num2 = 1;
        int matriz[n][n];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                matriz[i][j] = 1;
            }
        }

        for (int i = 0; i < n; i++)
        {
            num2 = i;
            for (int j = 0; j < n; j++)
            {
                if (j > i)
                {
                    matriz[i][j] += num1;
                    num1++;
                }
                else if (i > j)
                {

                    matriz[i][j] += num2;
                    num2--;
                }
            }
            num1 = 1;
        }

        // imprimir a matriz
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%3d", matriz[i][j]);
                if (j < n - 1)
                    cout << " ";
            }
            cout << endl;
        }
        cout << endl;
        cin >> n;
    }

    return 0;
}