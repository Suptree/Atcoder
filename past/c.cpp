#include <bits/stdc++.h>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    
    ll N;
    cin >> N;
std::map<int, int> m;
    for(int i = 0; i < N-1;i++){
       int a;
        cin >>a;
        m[a]++;
    }
    for(int i = 1; i <= N; i++)
{
    cout << m[i] << endl;
}    return 0;
}

