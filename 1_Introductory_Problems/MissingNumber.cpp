#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long expected_sum = n * (n + 1) / 2;

    long long actual_sum = 0;
    for (int i = 0; i < n - 1; i++) {
        long long num;
        cin >> num;
        actual_sum += num;
    }

    cout << expected_sum - actual_sum << "\n";
    return 0;
}

// Github : https://github.com/RaqeebDev
// Problem Link : https://cses.fi/problemset/task/1083/

/* Tips and Learnings (not organised)

>> For missing number problems, use the sum of 1 to N formula: N*(N+1)/2.
>> Avoid vector unless you really need dynamic storage; a simple loop is fine here.
*/
