#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int total = 0;
    while(n != 0){
        total += (n % 10);
        n /= 10;
    }
    cout << total << endl;
}
