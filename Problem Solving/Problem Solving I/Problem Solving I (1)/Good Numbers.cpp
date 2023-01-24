#include<iostream>
using namespace std;
int main()
{
    int k = 0;
    cin >> k;
    if (k < 48)
    {
        cout << "None";
    }
    else
    {
        for (int i = 1; i <= k; i++)
        {
            if (i % 48 == 0)
            {
                cout << i << " ";
            }
        }
    }
    return 0;
}
