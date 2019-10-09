#include <iostream>
#include <stack>
#include <vector>
#include <list>
#include <queue>
#include <string>
#include <cmath>
#include <map>
#include <set>
#include <stdlib.h>
#include <fstream>
#include <string.h>
using namespace std;

/*int main (){
  map<char,int> mymap;
  map<char, int>:: iterator it;


  mymap['a']= 1;
  mymap['b']=2;
  mymap['c']=3;

  it= mymap.find('b');
  mymap.erase(it);
  mymap.erase('c');

  cout << mymap['a'] << '\n';

  cout << mymap.size() << '\n';

  return 0;
}*/
/////////////////////////////////////////////////////////////////////

/*string Map(map<string, string> &m){
  map<string,string>:: iterator it;
  it=m.begin();
  it++;

  m.erase(it);


  cout << m["Amor"] << '\n' << m["Pan"] << '\n';

  cout << m.size() << '\n';

  for(it =m.begin(); it!=m.end(); it++){
    cout << it-> first << " => " << it-> second << '\n' << '\n';
  }

return 0;
}

int main(){
  map<string,string> mymap;


  mymap["Amor"]= " cojunto de sentimientos que que ligan a cosas, personas e ideas con otras";
  mymap["Odiar"]= " sesntir aversion por alguien o algo";
  mymap["Pan"]= " Alimento hecho con harina mezclada con agua y sal que, después de amasada y fermentada por la acción de la levadura, se cuece al horno con diversas formas y tamaños";
  mymap["Escalofrio"]=" Sensacion termica de frio repentino";


  Map(mymap);


  return 0;
}*/

////////////////////////////////////////////////////////////////////////////
/*short Prof(string a){
  map<string,short> mapaProf;


  mapaProf["ACD"]= 4052;
  mapaProf["CEAC"]= 4012;
  mapaProf["EJAL"]= 4010;
  mapaProf["GO"]= 4044;
  mapaProf["JJJR"]= 4053;
  mapaProf["JFPB"]= 4013;
  mapaProf["PAMG"]= 4009;
  mapaProf["RAMR"]= 4037;
  mapaProf["VGU"]= 4008;

  cout << "La extension de las iniciales del profesor: " << a << " " << "son: " << mapaProf[a] << '\n';

  return -1;

}
string NumExt(short b){
  map<short,string> mapaNumExt;

  mapaNumExt[4052]="ACD";
  mapaNumExt[4012]="CEAC";
  mapaNumExt[4010]="EJAL";
  mapaNumExt[4044]="GO";
  mapaNumExt[4053]="JJJR";
  mapaNumExt[4013]="JFPB";
  mapaNumExt[4009]="PAMG";
  mapaNumExt[4037]="RAMR";
  mapaNumExt[4008]="VGU";

  cout <<"Las iniciales del prodesor del la extension: " << b << " " << "son: " << mapaNumExt[b] << '\n';

return "Vacio";
}

int main(){
   string mymap1;
   int mymap2;

  mymap1 ="ACD";
  mymap2 =4012;

  Prof(mymap1); //iniciales y da extension
  NumExt(mymap2); //extension y da iniciales

  return 0;
}*/
//////////////////////////////////////////////////////////////////////////////
/*int main(){
  map<char,string> mymap;
  string palabra;


  mymap['A']="· —";
  mymap['B']="— · · ·";
  mymap['C']="— · — ·";
  mymap['D']="— · ·";
  mymap['E']="·";
  mymap['F']="· · — ·";
  mymap['G']="— — ·";
  mymap['H']="· · · ·";
  mymap['I']="· ·";
  mymap['J']="· — — —";
  mymap['K']="— · —";
  mymap['L']="· — · ·";
  mymap['M']="— —";
  mymap['N']="— ·";
  mymap['O']="— — —";
  mymap['P']="· — — ·";
  mymap['Q']="— — · —";
  mymap['R']="· — ·";
  mymap['S']="· · ·";
  mymap['T']="—";
  mymap['U']="· · —";
  mymap['V']="· · · —";
  mymap['W']="· — —";
  mymap['X']="— · · —";
  mymap['Y']="— · — —";
  mymap['Z']="— · — —";
  mymap['0']= "— — — — —";
  mymap['1']= "· — — — —";
  mymap['2']= "· · — — —";
  mymap['3']= "· · · — —";
  mymap['4']= "· · · · —";
  mymap['5']= "· · · · ·";
  mymap['6']= "— · · · ·";
  mymap['7']= "— — · · ·";
  mymap['8']= "— — — · ·";
  mymap['9']= "— — — — ·";

  cout << "INGRESE UNA FRASE EN MAYUSCULA Y LE DIREMOS COMO ES EN MORSE: " << '\n';
  getline(cin, palabra);


  for (int i = 0; i < palabra.size(); i++){
       cout << mymap[palabra[i]] <<  ' ' << ' ' << ' ' ;
  }
  cout << '\n';

  return 0;
}*/
//////////////////////////////////////////////////////////////////////////////////

/*int main(){
  set<int> myset;
  set<int>::iterator it;

  for(int i = 1; i <= 10 ; i++) myset.insert(i*10);
  cout << "Myset contiene: " << '\n';

  it= myset.find(20); //encontrar en myset el elemento

  it = myset.begin();
  it++;
  myset.erase(it);
  myset.erase(70);



  for(it = myset.begin(); it != myset.end(); it++) cout << *it << '\n';

  if(!myset.empty()) cout << "Myset no esta vacio. " << '\n';

  cout << *it << '\n';//encontrar el elemneto en myset

  return 0;
}*/
/////////////////////////////////////////////////////////////////////////////
/*string Myset(set<string> Mo){
  set<string> myset;
  set<string>::iterator it;
  it = Mo.begin();
  Mo.find("edgar");
  ++it;
  Mo.erase (it);
  Mo.erase("fernanda");

  cout << "tamaño de myset: " << Mo.size() << '\n';

return 0;
}
int main(){
  string ma="maria";
  string me="pablo";
  string mi="carlos";
  string mo="fernanda";
  string mu="edgar";
  set<string> conjunto;
  set<string>:: iterator it;//INSERTAR EN UN CONJUNTO IT*

  it= conjunto.begin();

  conjunto.insert(it,ma);
  conjunto.insert(it,me);
  conjunto.insert(it,mi);
  conjunto.insert(it,mo);
  conjunto.insert(it,mu);

  Myset(conjunto);

  return 0;
}*/
////////////////////////////////////////////////////////////

bool subset(set<int> & a, set<int> & b){
  set<int>::iterator it;
  for(it= b.begin(); it != b.end(); it++){
    if(a.count(*it) != 0){ //COUNT?
      cout << true << '\n';
    }else cout << false << '\n';
  }
return true;
}


int main(){
  set<int> myset1;
  set<int> myset2;

  for(int i = 1; i<=10;i++) myset1.insert(i*2);//SET ES INSERT
  for(int j = 1; j<=10; j++) myset2.insert(j*4);

  subset(myset1,myset2);

  return 0;
}
////////////////////////////////////////////////////////////////////
