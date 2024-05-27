#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int rabbit, rat, frog, n;
    rabbit = rat = frog = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int amount;
        char type;
        cin >> amount >> type;
        if (type == 'C')
            rabbit += amount;
        else if (type == 'R')
            rat += amount;
        else
            frog += amount;
    }
    int total = rabbit + rat + frog;
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << rabbit << endl;
    cout << "Total de ratos: " << rat << endl;
    cout << "Total de sapos: " << frog << endl;
    
    float temp = (float)(rabbit * 100) / total;
    printf("Percentual de coelhos: %.2f %%\n", temp);
    temp = (float)(rat * 100) / total;
    printf("Percentual de ratos: %.2f %%\n", temp);
    temp = (float)(frog * 100) / total;
    printf("Percentual de sapos: %.2f %%\n", temp);

    return 0;
}