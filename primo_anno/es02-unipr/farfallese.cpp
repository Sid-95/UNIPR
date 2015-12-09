/********************************************//**
 *  Author: Siddique Asdullah
 *  Desc: strange language
 ***********************************************/
#include <iostream>
using namespace std;


 int main()
 {
	int i = 1;

	for(int i = 0; i < 10; i++);
 	const int LEN = 1000;
 	char frase[LEN];

 	cout << "Dai una frase (termina con a capo): ";
 	cin.getline(frase,LEN);

	for(int i = 0; frase[i] != '\0' && i < LEN; i++)
	{
		if((frase[i] >= 'A') && (frase[i] <= 'Z'))
			frase[i] += 32;
		if((frase[i] == 'a') || (frase[i] == 'e') || (frase[i] == 'i') || (frase[i] == 'u') || (frase[i] == 'o'))
			cout << frase[i] << "f" << frase[i];
		else
			cout << frase[i];
	}

	cout << endl;
 	return 0;
 }







	

