/********************
  Asdullah Siddique
 ********************/

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

const int LENGHT_FILE_NAME = 50;
const int LENGHT_CONTENT = 10000;

int sottoseq(int A[], int n);
bool checkFile(char fileName[]);

int main()
{
	char anno[LENGHT_FILE_NAME];
	char mese[LENGHT_FILE_NAME];

	cout << "Digitare l'anno (es. 2008): ";
	cin.getline(anno, LENGHT_FILE_NAME);

	cout << "Digitare il mese (es. maggio): ";
	cin.getline(mese, LENGHT_FILE_NAME);

	strcat(mese, anno);
	if(!checkFile(strcat(mese, ".bat")))
	{
		cout << "Impossibile trovare il file\n\r";
		return 0;
	}
	else
	{
		ifstream in(mese);

		int A[LENGHT_CONTENT];
		int i = 0;

		while(in >> A[i++]);

		cout << "Letto " << i << " numeri dal file " << mese << endl; 
		cout << "La massima sottosequenza negativa ha lunghezza " << sottoseq(A, ++i) << endl;
	}
	return 0;
}

int sottoseq(int A[], int n)
{
	int bestScore = 0;
	int currentScore = 0;

	for(int i = 0; i < n; i++)
	{
		if(A[i] >= 0)
		{
			if(currentScore > bestScore)
				bestScore = currentScore;
			currentScore = 0;
		}
		else
		{
			currentScore++;
		}

	}

	return bestScore;

}

bool checkFile(char fileName[])
{
	if(ifstream(fileName))
		return true;
	return false;
}