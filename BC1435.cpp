#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k, e, N;
    int Array[100][100];

    while (cin >> N && N)
    {
        for (i = 0, e = N - 1; i <= e; i++, e--)
        {
            for (j = 0, k = N - 1; j <= k; j++, k--)
            {
                if (j >= i + 1)
                    Array[i][j] = Array[i][k] = Array[e][j] = Array[e][k] = i + 1;
                else
                    Array[i][j] = Array[i][k] = Array[e][j] = Array[e][k] = j + 1;
            }
        }

        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                cout << setw(3) << right << Array[i][j];    // right justified
                if (j != N - 1)
                    cout << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}