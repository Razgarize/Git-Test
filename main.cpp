#include <iostream>

int sum(int n)
{
  int sum = 0;
  for(int i = 1; i <= n; i++)
    {
      sum += i;
    }
  return sum;
}

int product(int n)
{
  int product = 1;
  for(int i = 1; i <= n; i++)
    {
      product *= i;
    }
  return product;
}

int main()
{
  //setup
  int n = 0;
  //input
  std::cout << "input a integer: ";
  std::cin >> n;
  //process and output
  std::cout << sum(n) << std::endl;
  std::cout << product(n);
  
  return 0;
}
