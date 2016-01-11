/********************
  Asdullah Siddique
 ********************/

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

const int LENGHT_FILE_NAME = 50;
const int LENGHT_CONTENT = 1000;

bool checkFile(char fileName[]);

struct S{
	int n;
	double m;
};

int main()
{
	char fileName[LENGHT_FILE_NAME];
	S T[LENGHT_CONTENT];

	cout << "Inserire nome file: ";
	cin.getline(fileName, LENGHT_FILE_NAME);

	if(checkFile(fileName))
	{
		char breakLine;
		int j = 0;
		ifstream in(fileName);

		while((in >> T[j].n) && (in >> T[j++].m));

		char campi1Title[LENGHT_FILE_NAME + 10] = "campi1_di_";
		char campi2Title[LENGHT_FILE_NAME + 10] = "campi2_di_";

		strcat(campi1Title, fileName);
		strcat(campi2Title, fileName);

		ofstream out1(campi1Title);
		ofstream out2(campi2Title);

		for(int i = 0; i < j; i++)
		{
			cout << T[i].n << " " << T[i].m << endl;
			out1 << T[i].n << "\n";
			out2 << T[i].m << "\n";
		}

		out1.close();
		out2.close();
		in.close();


	}
	else
	{
		cout << "File non trovato" << endl;
	}


	return 0;
}



bool checkFile(char fileName[])
{
	if(ifstream(fileName))
		return true;
	return false;
}