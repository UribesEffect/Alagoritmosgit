#include <iostream>
int main(){
	const int size = 10;
	int myarray[size];
	for(int i = 0; i < size; i++)
		myarray[i] = 12-i;
	int *it = nullptr;

	for(it = myarray; it != myarray+size; it++)
		std::cout << *it << " ";
		std::cout << "\n";
	return 0;
}





























