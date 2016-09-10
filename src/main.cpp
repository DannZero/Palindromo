/*	Nombres: Fitzer Gorbach Gabriel
		 Ponce de León Súchil Daniel
	Descripción: Este programa lee una frase y utilizando las estructuras de pila y cola, determina si dicha frase
	es un palíndromo.
	
*/

#include<iostream>
#include<stack>
#include<queue>
#include<string>
#include<algorithm> //Necesario para la función string.erase()
using namespace std;

int main(){
	stack<char> pila;
	queue<char> cola;
	string s;
	//Input Stream al string
	cout<<"Ingrese la frase..."<<endl; 
	getline(cin, s); //Utilizado para evitar problemas con los espacios en cin
	s.erase(remove(s.begin(),s.end(),' '),s.end()); //Elimina todos los espacios y redimensiona la cadena
	for(int i=0 ; i < s.length() ; i++){ //Ingresa letra a letra a la pila y cola
        	pila.push(s[i]);
        	cola.push(s[i]);
    	}
 	for(int i=0 ; i < s.length() ; i++){
        	if (pila.top() != cola.front()){ //Letra a letra revisa igualdad entre cola y pila
        		cout<<s<<" no es un palindromo."<<endl; //Si no son iguales, finaliza el programa
     			return 1;
		}
 	pila.pop();
 	cola.pop();
    	}
 	cout<<s<<" es un palindromo!"<<endl; //Si todas son iguales en la pila y cola, entonces es un palindromo
	return 0;
}
