#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int p = 0;
    for (int i = 2 ; i < n ; i++){
        if(n % i == 0){
            cout << "Not prime";
            p = 1;
            break;
        }
    }
    if(p == 0){
        cout << "Prime";
    }

}