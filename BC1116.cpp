#include <iostream>
using namespace std;
int main()
{
    int n, i = 0;
    cin >> n;
    while (i < n)
    {
        int x, y;
        cin >> x >> y;
        if (y == 0)
        {
            cout << "divisao impossivel" << endl;
            i++;
            continue;
        }
        float store = (float)x / y;
        printf("%.1f", store);
        cout << endl;

        i++;
    }

    return 0;
}