#include <bits/stdc++.h>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    ll X;
    cin >> X;

    ll A = 0;
    ll B = 0;

    A = X/500;

    X = X - 500 * A;

    B = X/5;
    X = X - 5 * B;

    cout << A*1000 + B*5 << endl;


    return 0;
}

