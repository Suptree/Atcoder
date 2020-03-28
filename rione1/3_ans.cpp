#include <algorithm>
#include <bits/stdc++.h>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    int N,M;
    cin >> N >> M;

    vector<pair<int,int>> sc(M);

    repo(i,M) {
        cin >> sc[i].first >> sc[i].second;
    }
    
    repo(x,1000){
        int nx = x/10;
        vector<int> d(1,x%10);

        while(nx){
            d.push_back(nx%10);
            nx = nx/10;
        }
        if(d.size()!= N) continue;     
        reverse(d.begin(),d.end());
        bool ok = true;
        repo(i,M) {
            if(d[sc[i].first -1] != sc[i].second){
                ok = false;
            }
        }
        if(ok){
            cout << x << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}

