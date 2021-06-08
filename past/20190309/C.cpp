#include <iostream>
#include <vector>
#include <algorithm> // sort
#include <map> // pair

using namespace std;
int main()
{
  int N;//i件目
  int M;//ほしいジュースのかず

  int a[1000];//pairの左
  int b[1000];//pairの右
  int money = 0;//使ったお金
  int num = 0;//ジュースを買った数
  vector<pair<int, int> > A;//動的配列生成


    for(int i = 0; i < N; i++)
  {
    cin >> a[i];
    cin >> b[i];
    A[i] = make_pair(a[i],b[i]);
  }

  sort( A.begin(), A.end());//a[]を小さい順にソート

  for(int i = 0; i < N; i++)
  {
    money = a[i]*b[i];//買った分だけお金を増やす
    num += b[i];//買った分だけ数を増やす
    if(num > M)//もしほしい数より買った数が大きくなったら
    {
      money -= (num - M) * a[i];//余分に買ってしまった分のお金を減らす
      break;//抜け出す
    }
  }

  cout << money << endl;


}
