#include<bits/stdc++.h>
using namespace std;

int main(){
    // String Reverse
    string str; cin >> str;
    string str_rev;
    for(int i = str.size() - 1; i >= 0; i--){
        str_rev.push_back(str[i]);
    }
    cout << str_rev;

    // Check Palindrome
    /*
    bool isPalindrome = true;
    for(int i = 0, j = str.size() - 1; i <= j; i++, j--){
        if(str[i] != str[j]){
            isPalindrome = false;
        }
    }
    if(isPalindrome){
        cout << "YES";
    }else{
        cout << "NO";
    }
    */
}
