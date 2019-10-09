#include<iostream>       // std::cout
#include<stack>          // std::stack
#include<vector>         // std::vector
/*
int main(){
	std::vector<int> myvector(2, 200);

	std::stack<int> first; // empty stack
	//Initialize stack using vector
	std::stack<int,std::vector<int >> second(myvector);

	std::cout << "size of first: " << first.size() << '\n';
	std::cout << "size of second: " << second.size() << '\n';

	return 0;
}
*/

int main(){
	std::stack<int> mystack;

	for(int i = 0; i < 5; ++i) mystack.push(i);

	std::cout << "Popping out elements...";
	while(!mystack.empty()) {

		std::cout << ' ' << mystack.top();
		mystack.pop();
	}

	std::cout << '\n';

	return 0;
}



