/*	Nombres: Fitzer Gorbach Gabriel
		 Ponce de León Súchil Daniel
	Descripción: Este programa lee una frase y utilizando las estructuras de pila y cola, determina si dicha frase
	es un palíndromo.
	
*/

#include<iostream>
#include<stack>
#include<queue>
#include<string>
using namespace std;

int main(){
	stack<char> pila; 	//se declara la pila
	queue<char> cola; 	//se declara la cola 
	string s;		//se declara la cadena 
	//Input Stream al string
	cout<<"Ingrese la frase..."<<endl; 
	getline(cin,s); 	//se lee la información ingresada por el usuario y se guarda en la cadena
     	remove(s.begin(),astring.end(),' ');	 //el método 'remove' elimina los espacios dentro de la cadena
     	for(int i=0 ; i < s.length(); i++){	//se ingresan los caracteres de la cadena en la pila y en la cola
     		pila.push(s[i]);
     		cola.push(s[i]);
     	}
     	for(int i=0 ; i < length() ; i++){	//se recorre la pila y la cola al mismo tiempo, comparando cada una de los caracteres
     		if (pila.pop() != cola.pop()){  //si se encuentra diferencia, el ciclo termina informando que no es un palindromo
     			cout<<s<<" no es un palindromo."<<endl;
     			return 1;
     		}
     	}
     	cout<<s<<" es un palindromo!"<<endl; //de no encontrarse diferencia, se informa que si es un palindromo y el programa termina
     	return 0;
}
