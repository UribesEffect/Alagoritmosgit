#include <iostream>
#include <stack>
#include <vector>
#include <list>
#include <queue>
#include <string>
#include <cmath>
using namespace std;

//int main (){
  /*int olo[] = {1,2,3,4,5,6,7,8,9};
  vector<int> myvector(olo, olo+ sizeof(olo)/sizeof(int));
  cout << myvector[5];*/

  //cout << olo.size() << '\n';

  /*if (olo.size() == 0) cout << "El vector esta vacio" << "\n";
  else{
    cout << "El vector no esta vacio" << '\n';
  }*/
  //out << olo.sizeof(4) << '\n';

  /*int re[] = {1,2,3,4,5,6,7,8,9};
  vector<int> myvector(re, re + sizeof(re)/sizeof(int));
  cout << myvector.front() << "  " << myvector.back() << '\n'; // 1 elemento front, ultimo elemento back


  return 0;
}*/

/*int main (){
  int re[] = {1,2,3,4,5,6,7,8,9};
  vector<int> myvector(re, re + sizeof(re)/sizeof(int));
  myvector.erase(myvector.begin()+7);

  for (unsigned i = 0; i< myvector.size(); ++i) cout << myvector[i] << '\n';

    return 0;
}*/

/*int main (){
  int mio[] = {1,2,3,4,5,6,7,8,9};
  vector<int>::iterator it;
  vector<int> myvector(mio, mio+ sizeof(mio)/sizeof(int));

  it = myvector.begin();

  myvector.insert(it,5);

  for(unsigned i = 0; i< myvector.size(); i++) cout << myvector[i] << '\n';

  return 0;

}*/
/*int main (){
  int lo[]={1,2,3,4,5,6,7,8,9};
  vector<int> myvector (lo, lo+ sizeof(lo)/sizeof(int));

  myvector.push_back(123);
  myvector.pop_back();
  myvector.pop_back();

  for (int i = 0; i < myvector.size(); ++i) cout << " " << myvector[i] << '\n';

  return 0;
}*/

//////////////////////////////////////////////////////////////////////////




/*vector<int> myfunction (vector<int> &a){
  for (int i = 0; i < a.size(); i++) cout << a[i] << '\n';

  return a;


}

int main (){
  vector<int> ojo;

  for(int i = 1; i<=10;i++) {
  int j = pow(3, i);//exponente
  ojo.push_back(j);
  if(j<100) ojo.pop_back();//eliminar los menores de 100
}

  for (int i = 0; i < ojo.size(); i ++) cout << ojo[i] << '\n' << '\n';

  myfunction(ojo);

return 0;

}*/
////////////////////////////////////////////////////////////////////////////////

/*int main (){
  char pie[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  vector<char> myvector(pie, pie + sizeof(pie)/sizeof(char));

  for(int i = 0; i< myvector.size();i++) cout << myvector[i] << '\n';

  for(int j = myvector.size()-1; j >= 0; j--) cout << myvector[j] << '\n';

  return 0;
}*/

int main (){
  vector<string> mis;
  string j;
  while(1){
  cin >> j;
  if(j == "w"){
    break;
  }
  mis.push_back(j);
}


  for (int i = 0; i< mis.size(); i++) cout << mis[i] << '\n';

return 0;

}
