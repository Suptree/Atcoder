#include <bits/stdc++.h>

#define repo(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() { 
    
    int N,X,Y;
    cin >> N >> X >> Y;
    X--; Y--;

    vector<int> ans(N);
    

    //N回BFSやる
    for(int sv= 0; sv < N; sv++){
        vector<int> dist(N, -1);
        queue<int> que;
        auto push = [&](int v, int d){
            if(dist[v] != -1) return;
            dist[v] = d;
            que.push(v);
        }; 
        //一番初めに見るノードを頂点として初期化する 
        push(sv,0);


        while(!que.empty()){
            int v = que.front();
            que.pop();
            int d = dist[v]; 
            if(v-1 >= 0) push(v-1,d+1);
            if(v+1 < N) push(v+1,d+1);
            if(v == X) push(Y,d+1);
            if(v == Y) push(X,d+1);
//             if(v-1 >= 0 ){
//                 if(dist[v-1] == -1){
//
//                dist[v-1] = dist[v] + 1;
//                que.push(v-1);  
//                 }
//             }else if(v+1 < N){
//                 if(dist[v+1]==-1){
//
//                 dist[v+1] = dist[v] + 1;
//                 que.push(v+1);
//                 }
//             }
//
//             if(v == X){
//                 if(dist[Y]==-1){
//                 dist[Y] = dist[v] + 1;
//                que.push(Y); 
//                 }
//             }
//
//             if(v == Y){
//                 if(dist[X] == -1){
//                 dist[X] = dist[v] + 1;
//                que.push(X); 
//                 }
//             }
        }

        for(int j = 0; j < N; j++){
            ans[dist[j]]++;
        }
    }

    for(int i = 0; i < N; i++){
        ans[i] /= 2;
    }

    for(int i = 1; i <= N-1; i++){
        cout << ans[i] << endl;
    }


    return 0; 
}
