#include <iostream>
using namespace std;
int main()
{
    while (true)
    {
        int m, n, sum = 0;
        cin >> m >> n;
        if (m < 1 || n < 1)
            break;
        if (m > n)
        {
            int temp = m;
            m = n;
            n = temp;
        }
        for (int i = m; i <= n; i++)
        {
            cout << i << " ";
            sum += i;
        }
        cout << "Sum=" << sum << endl;
    }

    return 0;
}