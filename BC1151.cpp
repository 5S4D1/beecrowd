#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 0, b = 1;
    cout << a;
    if (n > 1)
    {
        cout << " " << b;
    }
    for (int i = 2; i < n; i++)
    {
        int temp = a + b;
        cout << " " << temp;
        a = b;
        b = temp;
    }
    cout << endl;
    return 0;
}