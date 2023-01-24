#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long a[20], N = 0, ilength[20], dlength[20], imax = 0, dmax = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> a[i];
    for (int r = 0; r < N; r++)
    {
        ilength[r] = 1;
        dlength[r] = 1;
    }
    ilength[0] = 1;
    dlength[N - 1] = 1;
    for (int j = 0; j < N; j++)
    {
        for (int k = 0; k < j; k++)
        {
            if ((a[k] < a[j]) && (ilength[k] + 1 > ilength[j]))
                ilength[j] = ilength[k] + 1;
        }
    }
    for (int j = N - 1; j > -1; j--)
    {
        for (int k = N - 1; k > j; k--)
            if ((a[k] < a[j]) && (dlength[k] + 1 > dlength[j]))
                dlength[j] = dlength[k] + 1;
    }
    for (int t = 0; t < N; t++)
    {
        if (ilength[t] > imax)
            imax = ilength[t];
        if (dlength[t] > dmax)
            dmax = dlength[t];
    }
    cout << max(imax, dmax);
    return 0;
}
