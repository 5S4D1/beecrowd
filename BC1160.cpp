#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n)
    {
        int A_population, B_population, year = 0;
        float A_growth_rate, B_growth_rate;

        cin >> A_population >> B_population >> A_growth_rate >> B_growth_rate;

        while (A_population <= B_population)
        {
            A_population += (A_population * A_growth_rate) / 100;
            B_population += (B_population * B_growth_rate) / 100;

            ++year;
            if (year > 100)
                break;
        }
        if (year <= 100)
            cout << year << " anos." << endl;
        else
            cout << "Mais de 1 seculo." << endl;

        n--;
    }
    return 0;
}