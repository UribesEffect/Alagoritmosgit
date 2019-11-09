#include<iostream>
#include<string>

using namespace std;

char * read_line_to_char_array( istream &is){

  string a ;
  istream  b = is;

  char arreglo[a.size()];


  for (unsigned int i = 0; i < a.size(); i++){
    arreglo[i] = a[i];
  }
  char *p  = arreglo;

  return p;
}

int main(){
  string a;

  /*
  char arreglos[a.size()];
  for (unsigned int i = 0; i < a.size(); i++){
    arreglos[i] = a[i];
  }

  for (unsigned int i = 0; i < a.size(); i++){
    cout<<arreglos[i]<<'\n';
  }
  cout<<sizeof(arreglos)/sizeof(char)<<'\n';
  */


  return 0;
}
