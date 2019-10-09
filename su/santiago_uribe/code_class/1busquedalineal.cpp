#include <iostream>
#include <vector>
using namespace std;

int linear_search(int X, const vector<int>& v){
  for(int i = 0;i < v.size(); ++i){
  if(v[i] == X)
      return i+1;
  }
   return-1;
}
int main(){
  vector <int> myvector = {1,5,6,7,8,9,4,2,15,45};
  int g = 2;

  cout << linear_search(g,myvector) << endl;

  return 0;

}
