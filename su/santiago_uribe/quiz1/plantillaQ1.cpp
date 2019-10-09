#include <iostream>
#include <stack>
using namespace std;

bool compareEnd(stack<int> S, stack<int> M) {
  if(!S.empty() && S.top() < M.top() ){
    return true;
  }else{
    return false;
  }
}


int main() {
  int array[12] = {13,3,4,3,7,5,3,2,7,7,3,20};
  stack<int> mystack;
  stack<int> mystack2;
  mystack2.push(array[0]);
  for(int i = 0; i < 12; i++)
    mystack.push(array[i]);

  if( compareEnd(mystack,mystack2))
    cout << "El último valor es el mayor.\n ";
  else
    cout << "El último valor no es el mayor.\n ";

  return 0;
}
