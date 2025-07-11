#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, numberOfDiamonds, mining;
    string particles;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        numberOfDiamonds = 0;
        mining = 0;
        cin >> particles;

        for (char j : particles)
        {
            if (j == '<')
            {
                mining++;
            }
            else if (mining && j == '>')
            {
                numberOfDiamonds++;
                mining--;
            }
        }

        cout << numberOfDiamonds << endl;
    }

    return 0;
}