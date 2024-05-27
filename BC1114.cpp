#include <iostream>
using namespace std;
int main()
{
    int key = 2002;
    while (true)
    {
        int pass;
        cin >> pass;
        if (pass == key)
        {
            cout << "Acesso Permitido" << endl;
            break;
        }
        else
            cout << "Senha Invalida" << endl;
    }

    return 0;
}