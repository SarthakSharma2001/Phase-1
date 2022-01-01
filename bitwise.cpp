#include<iostream>
using namespace std;

int main(){
    int a = 4;
    int b = 6;

    cout << "a & b =" << (a & b) << endl;
    cout << "a | b =" << (a | b) << endl;
    cout << "a ^ b =" << (a ^ b) << endl;
    cout << "~a =" << (~a) << endl;

    cout << (17 >> 1) << endl;
    cout << (17 >> 2) <<endl;
    cout << (12 << 1) << endl;

    int x,y = 1;
    x = 10;
    if(--x){
        cout << y;
    }
    else
        cout << ++y;
}