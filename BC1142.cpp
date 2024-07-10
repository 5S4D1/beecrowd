#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 0;
    while (n)
    {
        cout << ++i << " ";
        cout << ++i << " ";
        cout << ++i << " PUM" << endl;
        ++i;
        n--;
    }

    return 0;
}