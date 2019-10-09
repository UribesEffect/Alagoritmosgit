#include <iostream>
#include <vector>
int main(){

	std::vector<int> v = {1,2,3};
	std::vector<int>::iterator it;
	//Insertar un elemento durante un ciclo
	for(it = v.begin(); it != v.end(); it++){
		if(it == v.begin()+1){
			it = v.insert(it, 5);
		}
	}
	

	for(int i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << "\n";

	return 0;
}

























