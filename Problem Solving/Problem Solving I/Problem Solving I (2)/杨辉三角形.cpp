#include <iostream>
using namespace std;
int main()
{
    long long tri[41][41], N = 0;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        tri[i][1] = 1;
        tri[i][i] = 1;
    }
    if (N >= 3)
    {
        for (int j = 3; j <= N; j++)
        {
            for (int k = 2; k <= j - 1; k++)
                tri[j][k] = tri[j - 1][k] + tri[j - 1][k - 1];
        }
    }
    for (int r = 1; r <= N; r++)
    {
        for (int t = 1; t <= r; t++)
            cout << tri[r][t] << " ";
        cout << endl;
    }
    return 0;
}
