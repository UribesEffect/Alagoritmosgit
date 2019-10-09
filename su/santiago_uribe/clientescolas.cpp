#include <iostream>
#include <string>
#include<queue>
using namespace std;

int main() {
	queue<string> myqueue;
	string client;

	cout << "Enter some clients ('end' to end):\n";
	do{
		cin >> client;
		if (client == "end"){
			break;
		}
		myqueue.push(client);
	}while(client != "end");

	
	while(!myqueue.empty()) {
		
		cout << "serving:" << myqueue.front() << '\n' ;
		myqueue.pop();
	}
	
	
	
	cout << '\n';
	return 0;
}
































