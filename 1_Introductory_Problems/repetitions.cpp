#include <bits/stdc++.h>
using namespace std;

int main() {
    string s ; cin >> s ; 
    char me = 'A' ;
    int c = 0 ; int  answer = 1 ; 
    for (char k : s) {
        if (me == k)
        {++c ;
            answer = max(c,answer) ;
        }
        else{
            me = k ; 
            c = 1 ;
        
        }



    }  
    cout <<answer;




}

// Github : https://github.com/RaqeebDev
// Problem Link : https://cses.fi/problemset/task/1069

/* Tips and Learnings (not organised)
>>Intialised Count as C 
>>answer will be max of answer and count
>>print answer 


*/
