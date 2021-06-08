#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  string s;
  cin >> s;
  int len= s.size(); //入力した文字列の長さN
  ll ans=0; //出力する答えを0として

  for(int t=0; t<1<<(len-1); t++){
    cout<< "=====" << t  <<"のbit" <<"===="<< endl;
    ll num=s[0]-'0'; 
    cout << "s[0]-'0'の値は" << num << endl;
    for(int i=0; i<len-1; i++){
      cout <<t <<"の" <<i <<"回目" << endl; 
      if(t&(1<<i)){
        cout << "t&(1<<i)がtrueのとき" <<endl;
        cout << "numの値は " << num <<endl;
        ans+=num;
        num=0;
        cout << "ansの値は " << ans << endl;
      }
      num=num*10+s[i+1]-'0';
      cout << i <<"回目のときのnum=num*10+s[i+1]-'0' の値は" << num << endl;
    }
    ans+=num;
    cout << "ansの値は" << ans << endl;
  }
  cout << ans << endl;
  return 0;
}
