//Subtract the Product and Sum of Digits of an Integer
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    int pro = 1;
    while(n != 0){
        int digit = n % 10;
        pro = pro * digit;
        sum = sum + digit;
        n = n / 10;
    }
    int ans = pro - sum;
    cout << ans;
}