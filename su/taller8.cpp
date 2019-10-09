#include <iostream>
#include <string>
using namespace std;

int C(int n, int k){
  if (n==k || k == 0){
    return 1;
  }else{
    return C(n-1,k-1)+C(n-1,k);

  }
}

int main (){

 cout << C(6,4) << '\n';
  return 0;

}
