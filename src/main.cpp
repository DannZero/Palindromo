/*	Nombres: Fitzer Gorbach Gabriel
		 Ponce de León Súchil Daniel
	Descripción: Este programa lee una frase y utilizando las estructuras de pila y cola, determina si dicha frase
	es un palíndromo.
	
*/

#include<iostream>
#include<stack>
#include<queue>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	stack<char> pila;
	queue<char> cola;
	string s;
	//Input Stream al string
	cout<<"Ingrese la frase..."<<endl; 
	getline(cin, s);
	s.erase(remove(s.begin(),s.end(),' '),s.end());
	for(int i=0 ; i < s.length() ; i++){
        	pila.push(s[i]);
        	cola.push(s[i]);
    	}
 	for(int i=0 ; i < s.length() ; i++){
        	if (pila.top() != cola.front()){
        		cout<<s<<" no es un palindromo."<<endl;
     			return 1;
		}
 	pila.pop();
 	cola.pop();
    	}
 	cout<<s<<" es un palindromo!"<<endl;
	return 0;
}
