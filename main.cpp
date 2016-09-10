/*	Nombres: Fitzer Gorbach Gabriel
		 Ponce de León Súchil Daniel
	
*/

#include<iostream>
#include<stack>
#include<queue>
#include<string>
using namespace std;

int main(){
	stack pila;
	queue cola;
	string s;
	//Input Stream al string
	quitarEspacios(s);
	cin >> s;
	
	
	//TO DO code here...
}


 string quitarEspacios(string input)
{
  input.erase(std::remove(input.begin(),input.end(),' '),input.end());
  return input;
}
