#include<iostream>
using namespace std;

int main(){
    //* square
    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    //number square(i)
    int i1 = 1;
    while(i1 <= n){
        int j1 = 1;
        while(j1 <= n){
            cout << i1;
            j1++;
        }
        cout << endl;
        i1++;
    }
}