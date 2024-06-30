#include <iostream>
using namespace std;

int main()
{
    int alco, gaso, dies, n;
    alco = gaso = dies = 0;
    while (cin >> n, n != 4)
    {
        if (n == 1)
            alco++;
        else if (n == 2)
            gaso++;
        else if (n == 3)
            dies++;
    }
    cout << "MUITO OBRIGADO\n"
         << "Alcool: " << alco << "\nGasolina: " << gaso << "\nDiesel: " << dies << endl;

    return 0;
}