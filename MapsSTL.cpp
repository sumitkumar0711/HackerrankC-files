#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main() 
{
  int q;
  cin >> q;
  string name;
  map<string, int> notes;
  for (int i(0), type(0), note(0); i < q; ++i) 
  {
    cin >> type >> name;
    switch (type) 
    {
    case 1: 
        {
          cin >> note;
          notes[name] += note;
          break;
        }
    case 2:
      notes[name] = 0;
      break;
    case 3:
      cout << notes[name] << endl;
      break;
    }
  }
  return 0;
}
