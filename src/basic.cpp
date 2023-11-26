#include <iostream>
#include <stdio.h>
#include "array.hpp"
using namespace std;

enum Day {
  Sun,  // 0
  Mon,  // 1
  Tue,  // 2
  Wed,  // 3
  Thu,  // 4
  Fri,  // 5
  Sat   // 6
};


enum class Day2 {
  Sun,  // 0
  Mon,  // 1
  Tue,  // 2
  Wed,  // 3
  Thu,  // 4
  Fri,  // 5
  Sat   // 6
};

int repeat(int times, int target);


void testVariables() {
    bool b = true;
    cout << b << "\n";

    char a = 'a';
    cout << a << "\n";
    short s = 123;
    cout << s << "\n";
    int i = 1234567891;
    cout << i << "\n";
    long l = 1234567890123456789;
    cout << l << "\n";
    float f = 123.456;
    cout << f << "\n";
    double d = 123.456789;
    cout << d << "\n";

    Day day = Mon;
    cout << day << "\n";

    Day2 day2 = Day2::Mon;
    cout << static_cast<int>(Day2::Mon) << "\n";
    
    cout << "こんにちは\n";
    cout << "123\n";
    cout << 456 << "\n";
    cout << "こんにちは" << 123 << 456 << "\n";

    cout << 11 + 5 << "\n";
    cout << 11 - 5 << "\n";
    cout << 11 * 5 << "\n";
    cout << 11 / 5 << "\n";

    printf("整数%d\n", 123);
    printf("小数%f\n", 123.456);

    cout << "整数" << 123 << "\n";
    cout << "小数" << 123.456 << "\n";

    constexpr int constA = 123;
    cout << constA << "\n";
}

int sum(int a, int b) {
    cout << "足し算開始　1つ目の値: ";
    int input1, input2;
    cin >> input1;
    cout << "足し算続き　2つ目の値: ";
    cin >> input2;
    int sum = input1 + input2;
    cout << "和は: " << sum << "\n";
    if (sum > 10){
      auto result = repeat(5,sum);
      cout << "繰り返しの和は: " << result << "\n";
    }   
    return sum;
}

int repeat(int times, int target) {
  int result = 0;
  for (int i = 0; i < times; i++) {
    cout << i+1 << "回目" << "\n";
    result += target;
  }
  return result;
}

