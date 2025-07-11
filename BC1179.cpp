#include <iostream>
using namespace std;

int main()
{
    int par[5] = {0}, impar[5] = {0};
    int contPar = 0, contImpar = 0, num;
    for (int i = 0; i <= 15; i++)
    {
        if (i < 15)
            cin >> num;
        if (i == 15)
        {
            for (int j = 0; j < contImpar; j++)
                cout << "impar[" << j << "] = " << impar[j] << endl;
            for (int j = 0; j < contPar; j++)
                cout << "par[" << j << "] = " << par[j] << endl;
            break;
        }

        if (num % 2 == 0)
        {
            par[contPar++] = num;
            if (contPar == 5)
            {
                for (int j = 0; j < 5; j++)
                    cout << "par[" << j << "] = " << par[j] << endl;
                contPar = 0;
            }
        }
        else
        {
            impar[contImpar++] = num;
            if (contImpar == 5)
            {
                for (int j = 0; j < 5; j++)
                    cout << "impar[" << j << "] = " << impar[j] << endl;
                contImpar = 0;
            }
        }
    }

    return 0;
}