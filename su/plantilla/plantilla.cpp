#include <iostream>
#include <string>
using namespace std;
template <typename T>
T GetMax(T x,T y){
  return(x > y) ? x : y;
}

int main(){
  int i=5, j=6, k;
  long l=10, m=5, n;

  k = GetMax<int>(i,j);
  n = GetMax<int>(l,m);

  cout << k << endl;
  cout << n << endl;

	return 0;
}
