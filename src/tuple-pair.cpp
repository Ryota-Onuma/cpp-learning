#include <iostream>
#include <tuple>
#include <string>
#include <utility>
#include "tuple-pair.hpp"
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
  cout << "Tuple ID: " << id << endl;
  cout << "Tuple Name: " << name << endl;
  cout << "Tuple Country: " << country << endl;
}

void playWithPair() {
  pair<int, string> user = make_pair(1, "Bob");
  cout << user.first << endl;
  cout << user.second << endl;
  
  int id;
  string name;
  tie(id, name) = user;
  cout << "Pair ID: " << id << endl;
  cout << "Pair Name: " << name << endl;
}
