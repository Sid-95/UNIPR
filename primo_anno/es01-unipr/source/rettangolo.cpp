/********************************************//**
 *  Author: Siddique Asdullah
 *  Desc: Prints a rectangle given a inner filler char
 *  	  lenght and height     
 ***********************************************/
#include <iostream>
#define OUTLINE_CHAR '*'

void invalidInput();
void printRettangle(int nRighe, int nColonne, char fillerChar);

int main()
{
	int nRighe, nColonne;
	char fillerChar;

	std::cout << "Inserisci quante righe vuoi: ";
	if(!(std::cin >> nRighe) || (nRighe <= 1))
	{
		invalidInput();
		return 0;
	}

	std::cout << "Inserisci quante colonne vuoi: ";
	if(!(std::cin >> nColonne) || (nColonne <= 1))
	{
		invalidInput();
		return 0;
	}

	std::cout << "Inserisci il carattere che riempira' il rettangolo: ";
	if(!(std::cin >> fillerChar ))
	{
		invalidInput();
		return 0;
	}

	printRettangle(nRighe, nColonne, fillerChar);

	std::cout << std::endl;
	return 0;
}



void invalidInput()
{
	std::cout << "Input non valido.\n\r";
	std::cin.clear();
}

void printRettangle(int nRighe, int nColonne, char fillerChar)
{
	std::string delimiter = std::string(nColonne, OUTLINE_CHAR);
	std::string line = OUTLINE_CHAR + std::string(nColonne - 2, fillerChar) + OUTLINE_CHAR;

	for(int i = 0; i < nRighe; i++)
	{
		std::cout << (((i == 0) || ((i + 1) == nRighe)) ? delimiter : line) << std::endl;
		
	}
}