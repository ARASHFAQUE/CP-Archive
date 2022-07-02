#include<bits/stdc++.h>
using namespace std;

// Arrays always pass by References

void func(int a[]){
    a[0] = 5;
}

void func2(int a[][20]){

}



int main(){
    int a[10];
    a[0] = 7;
    cout << a[0] << endl;
    func(a);
    cout << a[0] << endl;

    int b [10][20];
    b[0][0] = 7;
    cout << b[0][0] << endl;

    func2(b);
    cout << b[0][0] << endl;
}
