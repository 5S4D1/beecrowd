#include <iostream>
using namespace std;

int main()
{
    int n, sum, i,t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        sum = 0;
        for (i = 1; i < n; i++)
        {
            if (n % i == 0)
                sum += i;
        }
        if (sum == n)
            cout << n << " eh perfeito" << endl;
        else
            cout << n << " nao eh perfeito" << endl;
    }
    return 0;
}