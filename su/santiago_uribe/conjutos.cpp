#include <iostream>
#include <set>

/*
int main(){
	std::set<int> myset;
	std::set<int>::iterator it;

	// set some initial values: set: 10 20 30 40 50
	for(int i = 1; i <= 5; i++) myset.insert(i*10);

	std::cout << "myset contains:";
	for(it = myset.begin(); it != myset.end(); it++)
		std::cout << ' ' <<*it;
	std::cout << '\n';

	return 0;
}
*/
int main(){
	std::set<int> myset;

	//set some initial values:
	for(int i = 1; i < 10; ++i)
		myset.insert(i * 3);  // set: 3 6 9 12

	for(int i = 0; i < 13; ++i){
		std::cout << i;
		if (myset.count(i) != 0)
			std::cout << " is an element of myset.\n";
		else
			std::cout << " is  not an element of myset.\n";
	}

	return 0;
}
