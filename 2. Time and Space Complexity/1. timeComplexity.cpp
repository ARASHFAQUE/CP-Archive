#include<bits/stdc++.h>
using namespace std;

/*

Given T test cases and an array of Size N. Print sum of array in each test case.
Constraints:
1 <= T <= 1000
1 <= N <= 1000
1 <= a[i] <= 1000;
Sum of N over all Test cases is 10^7
*/

int main(){
    int t;
    cin >> t;
    int cnt = 0;
    while(t--){
        int n;
        cin >> n;
        int sum = 0;
        for(int i = 0; i < n; ++i){
            int x;
            cin >> x;
            sum += x;
            cnt++;
        }
        cout << sum << endl;
    }
}

/**** Sum of N over all Test case is 10^7 ****

when
t = 0 -> n_0
t = 1 -> n_1
t = 2 -> n_2
...
t = t -> n_t

=> n_0 + n_1 + n_2+ .... + n_t < 10^7

// O(cnt) = O(10^7)

*/



