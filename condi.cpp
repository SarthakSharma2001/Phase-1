#include<iostream>
using namespace std;

int main(){
    int a , b ;
    cin >> a >> b;
    cout << "value of a and b = " << a << " " << b << endl;

    /*int c;
    c = cin.get();
    cout << "value of c = " << c << endl;*/

    if(a > b){
        cout << "A big";
    }
    else if(b > a){
        cout << "B big";
    }
    else {
        cout << "both big";
    }
    cout << endl;
    int c;
    cin >> c;

    if(c > 0){
        cout << "+ve";
    }
    else if(c < 0){
        cout << "-ve";
    }
    else {
        cout << "zero";
    }
}