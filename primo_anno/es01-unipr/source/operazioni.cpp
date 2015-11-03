/********************************************//**
 *  Author: Siddique Asdullah
 *  Desc: Some basic operations
 ***********************************************/
#include <iostream>

 void printMenu();
 void invalidInput();
 int factorial(int n);

 int main()
 {
 	int scelta;
 	int a;
 	printMenu();

 	do{
 		std::cout << "Operazione scelta: ";
 		if(!(std::cin >> scelta))
 		{
 			invalidInput();
 		}
 		else
 		{
 			switch(scelta)
 			{
 				case 1:
 				{
 					std::cout << "Inserire un numero intero: ";
 					if(!(std::cin >> a))
 						invalidInput();
 					else
 						std::cout << "Il valore assoluto di " << a << " e' " << ( a > 0 ? a : (-1*a));
 					break;
 				}
 				case 2:
 				{
 					std::cout << "Inserire un numero intero: ";
 					if(!(std::cin >> a))
 						invalidInput();
 					else
 						std::cout << "Il quadrato di " << a << " e' " << ( a * a);
 					break;
 				}
 				case 3:
 				{
 					std::cout << "Inserire un numero intero (>= 0): ";
 					if(!(std::cin >> a) || (a < 0))
 						std::cout << "Dato non valido";
 					else
 						std::cout << "La sommatoria dei primi " << a << " numeri naturali e' " << ((a * (a + 1))/2);
 					break;
 				}
 				case 4:
 				{
 					std::cout << "Inserire un numero intero (>= 0): ";
 					if(!(std::cin >> a) || (a < 0))
 						std::cout << "Dato non valido";
 					else
 						std::cout << "La produttoria dei primi " << a << " numeri naturali e' " << factorial(a);
 					break;
 				}
 				case 5:
 				{
 					std::cout << "Arrivederci";
 					break;
 				}
 				default:
 				{
 					std::cout << "Scelta non valida";
 					printMenu();
 					break;
 				}
 			}
 		}

 		std::cout << std::endl;

 	}while(scelta != 5);

 	std::cout << std::endl;
 }

void invalidInput()
{
	std::cout << "Input non valido.\n\r";
	std::cin.clear();
}

 void printMenu()
 {
 	std::cout << "Scegli una delle operazioni seguenti: \n\r";
 	std::cout << "\t1. Valore assoluto\n\r";
 	std::cout << "\t2. Quadrato \n\r";
 	std::cout << "\t3. Sommatoria\n\r";
 	std::cout << "\t4. Fattoriale\n\r";
 	std::cout << "\t5. Esci\n\r";

 }

int factorial(int n)
{
	if(n == 1 || n == 0)
		return n;
	return n * factorial(n - 1);
}