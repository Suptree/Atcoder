#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    int A,B,M;

    cin >> A >> B >> M;
    vector<int> a(A);//vector配列をA分だけ確保
    vector<int> b(B);
    
    repo(i,A) cin >> a[i];
    repo(i,B) cin >> b[i];

    int minA = *min_element(a.begin(),a.end());
    int minB = *min_element(b.begin(),b.end());
    
    int ans = minA + minB;
    repo(i,M){
        int x, y, c;
        cin >> x >> y >> c;

        ans = min(ans, a[x-1]+ b[y-1] - c);
    }

    cout << ans << endl;

    return 0;
}

