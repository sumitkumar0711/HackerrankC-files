#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int p, int q, int r, int s)
{
    if((p > q) && (p > r) && (p > s))
    {
        return p;
    }
    if ((q > p) && (q > r) && (q > s)) {
        
      return q;
    }
    if ((r > q) && (r > p) && (r > s)) 
    {
      return r;
    }
    else
    {
        return s;
    }
}

int main() 
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}
