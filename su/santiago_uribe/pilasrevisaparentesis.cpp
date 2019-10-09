#include<iostream>       // std::cout
#include<stack>          // std::stack
#include<vector>         // std::vector
using namespace std;
bool is_parenthesis(char x){// evalua si es un corchete,parentesis etc
	if(x == '(' || x == '[' || x == '{' || x == ')' || x == ']' || x == '}'){
		return true;
	}else{
		return false;
	}
}

bool is_pair(char x,char y){//mira que si abres uno el siguiente sea el que cierra
	if(x == '(' && y == ')' || x == '[' && y == ']' || x == '{' && y == '}'){
		return true;
	}else{
		return false;
	}
}


int main(){
	string code = "if((a[3]=={2,4,1}) and has_element(b))";//code es el texto que se le van a mirar los parentesis
	stack<char> p; //un stack que guarda caracteres llamado p

	for(int i = 0; i < code.length(); i++){
		char c = code.at(i);//va a recorrer caracter por caracter 
		if(is_parenthesis(c)){ //si el caracter c es parentesis se ejecuta el if  
			if(!p.empty() && is_pair(p.top(),c)){/*si el stack no esta vacio y el top es pareja con el 									 caracter top, se ejecuta*/
				p.pop();//se quita el caracter que esta en el top
			}else{
			 	if(c == '(' || c == '[' || c == '{'){/*si es un parentesis de los que abre lo poneen 										el stack*/
					p.push(c);//se añade al stack el parentesis que abre
				}else{
					cout << "Closing unopened parenthesis\n";/*el primer parentesis del stack no 											sea uno que abre sin el que cierra*/
					return -1;
				}
			}
		}

	}
	if(!p.empty()){
		cout << "Parenthesis left unclosed\n";//que al final del proceso no quede nada en el stack 
		return-1;
	}
	cout << "the expresion is correct" << endl; // todo esta correcto

	return 0;
}

