#include <iostream>
using namespace std;

int main()
{
  int N;//行の数
  int M;//for文で回す
  int C;//最後に足す
  cin >> N >> M >> C;
  int B[20];
  int A[20][20];
  int count = 0;
  int ans = 0;

  //Bの値を決める
  for(int j = 0; j < M; j++)
  {
    cin >> B[j];
  }
  //Aの値を決める
  for(int i = 0; i < N; i++)
  {
    for(int j = 0; j < M; j++)
    {
      cin >> A[i][j];
    }
  }

  //正答するコード家計三
  for(int i = 0; i < N; i++)
  {
    for(int j = 0; j < M; j++)
    {
      ans += B[j]*A[i][j];
    }
    if(ans + C > 0) count++;
  
    ans = 0;//初期化
  }


  cout << count << endl;


}
