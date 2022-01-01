#include<iostream>
using namespace std;

int main(){
    int a = 123;
    cout << a << endl;

    char c = 'v';
    cout << c << endl;

    float f = 1.2;
    cout << f << endl;

    bool b = true;
    cout << b << endl; 

    double d = 1.23;
    cout << d << endl;

    cout << "size of int is = " << sizeof(a) << endl;
    cout << "size of char is = " << sizeof(c) << endl;
    cout << "size of bool is = " << sizeof(b) << endl;
    cout << "size of double is = " << sizeof(d) << endl;
    cout << "size of float is = " << sizeof(f) << endl;
}