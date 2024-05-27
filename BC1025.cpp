#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int array[], int low, int high)
{
    int pivot = array[high];

    int i = (low - 1);
    int len;
    for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);

    return (i + 1);
}

void quickSort(int array[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(array, low, high);

        quickSort(array, low, pi - 1);

        quickSort(array, pi + 1, high);
    }
}

int main()
{
    int c = 0;
    while (true)
    {
        int n, q;
        cin >> n >> q;
        if (n == 0 && q == 0)
            break;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        // sorting
        quickSort(arr, 0, n - 1);

        cout << "CASE# " << ++c << ":" << endl;
        for (int j = 0; j < q; j++)
        {
            int x;
            bool found = false;
            cin >> x;
            for (int i = 0; i < n; i++)
            {
                if (x == arr[i])
                {
                    cout << x << " found at " << i + 1 << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << x << " not found" << endl;
        }
    }

    return 0;
}