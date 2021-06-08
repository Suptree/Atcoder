#include <bits/stdc++.h>
#include <deque>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main(){
    
    string S;
    cin >> S;

    int Q;
    cin >> Q;
//     cout << "Q : " << Q <<  endl;
    bool isreverse = false;

    deque<char> s;

    for(auto c : S) s.emplace_back(c);
    int t;
    int f;
    char c;
    for(int i = 0; i < Q; i++){
//         cout << i << "版目" << endl; 
        cin >> t;

        if(t == 1){
           isreverse = !isreverse;
        }else{
            cin >> f >> c;

            if(f == 1){
                if(isreverse){
                    s.emplace_back(c);
                }else{
                    s.emplace_front(c);
                }
            }else{
                if(isreverse){
                    s.emplace_front(c);
                }else{
                    s.emplace_back(c);
                }
            }
        }
    }

    if(isreverse){
      reverse(s.begin(), s.end());
    }
    string ans;
   for(auto ss : s) ans+=ss; 
    
   cout << ans << endl; 
    return 0;
}

