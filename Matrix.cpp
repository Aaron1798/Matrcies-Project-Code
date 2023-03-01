//Multiply of two matrix LAB 4 Exercise 1
#include <iostream>

using namespace std;


//the declarations for the programs

void EnterNumbers(int MatrixOne[][10], int MatrixTwo[][10], int row, int colum);
void MultiplyMatrix(int MatrixOne[][10], int MatrixTwo[][10], int MultiAnswer[][10], int row, int colum);
void DisplayResult(int multi[][10], int add[][10], int sub[][10], int row, int colum);
void AddMatrix(int MatrixOne[][10], int MatrixTwo[][10], int AddAnswer[][10], int row, int colum);
void SubMatrix(int MatrixOne[][10], int MatrixTwo[][10], int SubAnswer[][10], int row, int colum);

//int main
int main()
{

	int MatrixOne[10][10], MatrixTwo[10][10], multi[10][10], add[10][10], sub[10][10], row, colum, i, j, k;

	cout << "Enter the number of rows and colums to both Matrixes: ";
	cin >> row >> colum;



	//calls to the fuctions
	EnterNumbers(MatrixOne, MatrixTwo, row, colum);

	MultiplyMatrix(MatrixOne, MatrixTwo, multi, row, colum);

	AddMatrix(MatrixOne, MatrixTwo, add, row, colum);

	SubMatrix(MatrixOne, MatrixTwo, sub, row, colum);

	DisplayResult(multi, add, sub, row, colum);


	return 0;

}


//enter the numbers into the matrix
void EnterNumbers(int MatrixOne[][10], int MatrixTwo[][10], int row, int colum)
{
	int i, j;
	cout << endl << "Enter the numbers for matrix one: " << endl;
	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < colum; ++j)
		{
			cout << "Enter numbers A" << i + 1 << j + 1 << ": ";
			cin >> MatrixOne[i][j];
		}
	}

	cout << endl << "Enter the number for matrix two: " << endl;
	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < colum; ++j)
		{
			cout << "Enter numbers B" << i + 1 << j + 1 << ": ";
			cin >> MatrixTwo[i][j];
		}
	}
}

//the numbers from matrix 1 and 2 are multiplied
void MultiplyMatrix(int MatrixOne[][10], int MatrixTwo[][10], int MultiAnswer[][10], int row, int colum)
{
	int i, j, k;

	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < colum; ++j)
		{
			MultiAnswer[i][j] = 0;
		}
	}

	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < colum; ++j)
		{
			for (k = 0; k < colum; ++k)
			{
				MultiAnswer[i][j] += MatrixOne[i][k] * MatrixTwo[k][j];
			}
		}
	}
}

// the numbers from matrix one and two are added together
void AddMatrix(int MatrixOne[][10], int MatrixTwo[][10], int AddAnswer[][10], int row, int colum)
{
	int i, j;

	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < colum; ++j)
		{
			AddAnswer[i][j] = MatrixOne[i][j] + MatrixTwo[i][j];
		}
	}
}

// the members from matrix one and two are subtracted
void SubMatrix(int MatrixOne[][10], int MatrixTwo[][10], int SubAnswer[][10], int row, int colum)
{
	int i, j;

	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < colum; ++j)
		{
			SubAnswer[i][j] = MatrixOne[i][j] - MatrixTwo[i][j];
		}
	}
}

//the results from multiplication are able to be displayed
void DisplayResult(int multi[][10], int add[][10], int sub[][10], int row, int colum)
{
	int i, j;

	cout << "The output for multiplying 2 matrices: " << endl;
	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < colum; ++j)
		{
			cout << multi[i][j] << " ";
			if (j == colum - 1)
				cout << endl << endl;
		}
	}

	cout << "The output for adding 2 matrices: " << endl;
	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < colum; ++j)
		{
			cout << add[i][j] << " ";
			if (j == colum - 1)
				cout << endl << endl;
		}
	}

	cout << "The output for subtracting 2 matrices: " << endl;
	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < colum; ++j)
		{
			cout << sub[i][j] << " ";
			if (j == colum - 1)
				cout << endl << endl;
		}
	}
}
