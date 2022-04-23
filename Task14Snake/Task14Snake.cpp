#include <iostream>
using namespace std;
int main()
{	

	const int r = 5;
	const int c = 5;
    int snake[c][r];
	int s = -1;
	for (size_t i = 0; i < c; i++)
	{
		for (size_t j = 0; j < r; j++)
		{
			snake[i][(r-1) * (i % 2) - j * s] = i * r + j;
		}
		s *= -1;
	}
	for (size_t i = 0; i < r; i++)
	{
		for (size_t j = 0; j < r; j++)
		{
			cout << snake[i][j];
		}
		cout << endl;
	}
}

