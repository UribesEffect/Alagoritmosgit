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

int main(){
  int myints[] = {1,2,3,4,5,6,7,8,9};

	vector<int> vec(myints, myints + sizeof(myints) / sizeof(int));

  reverse1_vector(vec);

	for(int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	  cout << "\n";

	return 0;
}
