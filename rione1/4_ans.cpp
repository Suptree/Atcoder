#include <bits/stdc++.h>
// #include <vector>

#define repo(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
struct UnionFind {
  vector<int> d;
  UnionFind(int n=0): d(n,-1) {}
  int find(int x) {
    if (d[x] < 0) return x;
    return d[x] = find(d[x]);
  }
  bool unite(int x, int y) {
    x = find(x); y = find(y);
    if (x == y) return false;
    if (d[x] > d[y]) swap(x,y);
    d[x] += d[y];
    d[y] = x;
    return true;
  }
  bool same(int x, int y) { return find(x) == find(y);}
  int size(int x) { return -d[find(x)];}
};


    int deg[100005];
    vector<int> to[100005];
int main(){
    
    vector<int> d(4,-1);
    int n,m,k;
    cin >> n>> m >> k;

    UnionFind uf(n);

    repo(i,m){
        int a,b;
        cin >> a >> b;
        --a;
        --b;
        deg[a]++;
        deg[b]++;
        uf.unite(a,b);
        
//         repo(j,n){
//             cout << deg[j] << " ";
//         }
//         cout << endl;
//
//
//         repo(j,n){
//             cout << uf.size(j) << " ";
//         }
//         cout << endl;
    }
    repo(i,k){
        int a,b;
        cin >> a>> b;
        --a;
        --b;
        to[a].push_back(b);
        to[b].push_back(a);

    }
    repo(i,n){
        int ans = uf.size(i) -1 -deg[i];
//         cout << i << "の答えは" << ans << endl;
        for(int u : to[i]){
            if(uf.same(i,u)){
                --ans;
//                 cout << i << "と" << u << "はおなじunateでした よってansは" << ans << endl;
            }
            
        }
                
//         cout << ans;
//         if(i < n-1) cout << " ";
//         else cout << endl;
        printf("%d%c", ans, i==n-1?'\n':' ');
    }
//     cout << endl;

    return 0;
}

