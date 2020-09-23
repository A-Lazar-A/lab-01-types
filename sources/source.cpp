// Copyright 2018 Your Name <your_email>

#include <header.hpp>
// Copyright 2018 Your Name <your_email>

#include <math.h>

#include <header.hpp>
#include <iostream>
#define _USE_MATH_DEFINES
using std::string;

char three_numbers() {
  std::cout << "1 "
            << "13 "
            << "49";
  return 0;
}

char three_num_sym(char sep) {
  std::cout << "1" << sep << " "
            << "13" << sep << " "
            << "49";
  return 0;
}

char three_num_rand() {
  std::cout << "1 "
            << "13 "
            << "49";
  return 0;
}

int funk(int a, int x) {
  using namespace std;
  std::cout << 12 * pow(a, 2) + 7 * a - 12;
  std::cout << endl;
  std::cout << 3 * pow(x, 3) + 4 * pow(x, 2) - 11 * x + 1;
  return 0;
}

int density(int v, int m) {
  std::cout << v * m;
  return 0;
}

double equation(double a, double b) {
  std::cout << (-b) / a;
  return 0;
}

double vect(double x1, double x2, double y1, double y2) {
  std::cout << sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2));
  return 0;
}

double sqRing(double r1, double r2) {
  std::cout << M_PI * (pow(r1, 2)) - M_PI * pow(r2, 2);
  return 0;
}

double trapPerimeter(double a, double b, double h) {
  std::cout << 2 * sqrt(pow(h, 2) + pow(abs(a - b) / 2, 2)) + a + b;
  return 0;
}

int sqrVcube(int a) {
  using namespace std;
  std::cout << pow(a, 3);
  std::cout << endl;
  std::cout << 6 * pow(a, 2);
  return 0;
}

int periSqr(int a) {
  std::cout << 4 * a;
  return 0;
}

int deam(int r) {
  std::cout << r * 2;
  return 0;
}

char hello(string name) {
  std::cout << "Hello, " + name + "! My name is C++";
  return 0;
}

bool poli(string word) {
  int len = word.length();

  for (int i = 0; i < len / 2; ++i) {
    if (word[i] != word[len - i - 1]) {
      return false;
    }
  }
  return true;
}

char fullPoli(string word) {
  using std::string;
  if (poli(word) == true) {
    std::cout << "This is polindrom!";

  } else {
    std::cout << "Sorry, this is not polindrom!";
  }
}
char space(int n) {
  using namespace std;
  cout << endl;
  cout << n << endl;
}

using namespace std;

int main() {
  space(1);
  three_numbers();
  space(2);
  char sep;
  std::cin >> sep;
  three_num_sym(sep);
  space(3);
  three_num_rand();
  space(4);
  int a1, x1;
  cin >> a1 >> x1;
  funk(a1, x1);
  space(1);
  int v, m;
  cin >> v >> m;
  density(v, m);
  space(2);
  int ae, be;
  cin >> ae >> be;
  equation(ae, be);
  space(3);
  int x, y1, x2, y2;
  cin >> x >> y1 >> x2 >> y2;
  vect(x, x2, y1, y2);

  space(4);
  int a2, b, h;
  cin >> a2 >> b >> h;
  trapPerimeter(a2, b, h);
  space(5);
  int r1, r2;
  cin >> r1 >> r2;
  sqRing(r1, r2);
  space(6);
  int a3;
  cin >> a3;
  sqrVcube(a3);
  space(7);
  int a4;
  cin >> a4;
  periSqr(a4);
  space(8);
  int r;
  cin >> r;
  deam(r);
  space(9);
  string name;
  cin >> name;
  hello(name);
  space(10);
  string word;
  cin >> word;
  fullPoli(word);
}
