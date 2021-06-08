#include <iostream>

int main()
{
  int ARRAY_SIZE = 100;
  int A;
  int B;
  int K;
  int a[ARRAY_SIZE];
  int b[ARRAY_SIZE];
  int k[ARRAY_SIZE];

  std::cin >> A;
  std::cin >> B;
  std::cin >> K;
  int acount = 0;
  int bcount = 0;
  int kcount = 0;

  for(int i = A; i > 0; --i)
  {
    if(A % i == 0)
    {
      a[acount] = i;
      acount++;
    }
  }

  for(int i = B; i > 0; --i)
  {
    if(B % i == 0)
    {
      b[bcount] = i;
      bcount++;
    }
  }

  for(int i = 0; i < acount; i++)
  {
    for(int j = 0; j < bcount; j++)
    {
      if(a[i] == b[j])
      {
        k[kcount] = a[i];
        kcount++;
        if(kcount == K - 1)break;
      }
    }
  }

  std::cout<< k[K - 1] << std::endl;



  return 0;
}
