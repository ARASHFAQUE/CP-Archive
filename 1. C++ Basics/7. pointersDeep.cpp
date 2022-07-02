#include<bits/stdc++.h>
using namespace std;

int main(){
    // Single Pointer
    int x = 4;
    int *p_x = &x; // Stores the address of variable x

    cout << "Address of x: " << &x << endl;
    cout << "Value of p_x: " << p_x << endl;

    cout << "Value of *p_x: " << *p_x << endl;
    *p_x = 5;
    cout << "Value of x: " << x << endl;

    cout << "p_x + 1: " << p_x + 1 << endl; // Adds 4 and moves to next block
}

// Single pointer *p it stores the address of a integer variable
// Double pointer **p it stores the address of a integer pointer
