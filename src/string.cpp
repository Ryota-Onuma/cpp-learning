#include <iostream>
#include <string>
#include "string.hpp"
using namespace std;

void playWithString(){
  testASCIIString();
  testUnicodeString();
}

void testASCIIString(){
  string s1 = "Hello World";
  cout << s1 << endl;
  cout << s1.size() << endl;
  cout << s1[3] << endl;
  cout << s1[7] << endl;
}

void testUnicodeString(){
  string s1 = "あいうえお";
  cout << s1 << endl;
  cout << s1.size() << endl;
  cout << s1[2] << endl;
  cout << s1[4] << endl;
}
