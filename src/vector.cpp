#include <iostream>
#include <vector>
#include "vector.hpp"
using namespace std;

void playWithVector(){
  std::vector<int> x = {0, 1, 2, 3, 4};
  cout << "x.size() = " << x.size() << endl;
  cout << "x.capacity() = " << x.capacity() << endl;
  cout << "x[0] = " << x[0] << endl;
  cout << "x[1] = " << x[1] << endl;
  x.emplace_back(5);
  x.emplace_back(6);
  cout << "2つpush後 x.size() = " << x.size() << endl;
  cout << "x[6] = " << x[6] << endl;
  x.pop_back();
  cout << "1つpop後  x.size() = " << x.size() << endl;
}
