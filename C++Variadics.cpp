#include <iostream>
using namespace std;
template <int N, bool... Bs> struct rbv_impl;

template <int N, bool B, bool... Bs> struct rbv_impl<N, B, Bs...> 
{
  constexpr static int val = rbv_impl<N + 1, Bs...>::val + (B ? (1 << N) : 0);
};

template <int N> struct rbv_impl<N> 
{ constexpr static int val = 0; };

template <bool... Bs> constexpr int reversed_binary_value() 
{
  return rbv_impl<0, Bs...>::val;
};

// Enter your code for reversed_binary_value<bool...>()

template <int n, bool...digits>
struct CheckValues 
{
  	static void check(int x, int y)
  	{
	    	CheckValues<n-1, 0, digits...>::check(x, y);
    		CheckValues<n-1, 1, digits...>::check(x, y);
  	}
};

template <bool...digits>
struct CheckValues<0, digits...> 
{
  	static void check(int x, int y)
  	{
	    	int z = reversed_binary_value<digits...>();
    		std::cout << (z+64*y==x);
  	}
};

int main()
{
  	int t; std::cin >> t;
  	for (int i=0; i!=t; ++i) 
	{
		int x, y;
    		cin >> x >> y;
    		CheckValues<6>::check(x, y);
    		cout << "\n";
  	}
}
