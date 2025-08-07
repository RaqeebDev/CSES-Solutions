#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    long long curr_sum = a[0];
    long long max_sum = a[0];

    for (int i = 1; i < n; i++) {
        curr_sum = max(a[i], curr_sum + a[i]);
        max_sum = max(max_sum, curr_sum);
    }

    cout << max_sum << endl;
    return 0;
}
