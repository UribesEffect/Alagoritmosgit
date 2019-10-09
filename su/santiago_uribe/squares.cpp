#include <iostream>
#include <map>

int squares( int x){
	std::map<int,int>::iterator it;
	std::map<int,int> mymap;

	for(int i = 1; i <= x; ++i){
		mymap[i] = i*i;
	}
	std::cout << "numero | cuadrado\n";	
	for(it = mymap.begin(); it != mymap.end(); it++)
		std::cout << it->first << "      |    "
			  << it->second << "\n";
}

int main(){
	std::map<char,int> mymap;

	int n = 25;

	squares(n);

	
	return 0;

}





























