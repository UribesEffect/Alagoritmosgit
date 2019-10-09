
#include<iostream>
#include<list>

int main (){
	std::list<int> listado(4,100);
	std::list<int>::iterator it;

	for(it = listado.begin(); it != listado.end(); it++){
		if(it == listado.begin()){
			it = listado.insert(it, 5);
		}
	}

	for(it = listado.begin(); it != listado.end(); it++)
		std::cout <<*it << " ";
	std::cout << "\n";


	return 0;
}
