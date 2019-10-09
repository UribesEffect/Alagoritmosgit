#include <iostream>
#include <stack>
using namespace std;

bool compareEnd(stack<int> S) {
  if(!S.empty() && S.top() < 20){
    return true;
  }else{
    return false;
  }
}



int main() {
  int array[12] = {13,3,4,3,7,5,3,2,7,7,3,20};
  stack<int> mystack;
  for(int i = 0; i < 12; i++)
    mystack.push(array[i]);

  if( compareEnd(mystack))
    cout << "El último valor es el mayor.\n ";
  else
    cout << "El último valor no es el mayor.\n ";

  return 0;
}
