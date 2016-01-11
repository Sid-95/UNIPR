/********************
  Asdullah Siddique
 ********************/

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

const int LENGHT_FILE_NAME = 100;
const int LENGHT_CONTENT = 1000;

void inverti(char A[], int n);
bool checkFile(char fileName[]);

int main()
{
	char fileName[LENGHT_FILE_NAME];
	cout << "Inserire nome file: ";
	cin.getline(fileName, LENGHT_FILE_NAME);

	if(!checkFile(fileName))
	{
		strcat(fileName, ".txt");
		if(!checkFile(fileName))
		{
			cout << "Impossibile trovare il file\n\r";
			return 0;
		}
	}


	if(ifstream(fileName))
	{
		char newFile[LENGHT_FILE_NAME + 10] = "inverso di";
		strcat(newFile, fileName);

		ifstream in(fileName);
		ofstream out(newFile);

		int i = 0;
		char currentChar;
		char A[LENGHT_CONTENT];

		while(in.get(currentChar))
		{
			A[i++] = currentChar;
		
		}

		inverti(A, strlen(A));

		out << A;

		in.close();
		out.close();

	}
	else
	{
		cout << "File inesistente";
	}

}

void inverti(char A[], int n)
{
	char hold;
	int y = n - 2;
	for(int i = 0; (i < n) && (i != y); i++, y--)
	{
		hold = A[i];
		A[i] = A[y];
		A[y] = hold;
	}

}

bool checkFile(char fileName[])
{
	if(ifstream(fileName))
		return true;
	return false;
}