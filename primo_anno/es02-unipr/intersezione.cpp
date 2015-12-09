/********************************************//**
 *  Author: Siddique Asdullah
 *  Desc: Some basic operations
 ***********************************************/
#include <iostream>
using namespace std;

 int main()
 {
 	int sequenzaA[100];
 	int sequenzaB[100];
 	int n,m;
 	
 	do{
 		cout << "Dammi il numero di elementi della prima sequenza: ";
 		cin >> n;
 	}while((cin.fail()) || (n < 1) || (n > 100));

 	for(int i = 0; i < n; i++)
 	{
 		do{
 			cout << "Dammi un numero: ";
 			cin >> sequenzaA[i];
 		}while(cin.fail());
 	}

 	do{
 		cout << "Dammi il numero di elementi della seconda sequenza: ";
 		cin >> m;
 	}while((cin.fail()) || (m < 1) || (m > 100));


 	for(int i = 0; i < m; i++)
 	{
 		do{
 			cout << "Dammi un numero: ";
 			cin >> sequenzaB[i];
 		}while(cin.fail());
 	}

 	cout << "L'intersezione tra le due sequenze date e': \n\r\t";

 	for(int i = 0; i < n; i++)
 	{
 		for(int j = 0; j < m; j++)
 		{
 			if(sequenzaA[i] == sequenzaB[j])
 				cout << sequenzaA[i] << " ";
 		}
 	}

 	cout << endl;
 	return 0;

}

