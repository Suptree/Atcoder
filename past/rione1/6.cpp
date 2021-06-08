#include <algorithm>
#include <bits/stdc++.h>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){

    map<string,int> S;

    int N;
    cin >> N;

    repo(i,N){
        string s;
        cin >> s;
        S[s] += 1;
    }
    
    int max = 0;

    for(auto & memo : S){
        if(memo.second > max)
            max = memo.second;
    } 

    for(auto & memo : S){
        if(memo.second == max){
            cout << memo.first << endl;
        }
    }
//    ll N;
//     cin >> N;
//
//     string s;
//     vector<string> S;
//     vector<int> num;
//     repo(i,N){
//        cin >> s;
//        S.push_back(s);
//        int count = 0;
//        repo(j,S.size()){
//
//            if(s == S[j]){
//                count++;
//
//        } 
//     }
//     ll max_length = 0;
//
//     for(ll i = 0; i < N; i++){
//         cin >> S[i];   
//         max_length = max( (ll)S[i].length() ,max_length);    
//     }
//
//     sort(S.begin(), S.end());
//     S.erase(unique(S.begin(),S.end()),S.end());
//     repo(i,S.size()){
//         if(S[i].size() == max_length)
//         cout << S[i] << endl;
//     }
//     return 0;
}

