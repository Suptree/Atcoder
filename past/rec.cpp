#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    // N行M列の情報を格納するための変数
    int N,M;
    cin >> N >> M;

    //通過した床の数をカウントする変数
    int yuka = 0; 

    //部屋の地図を表す2次元配列
    //格納する値は(S, E, N, W)の4つ
    vector<string> m;

    //通った床に印をつけるための変数
    vector<vector<int>> al(N, vector<int>(M));

    //標準入力を受け付けて部屋の地図を生成する
    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        m.push_back(s);
    }
    
    //現在の位置を表す変数 
    int nowi=0,nowj=0;

    //次に移動する位置を表す変数
    int nexti=0,nextj=0;

    //スタート地点の床の位置に通ったとわかるように印をつける。
    al[nowi][nowj] = 1;

    //スタート地点の時点で床の上にいるので、通った床の値を1つ増やす
    yuka++;

    //同じ床を通るか部屋の場外にでたら終了するwhile文
    while(true){

       //現在位置の床の文字を格納する値
       char now_tile = m[nowi][nowj]; 
       if(now_tile=='S'){
           //南へ移動するので、次に移動する位置を格納する変数に次の位置を格納する。
           nexti = nowi + 1;
           nextj = nowj;
       }else if(now_tile=='E'){
           //東へ移動するので、次に移動する位置を格納する変数に次の位置を格納する。
           nexti = nowi;
           nextj = nowj+1;
       }else if(now_tile=='N'){
           //北へ移動するので、次に移動する位置を格納する変数に次の位置を格納する。
           nexti = nowi-1;
           nextj = nowj;
       }else if(now_tile=='W'){
           //西へ移動するので、次に移動する位置を格納する変数に次の位置を格納する。
           nexti = nowi;
           nextj = nowj-1;
       }else{
           //予期されない文字のときは強制終了
           return 0;
       }

       //部屋の外にでるときは終了する。（配列外参照を防ぐ）
       if(nexti < 0 || nexti >=N){
           cout << yuka << endl;
           return 0;
       }
       if(nextj < 0 || nextj >=M){
           cout << yuka << endl;
           return 0;
       }
        
       //次に移動する位置がすでに通った道のときは強制終了 
       if(al[nexti][nextj]!=0){
           cout << yuka << endl;
           return 0;
       }
       //次に通る道をすでに通った道として印をつける
       al[nexti][nextj] = 1; 
       //床を通った道を増やす
       yuka++;
       //次の位置を現在の位置に格納する
       nowi = nexti;
       nowj = nextj;
    }

    return 0;
}

