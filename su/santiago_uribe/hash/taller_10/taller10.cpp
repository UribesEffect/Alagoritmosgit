#include "taller10.hpp"
#include <cstdint>
#include <limits>

#include <iostream>

using namespace std;

int main(){
	int max = std::numeric_limits<std::int32_t>::max();

	HashMap<int> map(max);
	map.insert("A", 1);
	map.insert("Ab", 2);
	map.insert("Abc", 3);
	map.insert("AA", 4);
	map.insert("Acd", 5);
	map.insert("AAA", 6);
	
	map.display();
	
	map.remove("AAA");
	map.display();
	
	map.distribution("/home/hipatia/HOLA");
	
	return 0;
}
