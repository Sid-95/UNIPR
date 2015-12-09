#include <iostream>
using namespace std;


 int main()
 {

 	int n;

 	do{
 		cout << "Immettere la dimensione della matrice: ";
 		cin >> n;
 	}while((cin.fail()) || (n < 3) || (n > 100));

 	int matrix[n][n];
 	cout << "Immettere le altitudini: ";

 	for(int i = 0; i < n; i++)
 	{
 		for(int j = 0; j < n; j++)
 		{
 			do{
 				cin >> matrix[i][j];
 			}while(cin.fail());
 		}
 	}

 	for(int i = 1; i < (n-1); i++)
 	{
 			for(int j = 1; j < (n-1); j++)
 			{
 				if((i % n == 1) && (j == (n - 2)))
 				{
 					if((matrix[i][j] > matrix[i][j -1]) && (matrix[i][j] > matrix[i + 1][j]))
 					{
 						cout << "Picco " << matrix[i][j] << " in [" << i + 1 << "]" << " [" << j + 1 << "]" << endl;
 					}
 				}
 				else if((i % n == (n - 2)) && (j == (n - 2)) )
 				{
 					if((matrix[i][j] > matrix[i][j -1]) && (matrix[i][j] > matrix[i - 1][j]))
 					{
 						cout << "Picco " << matrix[i][j] << " in [" << i + 1 << "]" << " [" << j + 1 << "]" << endl;
 					}
 				}
 				else if((j == 1) && (i != 1))
 				{
 					if((matrix[i][j] > matrix[i][j + 1]) && (matrix[i][j] > matrix[i + 1][j]) && (matrix[i][j] > matrix[i - 1][j]))
 					{
 						cout << "Picco " << matrix[i][j] << " in [" << i + 1 << "]" << " [" << j + 1 << "]" << endl;
 					}
 				}

 				else if((i == 1) && (j != 1))
 				{
 					if((matrix[i][j] > matrix[i][j + 1]) && (matrix[i][j] > matrix[i + 1][j]) && (matrix[i][j] > matrix[i][j-1]))
 					{
 						cout << "Picco " << matrix[i][j] << " in [" << i + 1 << "]" << " [" << j + 1 << "]" << endl;
 					}
 				}
 				else if((i == 1) && (j == 1))
 				{
 					if((matrix[i][j] > matrix[i][j + 1]) && (matrix[i][j] > matrix[i + 1][j]))
 					{
 						cout << "Picco " << matrix[i][j] << " in [" << i + 1 << "]" << " [" << j + 1 << "]" << endl;
 					}
 				}
 				else
 				{
 					 if((matrix[i][j] > matrix[i][j + 1]) && (matrix[i][j] > matrix[i + 1][j]) && (matrix[i][j] > matrix[i - 1][j]) && (matrix[i][j] > matrix[i][j-1]))
 					{
 						cout << "Picco " << matrix[i][j] << " in [" << i + 1 << "]" << " [" << j + 1 << "]" << endl;
 					}
 				}
 			}


 	}

 	/*for(int i = 0; i < (n - 2); i++)
 	{
 		cout << "picco di " << picchi[i].val << " in (" << picchi[i].riga << ", " << picchi[i].colonna << ")" << endl;
 	}*/

 	cout << endl;
 	return 0;
}







	

