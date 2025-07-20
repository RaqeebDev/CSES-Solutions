#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long count = 0;
    long long prev;
    cin >> prev;
    for (int i = 1; i < n; i++)
    {
        long long curr;
        cin >> curr;
        if (curr < prev)
        {
            count += (prev - curr);
        }
        else
        {
            prev = curr;
        }
    }
    cout << count;
}

// Github : https://github.com/RaqeebDev
// Problem Link : https://cses.fi/problemset/task/1094
