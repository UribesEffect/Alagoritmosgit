#include <iostream>
#include <fstream>
#include <string>

using namespace std;


const  int  TABLE_SIZE = 10;//13;  // prime  number

template  <typename VT>
struct  KeyValueNode {
string  key;
VT value;
KeyValueNode <VT > *next;
};

template  <typename VT>
class  HashMap {
	private:
		//  pointer  to  pointers  to  buckets
		KeyValueNode <VT > ** table;

		int  tableSize; // size of the  pointer  table
		int  count;      //  number  of  elements  in  table

		//  default  value  to  return  when  search  fails
		VT  notfound;

		//  search  for  key "key" inside  the  bucket  at  index
		// "index" of the  table
		//  return  the  element  if found , or  nullptr  otherwise
		//KeyValueNode <VT >*  search_bucket(int index , string  key);

		// hash  function
		unsigned  int  hash(string  key) {
			unsigned  int  hashVal = 0;
			for (char ch : key)
				hashVal  += ch;
			return  hashVal  % tableSize;
		}

	public:
		HashMap(VT def);
		~HashMap ();

		int  size();
		bool  empty();
		void  clear();
		VT get(string  key);
		bool  search(string  key);
		bool  insert(string key , VT  value);
		void  display();
		void  remove(string  key);

		// print  no. of elems  in each  bucket  to a file  filename
		void  distribution(const  string &filename);
};

template  <typename VT>
HashMap<VT>::HashMap(VT def){
	notfound = def;
	count = 0;
	tableSize = TABLE_SIZE;
	table = new KeyValueNode<VT>*[tableSize];

	for (int i = 0 ; i<tableSize-1;  i++){
		table[i] = nullptr;
	}
}


template  <typename VT>
HashMap<VT>::~HashMap(){
	clear();
	delete[] table;
}

template  <typename VT>
int HashMap<VT>::size(){
	return count;
}

template  <typename VT>
bool HashMap<VT>::empty(){
	if (count == 0){
		return true;
	}else{
		return false;
	}
}



template  <typename VT>
bool HashMap<VT>::insert(string key , VT  value){
	KeyValueNode<VT>* node = new KeyValueNode<VT>;
	node->value = value;
	node->key = key;

	int bucket = hash(key);
	if (table[bucket] == nullptr){
		table[bucket] = node;
		node->next = nullptr;
		count++;
		return true;
	}else{
		KeyValueNode<VT>* temp;
		temp = table[bucket];
		table[bucket] = node;
		node->next = temp;
		count++;
		return false;
	}
}



template  <typename VT>
void HashMap<VT>::display(){
	for (int i = 0; i<tableSize; i++){
		KeyValueNode<VT>* temp;
		temp = table[i];
		cout << "[" << i << "] ->";
		while(temp != nullptr){
			cout << " ["<<  temp->key << "] [" << temp->value << "] ->";
			temp = temp->next;
		}
		cout << "nullptr" << endl;
	}
	cout << "\n"<< endl;
}



template  <typename VT>
VT HashMap<VT>::get(string  key){
	int bucket = hash(key);
	KeyValueNode<VT>* temp;
	temp = table[bucket];
	while (temp->key != key){
		temp = temp->next;
	}
	return temp->value;
}



template  <typename VT>
bool HashMap<VT>::search(string  key){
	int bucket = hash(key);
	KeyValueNode<VT>* temp;
	temp = table[bucket];
	if (temp == nullptr){
			return false;
	}
	while (temp->key != key){
		if (temp == nullptr){
			return false;
		}
		temp = temp->next;
	}
	return true;
}



template  <typename VT>
void HashMap<VT>::remove(string  key){

	if (search(key)){
		int bucket = hash(key);
		KeyValueNode <VT >* temp;
		temp = table[bucket];
		KeyValueNode <VT >* temp2;
		if (temp->key == key){
			table[bucket] = temp->next;
			delete temp;
		}else{
			while(temp->next->key != key){
				temp = temp->next;
			}
			temp2 = temp->next;
			temp->next = temp->next->next;
			delete temp2;
		}
	}else{
		cout << "la llave " << key<< " no ha sido añadida"<< endl;
	}
}




template  <typename VT>
void HashMap<VT>::clear(){
	for(int i = 0; i < tableSize; i++){
		while(table[i]!= nullptr){
			remove(table[i]->key);
		}
	}
}



template  <typename VT>
void  HashMap<VT>::distribution(const  string &filename){
	KeyValueNode <VT >* temp;

	ofstream file;
	file.open(filename);
	for (int i = 0; i<tableSize; i++){
		int contador = 0;
		temp = table[i];
		while (temp != nullptr){
			contador++;
			temp = temp->next;
		}
		file << i << "  " << contador <<"\n";
	}
	file.close();

}
