/********************
  Asdullah Siddique
 ********************/

#include <iostream>

using namespace std;

struct int_list {
	int n;
	int_list* next;

};

const int LIST_MAX_SIZE = 1000;

void getList(int_list* l[]);
void notEqual();


int main()
{
	int_list* l1[LIST_MAX_SIZE];
	int_list* l2[LIST_MAX_SIZE];
	
	cout << "Dai la prima sequenza di numeri (< 0 per smettere): ";

	getList(l1);

	cout << "Dai la seconda sequenza di numeri (< 0 per smettere): ";

	getList(l2);

	for(int i = 0; i < LIST_MAX_SIZE; i++)
	{
		if(l1[i]->n != l2[i]->n)
		{
			notEqual();
			return 0;
		}
		else
		{
			if((l1[i]->next == NULL) && (l2[i]->next == NULL) )
				break;
			else if((l1[i]->next == NULL) && (l2[i]->next != NULL))
			{
				notEqual();
				return 0;
			}
			else if((l1[i]->next != NULL) && (l2[i]->next == NULL))
			{
				notEqual();
				return 0;
			}
		}

	}


	cout << "Le liste sono uguali.\n\r";

	cout << endl;
	return 0;

}

void notEqual()
{
	cout << "Le liste non sono uguali.\n\r";	
}

void getList(int_list* l[])
{
	for(int i = 0; i < LIST_MAX_SIZE; i++)
	{
		int currentVal;
		cin >> currentVal;

		if(currentVal < 0 )
			return;
		else
		{
			l[i] = new int_list();
			l[i]->n = currentVal;
			l[i]->next = NULL;

			if(i != 0)
			{
				l[i - 1]->next = l[i];
			}
		}
	}
}

