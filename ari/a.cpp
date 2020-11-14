#include <bits/stdc++.h>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){

    int N;
    cin >> N;

    vector<pair<int,int>> p(N);

    for(int i = 0; i < N; i++){
        cin >> p[i].first >> p[i].second;
    } 
    double ans = -10000;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i==j) continue;
//             cout << "(x1,y1) = (" << p[i].first << "," << p[i].second << ")" << endl;  
//             cout << "(x2,y2) = (" << p[j].first << "," << p[j].second << ")" << endl;  
            ans = fmax(ans,sqrt(pow(p[i].first-p[j].first,2)+pow(p[i].second-p[j].second,2)));
//             cout << sqrt(pow(p[i].first-p[j].first,2)-pow(p[i].second-p[j].second,2)) << endl;
        }
    }

    cout << ans << endl;

    return 0;
}

