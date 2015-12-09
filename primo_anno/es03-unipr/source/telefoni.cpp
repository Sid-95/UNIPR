/********************************************//**
 *  Author: Siddique Asdullah
 *  Desc: Generic ex.
 ***********************************************/
#include <iostream>
#include <cstring>
#include <climits>
using namespace std;

struct dati_persona{
	char nome[50];
	char  numero_di_tel[50];
};

dati_persona people[100];
int dim;

int findNumberIndex(char n[]);
int findName(char nome[]);
void clearInput();
void printLibrary();
void printMenu();

int main()
{
	int scelta;
	int i = 0;

	do{
		cout << "Immetti il nome: ";
		cin >> people[i].nome;;

		if(strcmp(people[i].nome, "stop") == 0)
		{
			i--;
			break;
		}

		cout << "Immetti il numero: ";
		cin >> people[i].numero_di_tel;;

		i++;

	}while(i < 100);
	
	dim = ++i;
	
	do{

		printMenu();
		
		cin >> scelta;

		if(cin.fail())
		{
			clearInput();
			scelta = -1;
		}

		switch(scelta)
		{
			case 1:
			{
				char currentName[100];
				cout << "Inserire il nome: ";
				cin >> currentName;

				int index = 0;
				if(cin.fail())
				{
					clearInput();
					index = -2;

				}
				else
				{
					index = findName(currentName); 
				}

				switch(index)
				{
					case -1:
					{
						cout << "Non e' stata trovata nessuna corrispondenza\n\r";
						break;
					}
					case -2:
					{
						cout << "Scelta non valida\n\r";
					}
					default:
					{
						cout << "Il numero di " << currentName << " e' " << people[index].numero_di_tel << endl;
					}
				}
				

				break;
			}
			case 2:
			{
				char currentNum[50];
				cout << "Inserire il numero: ";

				do{
					cin >> currentNum;
				}while(cin.fail());

				int index = 0;
				if(cin.fail())
				{
					clearInput();
					index = -2;

				}
				else
				{
					index = findNumberIndex(currentNum);
				}

				switch(index)
				{
					case -1:
					{
						cout << "Non e' stata trovata nessuna corrispondenza\n\r";
						break;
					}
					default:
					{
						cout << "Il numero " << currentNum << " e' di " << people[index].nome << endl;
						break;
					}
				}

				break;
			}
			case 3:
			{
				printLibrary();
				break;
			}
			cdefault:
			{
				cout << "Scelta non valida \n\r";
				break;
			}
		}
	}while(scelta != 4);
	
}

void printMenu()
{
	cout << "1) Trova numero\n\r2) Trova nome\n\r3) Stampa Rubrica\n\r4) Esci \n\r>";
}

int findNumberIndex(char n[])
{
	for(int i = 0; i < dim; i++)
		if(strcmp(people[i].numero_di_tel, n) == 0)
			return i;
	return -1;
}

int findName(char nome[])
{
	for(int i = 0; i < dim; i++)
		if(strcmp(people[i].nome, nome) == 0)
			return i;
	return -1;
}

void clearInput()
{
	cin.clear();
	cin.ignore(LONG_MAX, '\n');
}

void printLibrary()
{
	cout << "\n\r\n\r";
	for(int i = 0; i < dim; i++)
	{
		cout << "\t" << people[i].nome << ": " << people[i].numero_di_tel << endl;
	}

	cout << "\n\r\n\r";
}
