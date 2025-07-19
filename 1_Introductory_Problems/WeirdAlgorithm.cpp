#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n;
    cin >> n;
    cout << n <<" " ;
    while(n != 1 ) {
        if (n%2 == 0) {
n /=2;
        }
        else {
            n = n*3 +1 ;
        }
cout << n <<" " ;
    }

}

// Github : https://github.com/RaqeebDev
// Problem Link :https://cses.fi/problemset/task/1068/

/* Tips and Learnings (not organised)

>>Use long long to avoid overflow

*/
