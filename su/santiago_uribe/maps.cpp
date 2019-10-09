#include <iostream>
#include <map>

/*
int main(){
	std::map<char,int> first;

	first['a'] = 10;
	first['b'] = 30;
	first['c'] = 50;
	first['d'] = 70;

	std::cout << "The value of element with key 'b' is "
	<< first['b'] << "\n";

	return 0;
}
*/
/*
int main(){
	std::map<char,int> mymap;
	std::map<char,int>::iterator it;

	mymap['a'] = 10;
	mymap['b'] = 20;
	mymap['c'] = 30;
	mymap['d'] = 40;

	if(mymap.count('c'))
		std::cout << "Element with key 'c' exists\n";
	it = mymap.find('c');//pone al iterador lo que concuentra en esa direcion en memoria
	std::cout << "Element " << it->first << " is "
		  << it->second << "\n";
 
	return 0;
}
*/
int main(){
	std::map<char,int> mymap;
	std::map<char,int>::iterator it;


	mymap['a'] = 10;
	mymap['b'] = 20;
	mymap['c'] = 30;
	mymap['d'] = 40;

	for(it = mymap.begin(); it != mymap.end(); it++)
		std::cout << it->first << ","
			  << it->second << "\n";
	return 0;
}





























