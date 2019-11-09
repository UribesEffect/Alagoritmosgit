#include <iostream>
#include <vector>
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
 cout << potencianumero(5,2) << '\n';
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
  string s = "Santiago ebirU ogaitnaS";
  int tam = s.size();
 cout << voltearpala(s,tam) << '\n';
  return 0;

}
*/
/*
//punto 4
bool palindromo(string s){
  int tam = s.length();
  if(tam <= 1){
    return  true;
  }else{
    return (s[tam-1] == s[0]) && palindromo(s.substr(1,tam-2));
  }
}


int main (){
 string s = "reconocer";
 if(palindromo(s) == true){
   cout << "la palabra " << s << " SI es un palindromo" << '\n';
 }else{
   cout << "la palabra " << s << " NO es un palindromo" << '\n';
 }

 return 0;
}
*/
//punto 5
/*
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

}*/

//punto 7
/*
#include <vector>

void reverse_vector(vector<int>& vec ){
  int cont;
  int tam = vec.size();
  for(int i = 0; i < tam/2; ++i){
    cont = vec[i];
    vec[i] = vec[tam-1-i];
    vec[tam-1-i] = cont;
  }
}
*/
/*
void reverse1_vector(vector<int>& vec){
  int cont;
  int tam = vec.size();
  for(int i = 0; i < tam; ++i){
    cont = vec[i];
    vec.erase(vec.begin());
    vec.push_back(cont);

  }
}
*/
/*
int main(){
  int myints[] = {1,2,3,4,5,6,7,8,9};

	vector<int> vec(myints, myints + sizeof(myints) / sizeof(int));

  reverse1_vector(vec);

	for(int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	  cout << "\n";

	return 0;
}
*/  //punto8
template <typename T>
int bls_helper(const vector<T> &vec, int &lh, int &rh, T key){
  if(lh <= rh){
    int mid = (lh + rh) / 2 ;
    if (key == vec[mid]) {
      return mid;
    }
    else{
      int mid2 = mid - 1;
      int mid3 = mid + 1;
      return bls_helper(vec, lh, mid2, key) + bls_helper(vec, mid3, rh, key) + 1;
    }
  }
  return -1;
}

template <typename T>
int binary_like_search(const vector<T> &vec, T key){
  int lh = 0;
  int rh = vec.size() - 1;
  return bls_helper(vec, lh, rh, key);
}

int main() {
  vector<int> u = {-11,-9,-7,-5,-3,-1};
  cout << "bls in : " << binary_like_search(u, -5) << '\n';
  cout << "bls in : " << binary_like_search(u, 4) << '\n';

  vector<int> v = {'u','U','o','i','w','x','X','a'};
  cout << "bls in : " << binary_like_search(v, 'x') << '\n';
  cout << "bls in : " << binary_like_search(v, 'i') << '\n';
/*
  vector<int> w = {-10.0,-5.5,0.0,4.0,56.2,41.8};
  cout << "bls in : " << binary_like_search(w, 41.8) << '\n';
  cout << "bls in : " << binary_like_search(w, 0.0) << '\n';

  */
  return 0;
}
