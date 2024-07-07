#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int minimum = array[0];
    int position = 0;

    for (int i = 0; i < n; i++)
    {
        if (minimum > array[i])
        {
            minimum = array[i];
            position = i;
        }
    }
    cout << "Menor valor: " << minimum << endl;
    cout << "Posicao: " << position << endl;

    return 0;
}