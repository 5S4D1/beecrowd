#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n, n != 0)
    {
        int i = 1;
        while (i <= n)
        {
            cout << i;
            if (i != n)
                cout << " ";
            i++;
        }
        cout << endl;
    }
    return 0;
}