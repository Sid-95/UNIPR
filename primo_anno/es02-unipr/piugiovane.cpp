/********************************************//**
 *  Author: Siddique Asdullah
 *  Desc: strange language
 ***********************************************/
#include <iostream>
using namespace std;

struct persona{
	char cognome[50];
	int eta;

};


 int main()
 {
 	int n;
 	int min = -1;

 	cout << "Quante persone vuoi immettere (max 10)? ";
 	cin >> n;

 	while((cin.fail()) || (n < 1) || (n > 10))
 	{
 		cout << "Errore! Quante persone vuoi immettere (max 10)? ";
 		cin >> n;
 	}

 	persona persone[n];

 	for(int i = 0; i < n; i++)
 	{
 		cout << "Immettere il cognome: ";
 		cin >> persone[i].cognome;
 		

 		cout << "Immettere l'eta: ";
 		cin >> persone[i].eta;

 		if((min > persone[i].eta) || (min = -1))
 			min = persone[i].eta;
 	}

 	cout << "I piu' giovani sono:\n\r";

 	for(int i = 0; i < n; i++)
 	{
 		if(persone[i].eta == min)
 		{
 			cout << "\t" <<persone[i].cognome << "\n\r";
 		}

 	}

 	return 0;
 }







	

