/********************
  Asdullah Siddique
 ********************/
  
#include <iostream>
using namespace std;

const int ARRAY_SIZE = 1000;

int isN(int* A[], int n, int dim);

int main()
{
	int* A[ARRAY_SIZE];
	cout << "Dai una sequenza di numeri interi (negativo per smettere): ";

	int x;
	int i = 0;
	int allocated = 0;

	cin >> x;

	while(x > 0)
	{
		if(i >0)
		{
			int index = isN(A, x, i);
			
			if(index >= 0)
				A[i] = A[index];
			else
			{
				A[i] = new int(x);
				allocated++;
			}

		}
		else
		{
			A[0] = new int(x);
			allocated++;
		}
		i++;
		

		cin >> x;
	}

	cout << "Allocate " << allocated << " variabili" << endl;

	cout << "Sequenza:`\t";

	for(int j = 0; j < i; j++)
		cout << *A[j] << " ";

	cout << endl;
	return 0;

}


int isN(int* A[], int n, int dim)
{
	for(int i = 0; i < dim; i++)
	{
		if(*A[i] == n)
			return i;
	}
	return -1;
}