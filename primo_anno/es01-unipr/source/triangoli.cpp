/********************************************//**
 *  Author: Siddique Asdullah
 *  Desc: does some basic controls on triangles
 ***********************************************/
#include <iostream>

 void invalidInput();
 void printMenu();
 void getInputs(unsigned int& a, unsigned int& b, unsigned int& c);
 int  checkTriangle(int a, int b, int c);
 bool isRightAngleTriangle(int a, int b, int c);

 int main()
 {
 	unsigned int a, b,c;
 	int scelta;

 	getInputs(a,b,c);
 	printMenu();
 	do{
 		std::cout << "Operazione scelta? ";
 		if(!(std::cin >> scelta))
 			invalidInput();
 		else
 		{
 			switch(scelta)
 			{
 				case 1:
 				{
 					switch(checkTriangle(a, b, c))
 					{
 						case -1:
 						{
 							std::cout << "Non e' triangolo\n\r";
 							break;
 						}
 						case 1:
 						{
 							std::cout << "Triangolo scaleno\n\r";	
 							break;
 						}
 						case 2:
 						{
 							std::cout << "Triangolo isoscele\n\r";
 							break;
 						}
 						case 3:
 						{
 							std::cout << "Triangolo equilatero\n\r";
 							break;
 						}
 					}
 					break;
 				}
 				case 2:
 				{
 					if(checkTriangle(a, b, c) == -1)
 						std::cout << "I valori immessi non costituiscono un triangolo\n\r";
 					else
 					{
 						if(isRightAngleTriangle(a, b, c))
 							std::cout << "E' rettangolo\n\r";
 						else
 							std::cout << "Non e' rettangolo\n\r";	
 					}

 					break;
 				}
 				case 3:
 				{
 					getInputs(a, b, c);
 					printMenu();
 					break;
 				}
 				case 4:
 				{
 					std::cout << "Arrivederci!";
 					break;
 				}
 				default:
 				{
 					std::cout << "Scelta non valida.\n\r";
 				}

 			}
 		}
 		

 	}while(scelta != 4);

 	std::cout << std::endl;
 	return 0;
 }


void invalidInput()
{
	std::cout << "Input non valido.\n\r";
	std::cin.clear();
}

void printMenu()
{
	std::cout << "Scegli una delle operazioni seguenti:\n\r";
 	std::cout << "\t1. Tipo di triangolo (isoscele / equilatero / scaleno / non è un triangolo)\n\r";
 	std::cout << "\t2. Verifica rettangolo (è / non è un triangolo rettangolo)\n\r";
 	std::cout << "\t3. Azzera (permette l'inserimento di nuove lunghezze per i tre lati)\n\r";
 	std::cout << "\t4. Esci\n\r";

}

 void getInputs(unsigned int& a, unsigned int& b, unsigned int& c)
 {
 	std::cout << "Inserisci la lunghezza dei 3 lati di un triangolo\n\r";
 	
 	do{
 		std::cout << "Primo lato: ";
 	}while(!(std::cin >> a));

 	do{
 		std::cout << "Secondo lato: ";
 	}while(!(std::cin >> b));

 	do{
 		std::cout << "Terzo lato: ";
 	}while(!(std::cin >> c));

 }


/*********
	-1 not a rectangle
	 1 scalene
	 2 isosceles 
	 3 equilater
*/
 int checkTriangle(int a, int b, int c)
 {
 	if((a + b) < c)
 		return -1;
 	else if((a != b) && (b != c) && (a != c) )
 		return 1;
 	else if((a == b) && (a == c))
 		return 3;
 	return 2;
 }

  bool isRightAngleTriangle(int a, int b, int c)
  {
  	return (((a * a + b * b) == (c * c)) || ((a * a + c * c) == (b * b)) || ((b * b + c * c) == (a * a))) ? true : false;
  }