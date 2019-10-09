// TALLER 3
#include <iostream>
#include <vector>
#include <string>


using namespace std;
 // 1

void swap(int i, int j, vector<int>& v){
  int temp = v[i];
  v[i] = v[j];
  v[j] = temp;
}

void  bubble_sort(vector<int>& v){
  bool swap_used = true;
  while(swap_used){
    swap_used = false;
    for(int i = 0; i < v.size()-1; ++i){
      if(v[i] > v[i+1]){
	swap(i,i+1,v);
	swap_used = true;
      }
    }
  }
}
/*int main(){
  vector<int> a = {6,7,2,3,9,1,4,5};
  int j;

  bubble_sort(a);
  cout << "El elemento que falta en el vector es: " << endl;

  for(int i = 0; i < a.size()-1;i++){
    j=a[i]+1;
    if(a[i+1] != j){
      cout << j << '\n';
    }

  }

  return 0;
}*/
//////////////////////////////////////////////////////////////////////////////

// 2


/*int main(){
  vector<string> m = {"33", "12", "214","23","3456"};
  vector<int> h;
  int n;

  for (int i = 0; i < m.size(); i ++){
    n = stoi(m[i]);
    h.push_back(n);
  }

  bubble_sort(h);

  cout << "Los numeros mas pequeños del vector son: " << '\n';

  for(int i = 0; i < 2; i++){
    cout << h[i] << '\n';
  }

  return 0;
}*/


////////////////////////////////////////////////////////////////////////////////

// 3

/*int findMaximum(vector<int>& arr){

  int mayor = arr[0];

  for(int u = 1; u < arr.size(); u++){

    if(arr[u] >= mayor){

      mayor = arr[u];

    }

  }

  return mayor;

}

int main (){

  vector<int> j={1,2,33,2,-4};

  cout << "El elemento mayor del vector es: " << endl;

  cout << findMaximum(j) << endl; //puedo inprimir funciones

  return 0;
}*/

////////////////////////////////////////////////////////////////////////////////

//4

/*int main(){
  vector<int> a={-2,-1,0,1,2,5};

  for(int i = 0; i < a.size();i++){
    if(a[i]>=0){
      if(a[i]==i)
        cout << "true" << endl;
      else cout << "false" << endl;

    }else{
      if(a[i]==i-a.size()){
        cout << "true" << endl;

      }else cout << "false" << endl;
    }
  }

  return 0;
}*/
