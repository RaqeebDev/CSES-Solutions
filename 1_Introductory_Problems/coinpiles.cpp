#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long t;
    cin >> t;
    while (t--)
    {
        long long c1, c2;
        cin >> c1 >> c2;
        cout << (((c1 + c2) % 3 == 0 && 2 * c1 >= c2 && 2 * c2 >= c1) ? "YES" : "NO") << endl;
    }
}

// Github : https://github.com/RaqeebDev
// Problem Link :https://cses.fi/problemset/task/1754

/* Tips and Learnings (not organised)


*/
