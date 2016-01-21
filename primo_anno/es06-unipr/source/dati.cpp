/********************
  Asdullah Siddique
 ********************/

#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

const int INITIAL_DIM = 10;
char FILE_NAME[] = {'d', 'a', 't', 'i', '.', 't', 'x', 't', '\0'};

bool checkFile(char fileName[]);
void bubbleSort(int array[], int n);
void doubleSize(int* A, int n);

int main()
{
	int* A = (int*) malloc(INITIAL_DIM * sizeof(int));
	int array_dim = INITIAL_DIM;

	if(checkFile(FILE_NAME))
	{
		ifstream in(FILE_NAME);
		

		int current;
		int index = 0;

		while(in >> current)
		{
			//cout << "Miao";
			if(array_dim == index)
			{
				doubleSize(A, array_dim);
				array_dim = array_dim * 2;
			}

			*(A + (index++)) = current;
		}

		//cout << "BAUU";
		in.close();

		bubbleSort(A, index);
		ofstream out(FILE_NAME);

		for(int i = 0; i < index; i++)
		{
			out << *(A + i) << " ";
		}


	}
	else
	{
		cout << "Impossibile trovare il file( " << FILE_NAME <<  ").";
	}
	cout << endl;
	return 0;

}


bool checkFile(char fileName[])
{
	if(ifstream(fileName))
		return true;
	return false;
}

void doubleSize(int* A, int n)
{
	int* B = (int*) malloc((n*2) * sizeof(int));
	memcpy(B, A, n - 1);
	A = B;
}

void bubbleSort(int array[], int n)
{
	int swap;

	for (int c = 0 ; c < ( n - 1 ); c++)
  	{
	    for (int d = 0 ; d < n - c - 1; d++)
	    {
	      if (array[d] > array[d+1]) /* For decreasing order use < */
	      {
	        swap = array[d];
	        array[d]   = array[d+1];
	        array[d+1] = swap;
	      }
	    }
  	}
}
