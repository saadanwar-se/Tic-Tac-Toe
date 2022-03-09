
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//tic tac toe
	char a[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << a[i][j];
		}
		cout << endl;
	}
	int n = 1, row, col;
	bool flag = false;
	while (n <= 9)
	{
		if (n % 2 == 1)
		{
			cout << "Enter row and column player 1: " << endl;
			cin >> row >> col;

			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					if (i == row && j == col) {

						for (int i = 0; i < 3; i++)
						{
							for (int j = 0; j < 3; j++)
							{
								a[row][col] = 'X';
							}
							cout << endl;
						}
					}
				}
			}
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					cout << a[i][j];
				}
				cout << endl;
			}
			if (n > 4)
			{
				//checking row wise win
				if (a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == 'X') {
					cout << "player 1 wins";
					flag = true;
					break;
				}
				else if (a[1][0] == 'X' && a[1][1] == 'X' && a[1][2] == 'X') {
					cout << "player 1 wins";
					flag = true;

					break;
				}
				else if (a[2][0] == 'X' && a[2][1] == 'X' && a[2][2] == 'X') {
					cout << "player 1 wins";
					flag = true;
					break;
				}//checking column wise win
				else if (a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'X') {
					cout << "player 1 wins";
					flag = true;
					break;
				}
				else if (a[0][1] == 'X' && a[1][1] == 'X' && a[2][1] == 'X') {
					cout << "player 1 wins";
					flag = true;
					break;
				}
				else if (a[0][2] == 'X' && a[1][2] == 'X' && a[2][2] == 'X') {
					cout << "player 1 wins";
					flag = true;
					break;
				}
				//diagnol win checking
				else if (a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X') {
					cout << "player 1 wins";
					flag = true;
					break;
				}
				else if (a[0][2] == 'X' && a[1][1] == 'X' && a[2][0] == 'X') {
					cout << "player 1 wins";
					flag = true;
					break;
				}
			}
		}
		else
		{
			cout << "Enter row and column player 2 : " << endl;
			cin >> row >> col;

			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					if (i == row && j == col) {

						for (int i = 0; i < 3; i++)
						{
							for (int j = 0; j < 3; j++)
							{
								a[row][col] = 'O';
							}
							cout << endl;
						}
					}
				}
			}
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					cout << a[i][j];
				}
				cout << endl;
			}
			if (n > 4)
			{
				//for O
				//checking row wise win 
				if (a[0][0] == 'O' && a[0][1] == 'O' && a[0][2] == 'O') {
					cout << "player 2 wins";
					flag = true;
					break;
				}
				else if (a[1][0] == 'O' && a[1][1] == 'O' && a[1][2] == 'O') {
					cout << "player 2 wins";
					flag = true;
					break;
				}
				else if (a[2][0] == 'O' && a[2][1] == 'O' && a[2][2] == 'O') {
					cout << "player 2 wins";
					flag = true;
					break;
				}//checking column wise win
				else if (a[0][0] == 'O' && a[1][0] == 'O' && a[2][0] == 'O') {
					cout << "player 2 wins";
					flag = true;
					break;
				}
				else if (a[0][1] == 'O' && a[1][1] == 'O' && a[2][1] == 'O') {
					cout << "player 2 wins";
					flag = true;
					break;
				}
				else if (a[0][2] == 'O' && a[1][2] == 'O' && a[2][2] == 'O') {
					cout << "player 2 wins";
					flag = true;
					break;
				}
				//diagnol win checking
				else if (a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O') {
					cout << "player 2 wins";
					flag = true;
					break;
				}
				else if (a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == 'O') {
					cout << "player 2 wins";
					flag = true;
					break;
				}
			}
		}
		n++;
	}
	if (flag == false) {
		cout << "Match Draw";
	}	     
    return 0;
}

