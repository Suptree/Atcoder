#include <iostream>
#include <vector>
#include <queue>
#include <utility>

int main()
{
  int N = 0;//カードの枚数
  int M = 0;//操作の回数
  int A = 0;
  int B = 0;
  int C = 0;
  long long int ans = 0;
  std::cin >> N >> M;//値を入力

  std::priority_queue< std::pair<int, int> > q;//値の高いもの順

  for(int i = 0; i < N; i++)
  {
    std::cin >> A;
    q.push( std::make_pair(A, 1) );

  }

  for(int i = 0; i < M; i++)
  {
    std::cin >> B >> C;
    q.push( std::make_pair(C, B) );

  }

  for(int i = 0; i < N; i++)
  {
    auto p = q.top();
    std::cout << "p.first = " << p.first<< std::endl;
    q.pop();
    ans += p.first;
    if(p.second > 1)
    {
      p.second--;
      q.push(p);
    }
  }

  std::cout << ans << std::endl;





  return 0;
}
