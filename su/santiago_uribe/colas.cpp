#include <iostream>
#include<queue>
/*
int main() {
	std::queue<int> first;  // empty queue
	std::queue<int> second(first);// another empty queue
	std::cout << "size of first: " << first.size() << '\n';
	std::cout << "size of second: " << second.size() << '\n';
	return 0;
}
*/
/*
int main() {
	std::queue<int> myqueue;
	int myint;

	std::cout << "Enter some integers (0 to end):\n";
	do{
		std::cin >> myint;
		myqueue.push(myint);
	}while(myint);

	std::cout << "myqueue contains: ";
	while(!myqueue.empty()) {
		std::cout << ' ' << myqueue.front();
		myqueue.pop();
	}
	std::cout << '\n';
	return 0;
}
*/
int main(){
	std::queue<int> myqueue;

	myqueue.push(77);
	myqueue.push(16);

	myqueue.front() -= myqueue.back(); // 77 - 16 = 61

	std::cout << "myqueue.front() is now "<< myqueue.front() << '\n';

	return 0;
}


































