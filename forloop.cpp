#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        cout << i << endl;
    }
    int i = 1;
    for( ; ; ){
        if(i <= n)    
            cout << i << endl;
        else 
            break;
        i++;
    }
    for(int a = 0, b = 1; a >= 0 && b >= 1; a-- , b--){
        cout << a << " " << b << endl;
    }
    //sum 1 to m
    int m;
    cin >> m;
    int sum = 0;
    for(int j = 1 ; j <= m ; j++){
        sum = sum + j;
    }
    cout << sum;
}