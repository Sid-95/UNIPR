/********************************************//**
 *  Author: Siddique Asdullah
 *  Desc: detects positive numbers from negatives
 ***********************************************/
#include <iostream>
using namespace std;

int separa(int nums[], int positive[], int negatives[], int n);
void clearInput();

int main()
{
	int n;

	do{
		if(cin.fail())
			clearInput();
		cout << "Quanti numeri vuoi inserire? ";
		cin >> n;
	}while(cin.fail());

	cout << endl;

	int nums[n];
	int positives[n];
	int negatives[n];

	for(int i = 0; i < n; i++)
	{
		do{
			if(cin.fail())
				clearInput();
			cin >> nums[i];
		}while(cin.fail());
	}
	cout << endl;

	int n_positive = separa(nums, positives, negatives, n);

	cout << "Numeri negativi: ";

	for(int i = 0; i < (n - n_positive); i++)
		cout << negatives[i] << " ";

	cout << "\n\rNumeri positivi: ";

	for(int i = 0; i < n_positive; i++)
		cout << positives[i] << " ";

	cout << endl;
}

int separa(int nums[], int positive[], int negatives[], int n)
{
	int index_p = 0;
	int index_n = 0;

	for(int i = 0; i < n; i++)
	{
		if(nums[i] < 0)
			negatives[index_n++] = nums[i]; 
		else
			positive[index_p++] = nums[i]; 
	}

	return index_p;
}

void clearInput()
{
	cin.clear();
	cin.ignore(LONG_MAX, '\n');
}