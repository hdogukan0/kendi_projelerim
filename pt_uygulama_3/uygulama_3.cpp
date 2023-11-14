#include <iostream>
using namespace std;

int main()
{
	int a[5][5];
	double b[5][5];
	double kalan;
	long i,j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cout << "a : "; cin >> a[i][j]; cout << "\n";
			kalan = a[i][j] % 2;

			if (kalan == 0)
			{
				b[i][j] = a[i][j];

			}
			else
			{
				b[i][j] = -1;
			}
		}

	}
	
	cout << "b : " << b[i][j] << " a : " << " " << a[i][j];

	cout << "a:[" << i << "] [" << j << "]" << endl;
	


	

	return 0;
}