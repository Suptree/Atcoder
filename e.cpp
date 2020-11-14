#include <algorithm>
#include <bits/stdc++.h>
#include <deque>
#include <queue>
#include <utility>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
typedef pair<ll, int> P;

bool pairCompare(const P& firstElof, const P& secondElof)
{
    
    if(firstElof.first != secondElof.first)
    return firstElof.first > secondElof.first;
    else
    return firstElof.second > secondElof.second;
}
int main(){
    int N;
    cin >> N;
    vector<int> q(N);
    vector<pair<ll,int>> p(N);
    for(int i = 0; i < N; i++){
        q[i] = i+1;
//         ll kasei;
//         cin >> kasei;

//         p[i] = make_pair(kasei,i);
    }
//     for(int i = 0; i < N; i++){ ll kasei;
//         cin  >> kasei;
//         int max_sa = -500;
//         int max_index = -1;
//         for(int j = 0; j < N; j++){
//             int sa = abs(j+1 - i+1); 
//             if(max_sa < sa){
//                 max_sa = sa;
//                 max_index = j+1;
//             }
//         }
//     }
//     for(int i = 0; i < N; i++){
//         ll kasei;
//         cin >> kasei;
//         p[i] = make_pair(kasei,i+1);
//     } 
    sort(p.begin(),p.end(),pairCompare);
//     sort(p.begin(), p.end(), greater<int>()); // 降順（大きい順）でソート
//     cout << "そーと結果" << endl;
//     repo(i,N){
//         cout << p[i].first << " " << p[i].second << endl;
//     }

    ll sum = 0;
    for(int i =0; i < N; i++){
        int max_sa = -5000;
        int max_index = 0;
        for(int j = 0; j < q.size(); j++){
//            cout<< "x - y = " << q[j] << " - " << p[i].second << endl; 
           int sa = abs(q[j] - p[i].second);
          if(max_sa < sa){
              max_sa = sa;
              max_index = j;
          } 
        }
//         cout << "max_saは" << max_sa << endl;
        q.erase(q.begin()+max_index);

        sum += p[i].first * max_sa;
    }

    cout << sum << endl;

    return 0;
}

