#include <iostream>
using namespace std;
int main()
{	
	const int r = 5;
	const int c = 5;
    int snake[c][r];
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < r; j++)
		{
			(i % 2 == 0)?snake[i][j] = i * r + (j + 1):snake[i][j] = (i * r - j) + r;
		}
	}
	for (size_t i = 0; i < r; i++)
	{
		for (size_t j = 0; j < r; j++)
		{
			cout << snake[i][j];
		}
		
	}
}

