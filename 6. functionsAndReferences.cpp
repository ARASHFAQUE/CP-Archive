#include<bits/stdc++.h>
using namespace std;

// References

void incrementByValue(int n){ // n by value
    n++;
}

void incrementByReference(int &n){ // n by reference
    n++;
}

void swapNumbers(int &a, int &b){ // Pass by Reference
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 3;
    cout << a << endl;

    cout << "Pass by Values: ";
    incrementByValue(a);
    cout << a << endl;

    cout << "Pass by Reference: ";
    incrementByReference(a);
    cout << a << endl << endl << endl;

    int b = 5, c = 6;
    cout << "Before swap: ";
    cout << b << " " << c << endl;
    swapNumbers(b, c);
    cout << "After swap: ";
    cout << b << " " << c << endl;
}
