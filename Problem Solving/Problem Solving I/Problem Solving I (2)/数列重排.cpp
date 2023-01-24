#include <iostream>
using namespace std;
int main()
{
    double a[10001], b[10001], c[10001];
    int N = 0, d = 0;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i <= N; i++)
        b[i] = -1;
    for (int i = 0; i <= N; i++)
        c[i] = -1;
    for (int j = 1; j <= N; j++)
    {
        for (int k = d + 1; k <= N; k++)
        {
            if (k % 2 != 0)
            {
                b[j] = a[k];
                d = k;
                break;
            }
        }
    }
    d = 0;
    for (int j = 1; j <= N; j++)
    {
        for (int k = d + 1; k <= N; k++)
        {
            if (k % 2 == 0)
            {
                c[j] = a[k];
                d = k;
                break;
            }
        }
    }
    for (int r = 1; r <= N; r++)
    {
        if(b[r]!=-1)
        cout << b[r] << " ";
    }
    for (int r = 1; r <= N; r++)
    {
        if(c[r]!=-1)
        cout << c[r] << " ";
    }
    return 0;
}
