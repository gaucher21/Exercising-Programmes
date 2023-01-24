#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s = "+-*";
    string s1 = "@";
    int a = 0, b = 0, c = 0;
    cin >> a  >> s1  >> b;
    if (s1[0] == s[0])
        c = a + b;
    if (s1[0] == s[1])
        c = a - b;
    if (s1[0] == s[2])
        c = a * b;
    cout << c;
    return 0;
}
