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
	string s;
	//Input Stream al string
	cout<<"Ingrese la frase..."<<endl; 
	getline(cin, s); //Utilizado para evitar problemas con los espacios en cin
	if (verificaPalindromo(s)){
		cout<<s<<" es un palindromo!"<<endl;
	} else {
		cout<<s<<" no es un palindromo..."<<endl;
	}
	return 0;
}

boolean verificaPalindromo(string s){
	stack<char> pila;
	queue<char> cola;
	s.erase(remove(s.begin(),s.end(),' '),s.end()); //Elimina todos los espacios y redimensiona la cadena
	for(int i=0 ; i < s.length() ; i++){ //Ingresa letra a letra a la pila y cola
        	pila.push(s[i]);
        	cola.push(s[i]);
    	}
 	for(int i=0 ; i < s.length() ; i++){
        	if (pila.top() != cola.front()){ //Letra a letra revisa igualdad entre cola y pila
     			return false; //Si encuentra diferencia, regresa falso
		}
 	pila.pop();
 	cola.pop();
    	}
	return true; //Si termina sin encontrar diferencia regresa verdadero
}
