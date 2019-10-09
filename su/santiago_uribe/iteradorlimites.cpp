#include <iostream>
#include <vector>
int main(){
	const int size = 4;
	std::vector<int> v(size, 1);
	std::vector<int>::iterator it; //iterator of vector

	std::cout << "Without iterators = ";
	for(int i = 0; i < size; i++)
		std::cout << v[i] << " ";

	std::cout << "\nWith iterators = ";
	for(it = v.begin(); it != v.end(); it++)
		std::cout <<*it << " ";
	std::cout << "\nRemoving element...";
	v.pop_back(); //Remove an element

	std::cout << "\nWithout iterators = ";
	for(int i = 0; i < size; i++)
		std::cout << v[i] << " ";

	std::cout << "\nWith iterators = ";
	for(it = v.begin(); it != v.end(); it++)
		std::cout <<*it << " ";
	std::cout << "\n";

	return 0;
}

























