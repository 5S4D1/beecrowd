#include <iostream>
using namespace std;
int main()
{
    while (true)
    {
        int x, y;
        cin >> x >> y;
        if (x == 0 || y == 0)
            break;
        if (x > 0 && y > 0)
            cout << "primeiro" << endl;
        else if (x > 0 && y < 0)
            cout << "quarto" << endl;
        else if (x < 0 && y < 0)
            cout << "terceiro" << endl;
        else
            cout << "segundo" << endl;
    }

    return 0;
}