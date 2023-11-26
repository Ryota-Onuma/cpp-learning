#include <iostream>
#include "array.hpp"
#include <array>
using namespace std;

void playWithArray(){
  int normalArray[5] = {10, 20, 30, 40, 50};
  for (int i = 0; i < 5; i++) {
    cout << "配列:" << normalArray[i] << "\n";
  }

  int* p = normalArray;

  cout << "配列のポインタ: " << *p << "\n";
  cout << "配列のポインタ2: " << *(p + 1) << "\n";
  cout << "p" << p << "\n";
  cout << "配列のインデックス指定: " << normalArray[0] << "\n";

  testArrayPass(normalArray, 5);
  normalArray[4] = 100;
  testArrayPass(normalArray, 5);
  auto stdArray = testArrayPass2();
  for (int i = 0; i < stdArray.size(); i++) {
    cout << stdArray[i] << "\n";
  }
}

void testArrayPass(const int array[5], size_t size){
  for (int i = 0; i < size; i++) {
    cout << array[i] << "\n";
  }
  cout << "サイズ: " << size << "\n";
  cout << "配列[" << size << "]: " << array[size-1] << "\n";
}

array<int,5> testArrayPass2() {
  array<int, 5> stdArray = {10, 20, 30, 40, 50};
  auto size = stdArray.size();
  cout << "サイズ: " << size << "\n";
  cout <<  "stdArray[0]: " << stdArray[0] << "\n";
  stdArray[0] = 100;
  cout <<  "更新後 stdArray[0]: " << stdArray[0] << "\n";
  array<int,5> stdArray2 = stdArray;
  cout << "stdArray2[0]: " << stdArray2[0] << "\n";
  return stdArray2;
}
