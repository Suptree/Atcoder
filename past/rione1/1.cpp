#include <bits/stdc++.h>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    
    int A,B;
    cin >> A >> B;

    for(int i = 0; i < 1009; i++){
        int a = i * 0.08;
        int b = i * 0.1;

        if( A == a && b == B ){
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}

