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

int main()
{
  //setup
  int n = 0;
  //input
  std::cout << "input a integer: ";
  std::cin >> n;
  //process
  std::cout << sum(n);
  
  
  return 0;
}
