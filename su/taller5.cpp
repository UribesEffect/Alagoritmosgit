#include <iostream>
#include <string>
using namespace std;
/*
//punto 2
int potencianumero(int n, int k){
  if(k== 0){
    return 1;
  }else{

    return n*potencianumero(n,k-1);
  }
}


int main (){
 cout << potencianumero(2,4) << '\n';
  return 0;

}
*/
//punto 3
/*
string voltearpala(string s, int tam){
  if(tam == -1){
    return  "";
  }else{
    return s[tam] + voltearpala(s, tam-1);
  }
}


int main (){
  string s = "helloo mother fucker";
  int tam = s.size();
 cout << voltearpala(s,tam) << '\n';
  return 0;

}
*/
//punto 5

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
