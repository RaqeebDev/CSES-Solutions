#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long sum = n * (n + 1) / 2;

    if (sum % 2 != 0) {
        cout << "NO" << endl;
        return 0;
    }

    vector<int> set1, set2;
    long long target = sum / 2;

    // Greedy approach
    for (int i = n; i >= 1; i--) {
        if (target >= i) {
            set1.push_back(i);
            target -= i;
        } else {
            set2.push_back(i);
        }
    }

    cout << "YES" << endl;
    cout << set1.size() << endl;
    for (int num : set1) {
        cout << num << " ";
    }
    cout << endl;

    cout << set2.size() << endl;
    for (int num : set2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
