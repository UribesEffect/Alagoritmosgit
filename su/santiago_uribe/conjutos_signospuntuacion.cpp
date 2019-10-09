#include <iostream>
#include <set>
#include <string>
using namespace std;
int main(){
	set<char> myset;
	string frase;

	myset.insert('.');
	myset.insert(',');
	myset.insert(':');
	myset.insert(';');
	myset.insert('_');
	myset.insert('-');
	myset.insert('/');

	cout << "inserte una frase; ";
	getline(cin, frase );

	for(int i = 0; i < frase.length(); ++i){
		if (myset.count(frase.at(i)) != 0){
			cout << frase.at(i) << " ";

		}
	}

	cout << endl;
	return 0;
}
