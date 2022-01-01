#include<iostream>
using namespace std;

int main(){
    int f;
    int c;
    int n;
    cout << "from f2c (1) or c2f(2)" << endl;
    cin >> n;
    if(n == 1){
        cout << "enter f" << endl;
        cin >> f;
        c = (f - 32)*(5/9);
        cout << c;
    }
    else if(n == 2){
        cout << "enter c" << endl;
        cin >> c;
        f = (c * 9/5) + 32;
        cout << f;
    }
}