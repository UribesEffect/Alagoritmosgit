#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main (){

  cout << strcmp("b","b") << '\n';// 0
  cout << strcmp("b","c") << '\n';// -1
  cout << strcmp("b","a") << '\n';// 1

  return 0;
}
