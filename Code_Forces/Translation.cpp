#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int n = 0;
    int len = min(s.length(), t.length()); // Correct length to compare both strings

    for (int i = 0; i < len; i++)
    {
        if (s[i] != t[t.length() - (i + 1)])
        {
            n++;
            break;
        }
    }

    if (n == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
