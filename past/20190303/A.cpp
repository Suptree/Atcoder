#include <iostream>
int main()
{
  unsigned int A;
  unsigned int B;
  unsigned int C;
  int count = 0;

  std::cin >> A;
  std::cin >> B;
  std::cin >> C;

  if(B / A >= 1)
  {
  for(int i = 0; i < B; i += A )
    {
      count++;
      if(count == C)break;
    }
  }
  std::cout <<count<<std::endl;
  return 0;
}
