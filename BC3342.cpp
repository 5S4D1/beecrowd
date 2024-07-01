#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    n = n * n;
    int temp = n;

    if (n % 2 != 0)
        n += 1;
    int white = n / 2;

    cout << white << " casas brancas e " << temp - white << " casas pretas" << endl;

    return 0;
}