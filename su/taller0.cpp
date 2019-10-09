#include <iostream>
#include <stack>
#include <vector>
#include <list>
#include <queue>
#include <string>
using namespace std;

/*int main (){
  int sum = 0;
    while(sum<=100){
      for(int i = 0; i< 101; ++i){
        sum += i;
        cout << sum << '\n';
      }

  }
  return 0;
}*/
////////////////////////////////////////////////////////

/*int main (){
    int numeros[8];
    int sum;

    for(int i = 0; i<8; ++i){
      cin >> numeros[i];
      sum += numeros[i];
    }

      cout << sum << '\n';



return 0;

}*/

/////////////////////////////////////////////////////////

/*int main (){
  int myint;
  cout << "Ingrese un numero para determinar si es par o impar: " << '\n';
  cin >> myint;

  if(myint % 2 == 0){
    cout << "El numero es par" << '\n';
  }
  else{
    cout << "El numero es impar" << '\n';
  }
  return 0;
}*/
//////////////////////////////////////////////////////////

/*int main (){
  char letra;
  cout << "Escriba una letra y le diremos si es una consonante o no: " << '\n';
  cin >> letra ;

  if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
    cout << "La letra es una vocal" << '\n';
  }
  else{
    cout << "La letra es una consonante" << '\n';
  }
  return 0;
}*/
///////////////////////////////////////////////////////////////

/*int myfunction (int a, int b){

  if(a<b){
    cout << -1 << '\n';

  }
  else{
    cout << 1 << '\n';
  }
  return 0;
}


int main (){
  cout << "Escriba dos meses el año enumerados del 1 al 12: " << '\n';
  int dos;
  int tres;
  cin >> dos;
  cin >> tres;

  myfunction(dos,tres);

  return 0;
}*/
///////////////////////////////////////////////////////////////////////

int myfunction (int k, int n){
  int i;
  int fact1=1;
  int fact2=1;
  int fact3=1;
  int fac2=1;
  int fac3=1;
  int fac=1;
  int resta = n-k;
  int z= fac*fac3;
  int m = fac2/z;


  //if(n || k == 0) fact1=1;

  //else {



  for (i = 1; i <= k; i++){
    fac *= fact1*i;
  }
  for (i = 1; i<= n; i++){
    fac2 *= fact2*i;
  }
  for (i = 1; i <= resta; i++){
    fac3 *=fact3*i;
  }
//}

  cout << "la combinatoria es: " << m << '\n';
return 0;

}

int main (){
  int a;
  int b;
  cout << "Ingrese dos numeros siendo(a<b) y le diremos la combinatoria entre estos dos : " << '\n';
  cin >> a;
  cin >> b;
  myfunction(a,b);


return 0;
}
