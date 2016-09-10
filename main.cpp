/*	Nombres: Fitzer Gorbach Gabriel
		 Ponce de León Súchil Daniel
	
*/

#include<iostream>
#include<stack>
#include<queue>
#include<string>
using namespace std;

int main(){
	stack<char> pila;
	queue<char> cola;
	string s;
	//Input Stream al string
	cout<<"Ingrese la frase..."<<endl;
	getline(cin,s); 
     	remove(s.begin(),astring.end(),' ');
     	for(int i=0 ; i < s.length(); i++){
     		pila.push(s[i]);
     		cola.push(s[i]);
     	}
     	for(int i=0 ; i < length() ; i++){
     		if (pila.pop() != cola.pop()){
     			cout<<s<<" no es un palindromo."<<endl;
     			return 1;
     		}
     	}
     	cout<<s<<" es un palindromo!"<<endl;
     	return 0;
}
