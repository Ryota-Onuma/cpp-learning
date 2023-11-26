#include <iostream>
#include <tuple>
#include <string>
#include "tuple.hpp"
using namespace std;

void playWithTuple() {
  tuple<string, int, bool> person { "Bob", 20, true };
  cout << get<0>(person) << endl;
  cout << get<1>(person) << endl;
  cout << get<2>(person) << endl;

  tuple<int, string, string> user = make_tuple(1, "Bob", "USA");
  cout << get<0>(user) << endl;
  cout << get<1>(user) << endl;
  cout << get<2>(user) << endl;

  int id;
  string name, country;
  tie(id, name, country) = user;
  cout << id << endl;
  cout << name << endl;
  cout << country << endl;
}
