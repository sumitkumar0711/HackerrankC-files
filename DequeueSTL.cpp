#include <iostream>
#include <deque> 
using namespace std;

void printmax(int *a, int b, int c) 
{
  std::deque<int> dq;
  int y;
  for (y = 0; y < c; y++) 
  {
    while ((!dq.empty()) && a[y] >= a[dq.back()])
      dq.pop_back();
    dq.push_back(y);
  }
  for (; y < b; y++) 
  {
    std::cout << a[dq.front()] << " ";
    while ((!dq.empty()) && dq.front() <= y - c)
      dq.pop_front();
    while ((!dq.empty()) && a[y] >= a[dq.back()])
      dq.pop_back();
    dq.push_back(y);
  }
  std::cout << a[dq.front()];
}

int main() 
{
  std::ios_base::sync_with_stdio(false);
  int i, j, k, n;
  std::cin >> i;
  while (i--) 
  {
    std::cin >> j >> k;
    int m[j] = {};
    for (int &l : m) 
    {
      std::cin >> n;
      l = n;
    };
    printmax(m, j, k);
    std::cout << "\n";
  }
  return 0;
}
