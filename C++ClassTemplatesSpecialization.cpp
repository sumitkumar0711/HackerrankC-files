#include <iostream>
using namespace std;

enum class Fruit 
{ apple, orange, pear };

enum class Color 
{ red, green, orange };

template <typename T> struct Traits;
#include <vector>

template <> struct Traits<Fruit> 
{
  static string name(int index) 
  {
    static vector<string> const names{"apple", "orange", "pear"};
    if (index < 0 || index >= names.size())
      return "unknown";
    return names[index];
  }
};

template <> struct Traits<Color> 
{
  static string name(int index) 
  {
    static vector<string> const names{"red", "green", "orange"};
    if (index < 0 || index >= names.size())
      return "unknown";
    return names[index];
  }
};

// Define specializations for the Traits class template here.

int main()
{
	int t = 0; std::cin >> t;
    	for (int i=0; i!=t; ++i) 
	{
        	int index1; std::cin >> index1;
        	int index2; std::cin >> index2;
        	cout << Traits<Color>::name(index1) << " ";
        	cout << Traits<Fruit>::name(index2) << "\n";
    	}
}
