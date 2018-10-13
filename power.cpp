#include <iostream>


int power(int a, int n)
{
  if(n == 1) {
    return a;
  } else {
    return a * power(a, n - 1);
  }
}

int main() 
{
  int a, n;
  std::cin >> a >> n;
  std::cout << power(a, n);
  return 0;
}
