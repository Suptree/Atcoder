#include <bits/stdc++.h>
#include <vector>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    int N,M;
    cin >> N >> M;
    vector<pair<string,int>> S(N);
    ll ac = 0; 
   repo(i,M){
        ll index = 0;
        string s;
        cin >> index >> s;
        index--;
//         cout << "firstは : "<< S[index].first << "secondは : " <<S[index].second << endl;
//         if(s == "AC") ac++; 
        if(S[index].first == ""){
            
            S[index].first = s;
            S[index].second++;
        }else if(S[index].first == "WA"){
//             S[index].first = s;
           if(S[index].first != s)
                S[index].first = s; 
           S[index].second++; 
        }
//         cout << S[index].first << S[index].second << endl;
   } 
   int sum = 0;
//    ll ac = 0;
   repo(i,N){
//        cout << i << "版目のsecondの値は" << S[i].second << endl;
       if(S[i].first == "" || S[i].first == "WA") continue;
       sum += S[i].second;
       if(S[i].first == "AC")
            ac++;
   }
//    sum = max(0,sum-ac)

//    repo(i,N){
//        cout << i << "版目のSのfirstは : " << S[i].first << "second : " << S[i].second << endl;
//    }
   cout << ac << " " <<sum-ac << endl;

    return 0;
}

