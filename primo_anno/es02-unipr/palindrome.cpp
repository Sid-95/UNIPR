/********************************************//**
 *  Author: Siddique Asdullah
 *  Desc: Check palindrome 
 ***********************************************/
#include <iostream>
#include <cstring>
using namespace std;


int main()
{
 	char myPhrase[1000];
 	bool isPalindrome = true;

 	cout << "Inserire la frase da esaminare: ";
 	cin >> myPhrase;

 	for(int i = 0, j = (strlen(myPhrase) - 1); (i != j) && (i < j); i++, j--)
 	{
 		if((myPhrase[i] == ' ') && (myPhrase[j] == ' '))
 			continue;
 		else if(myPhrase[i] == ' ')
 		{
 			j++;
 			continue;
 		}
 		else if(myPhrase[j] == ' ')
 		{
 			i--;
 			continue;
 		}
 		else if(myPhrase[j] == '.')
 			break;
 		
 		myPhrase[i] = (myPhrase[i] >= 'A' && myPhrase[i] <= 'Z' ) ? myPhrase[i] + 32 : myPhrase[i];

 		if(myPhrase[i] != myPhrase[j])
 		{
 			isPalindrome = false;
 			break;
 		}
 	}

 	if(isPalindrome)
 		cout << "La frase data risulta palindroma \n\r";
 	else
 		cout << "La frase data non risulta palindroma \n\r";

 	return 0;

}

