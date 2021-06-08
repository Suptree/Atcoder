#include <iostream>
#include <vector>
#include <string>
int main()
{
  int N = 0;
  std::cin >> N;

  std::vector<std::string> S;
  std::string s;
  std::vector<int> P;
  int p = 0;
  for(int i = 0; i < N; i++)
  {
    std::cin >> s;
    S.emplace_back(s);
    std::cin >> p;
    P.emplace_back(p);
  }
  for(int i = 0; i < N; i++)
  {
    printf("_______________________\n" );
    std::cout << "S[" << i << "] の値は" << S[i]<< std::endl;
    std::cout << "P[" << i << "] の値は" << P[i]<< std::endl;
  }
  return 0;
}
