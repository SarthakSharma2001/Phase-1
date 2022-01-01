#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int p = 0;
    int i = 2;
    while(i < n){
        if (n % i == 0){
            p = 1;
        }
        i++;
    }
    if(p == 1){
        cout << "not prime" << endl;
    }
    else{
        cout << "prime";
    }
}