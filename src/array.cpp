#include <iostream>
#include "array.hpp"
using namespace std;

void playWithArray(){
  int array[5] = {10, 20, 30, 40, 50};
  for (int i = 0; i < 5; i++) {
    cout << "配列:" << array[i] << "\n";
  }

  int* p = array;

  cout << "配列のポインタ: " << *p << "\n";
  cout << "配列のポインタ2: " << *(p + 1) << "\n";
  cout << "p" << p << "\n";
  cout << "配列のインデックス指定: " << array[0] << "\n";

  testArrayPass(array, 5);
  array[4] = 100;
  testArrayPass(array, 5);
}

void testArrayPass(const int array[5], size_t size){
  for (int i = 0; i < size; i++) {
    cout << array[i] << "\n";
  }
  cout << "サイズ: " << size << "\n";
  cout << "配列[" << size << "]: " << array[size-1] << "\n";
}
