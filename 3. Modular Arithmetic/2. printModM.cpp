#include<bits/stdc++.h>
using namespace std;

/*

Given a number N. Print its Factorial
Constraints
1 <= N <= 100

Print answer module M
where M = 10^9 + 7 [Prime Number]

*/


int main(){
    int n;
    cin >> n;
    long long fact = 1;
    long int M = 1e9 + 7;
    for(int i = 2; i <=n; ++i){
        fact = (fact * i) % M;
        cout << fact << endl;
        //fact = ((fact % M) * (i % M)) % M;
    }

    cout << fact << endl;
}
// 698611116
