/********************************************//**
 *  Author: Siddique Asdullah
 *  Desc: Increments a given date of user inserted days amount
 ***********************************************/
#include <iostream>
#include <cstring>
#include <climits>
using namespace std;


struct Date
{
	int a;
	int m;
	int g;
};

void clearInput();
bool bistestile(int a);
bool isValidDate(Date currentDate);
int giorni_mese(int m, int a);
Date avanza_un_giorno(Date currentDate);
Date getDate();

int main()
{
	Date currentDate;
	int d;

	do{
		currentDate = getDate();
		if(!isValidDate(currentDate))
			cout << "Errore nelle data\n\r";
		else
			break;
	}while(true);

	
	do{
		if(cin.fail())
			clearInput();
		cout << "Immetti il numero di giorni da sommare: ";
		cin >> d;
	}while(cin.fail());

	for(int i = 0; i < d; i++)
		currentDate = avanza_un_giorno(currentDate);

	cout << "La nuova Date e': " << currentDate.g << "/" << currentDate.m << "/" << currentDate.a << endl;



}

void clearInput()
{
	cin.clear();
	cin.ignore(LONG_MAX, '\n');
}

bool bistestile(int a)
{
	if((a % 4 == 0) && (a % 400 != 0))
		return true;
	return false;
}

Date avanza_un_giorno(Date currentDate)
{
	if((currentDate.g + 1) > giorni_mese(currentDate.m, currentDate.a))
	{
		if(currentDate.m == 12)
		{
			currentDate.a++;
			currentDate.m = 1;
		}
		currentDate.g = 1;
		currentDate.m++;
	}
	else
	{
		currentDate.g++;
	}

	return currentDate;
}

bool isValidDate(Date currentDate)
{
	if((currentDate.m < 1)|| (currentDate.m > 12))
		return false;
	else if((currentDate.m < 1) || (currentDate.g > giorni_mese(currentDate.m, currentDate.a)))
		return false;
	else
		return true;
}

Date getDate()
{
	Date currentDate;
	cout << "Immetti la data: ";
	
	do{
		if(cin.fail())
			clearInput();
		cin >> currentDate.g;
	}while(cin.fail());

	do{
		if(cin.fail())
			clearInput();
		cin >> currentDate.m;
	}while(cin.fail());

	do{
		if(cin.fail())
			clearInput();
		cin >> currentDate.a;
	}while(cin.fail());

	return currentDate;
}

int giorni_mese(int m, int a)
{
	switch(m)
	{
		case 1:
		{
			return 31;
			break;
		}
		case 2:
		{
			return (bistestile(a) ? 29 : 28);
			break;
		}
		case 3:
		{
			return 31;
			break;
		}
		case 4:
		{
			return 30;
			break;
		}
		case 5:
		{
			return 31;
			break;
		}
		case 6:
		{
			return 30;
			break;
		}
		case 7:
		{
			return 31;
			break;
		}
		case 8:
		{
			return 31;
			break;
		}
		case 9:
		{
			return 30;
			break;
		}
		case 10:
		{
			return 31;
			break;
		}
		case 11:
		{
			return 30;
			break;
		}
		case 12:
		{
			return 31;
			break;
		}
		default:
		{
			return -1;
		}
	}
}

