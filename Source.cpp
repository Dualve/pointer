#include <iostream>
#include  <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	system("color F0");

	int index;
	const int first = 2, second = 5, third = 12;

	char arr[2][5][12];
	char letter[]{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','R','S','T','U','Q','W','Y','Z','X','V'};
	char *parr = &arr[0][0][0];
	char *parr_s = &arr[1][0][0];



	for(int i = 0; i < first*second*third; i++)
	{
		index = 0 + rand()%27;
		*(parr+i) = letter[index];
	}


	for (int i = 0; i < first*second*third; i++)
	{
		cout << *(parr+i) << " ";
		if ((i+1) % third == 0 && i != 0)
		{
			cout << endl;
			if (i == second*third -1 )
			{
				cout << endl;
			}
		}
	}

	for (int i = 0; i < second*third; i++)
	{
		if (*(parr + i) ^ *(parr_s + i))
		{
			*(parr + i) = '1';
		}
		else
		{
			*(parr + i) = '0';
		}
	}

	cout << endl;

	for (int i = 0; i < second*third; i++)
	{
		cout << *(parr + i) << " ";
		if ((i + 1) % third == 0 && i != 0)
		{
			cout << endl;
		}
	}

	

	system("Pause");
	return 0;
}