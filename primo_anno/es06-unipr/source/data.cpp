/********************
  Asdullah Siddique
 ********************/

#include <iostream>

using namespace std;

const int ARRAY_SIZE = 100;

struct Data {
	int g;
	int m;
	int a;
};

bool ricerca(Data* A[], int v, Data d);


int main()
{
	int i = 0;
	

	Data* A[ARRAY_SIZE];

	do{
		Data currentData;

		cout << "Inserire il giorno: ";
		cin >> currentData.g;

		if(currentData.g != 0)
		{
			cout << "Inserire il mese: ";
			cin >> currentData.m;
			cout << "Inserire l'anno: ";
			cin >> currentData.a;

			A[i] = new Data();
			A[i]->g = currentData.g;
			A[i]->m = currentData.m;
			A[i]->a = currentData.a;

			i++;
		}
		else
		{
			break;
		}


	}while(i < ARRAY_SIZE);

	Data toCheck;

	toCheck.g =	15; 
	toCheck.m = 8;
	toCheck.a = 1994;

	if(ricerca(A, i, toCheck))
		cout << "La data e' presente nel array.\n";
	else
		cout << "La data non e' presente nel array.\n";
	

	cout << endl;
	return 0;

}


bool ricerca(Data* A[], int v, Data d)
{
	for(int i = 0; i < v; i++)
	{
		if(((*A[i]).g == d.g) && (((*A[i]).m == d.m)) && (((*A[i]).a == d.a)))
			return true;
	}
	return false;
}