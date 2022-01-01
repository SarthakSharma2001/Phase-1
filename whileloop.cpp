#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        cout << i;
        i++;
    }
    cout << endl;
    i = 1;
    int sum = 0;
    while(i <= n){
        sum = sum + i;
        i++;
    }
    cout << sum << endl;
    int esum = 0;
    i = 2;
    while(i <= n){
        esum = esum + i;
        i = i + 2;
    }
    cout << esum << endl;
    int osum = 0;
    i = 1;
    while(i <= n){
        osum = osum + i;
        i = i + 2;
    }
    cout << osum;
}