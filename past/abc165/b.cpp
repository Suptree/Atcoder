#include <bits/stdc++.h>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    ll X;
    cin >>X;
    ll i = 0;
    ll money = 100; 
    while(money < X){
       money = money + money*0.01;
       
       i++; 
    }
    cout << i << endl;

    return 0;
}

