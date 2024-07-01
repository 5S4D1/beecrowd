#include <iostream>
using namespace std;

int main()
{
    int n, m, count = 1;
    cin >> n;

    while (n)
    {
        cin >> m;
        cout << "resposta " << count << ": " << m << endl;
        count++;
        n--;
    }

    return 0;
}