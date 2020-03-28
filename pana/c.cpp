#include <bits/stdc++.h>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    ll a, b ,c;
    cin >> a >> b >> c;
    double A = sqrt(a);
    double B = sqrt(b);
    double C = sqrt(c);
    if(A + B < C){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}

