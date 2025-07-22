#include <bits/stdc++.h>
using namespace std;

const long long modulo = 1e9+7;

int rec(int a , int  b ){
    if(b == 0 ) return 1;
    long r = rec(a,b/2)%modulo;
    if (b%2 == 0){
        return (r*r)% modulo ;
    }
    else {
        return( a *( r*r) ) % modulo;
    }
}

int main()
{
    long long n ; cin >>  n ; 
    long long k = rec(2,n);
    cout << k%modulo ;
   
    
}

// Github : https://github.com/RaqeebDev
// Problem Link : https://cses.fi/problemset/task/1617/
/* Tips and Learnings (not organised)
>>Its just "2 power n "
>>modulo "10 power 9 + 7 "
>>2^n % 10^(9+7)

*/
