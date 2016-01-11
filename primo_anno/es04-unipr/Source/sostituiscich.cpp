/********************
  Asdullah Siddique
 ********************/
  
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

const int LENGHT_FILE_NAME = 50;

int main()
{
	char fileName[LENGHT_FILE_NAME];
	cout << "Inserire nome file: ";
	cin.getline(fileName, LENGHT_FILE_NAME);


	if(ifstream(fileName))
	{
		char newFile[LENGHT_FILE_NAME + 4] = "new_";
		strcat(newFile, fileName);

		ifstream in(fileName);
		ofstream out(newFile);

		char currentChar;
		char previousChar;



		while(in.get(currentChar))
		{
			if(currentChar == 'h')
				continue;
			if((currentChar == 'c') && (in.peek() == 'h'))
			{
				out.put('k');
			}
			else
			{
				out.put(currentChar);

			}
		
		}

		in.close();
		out.close();

	}
	else
	{
		cout << "File inesistente";
	}



}