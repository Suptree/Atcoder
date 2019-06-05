#include <iostream>
#include <string>
#include <tuple>
int main()
{
  int n = 0;
  std::string s;
  int p = 0;
  std::vector< std::tuple< std::string, int , int > > v;

  std::cin >> n;

  for(int i = 1; i <= n; i++)
  {
    std::cin >> s >> p;
    p = -p; // <-重要！！
    a.emplace_back( std::tie(S,P,i) );
  }

  std::sort( a.begin(), a.end() );

  for(int i = 0; i < N-1; i++)
  {
    std::string s;
    int p;
    int id;
    tie( s, p, id ) = a[i];
    std::cout << id << std::endl;
  }

  return 0;
}
