#pragma once
#include <iostream>

using namespace std;

class matrice
{
public:
	int n, m;// m/i nr linii, n/j nr coloane
	double values[5][5] = { 0 };
	
	matrice(int linii = 3, int coloane = 3)
	{
		n = coloane;
		m = linii;
	}

	void show()
	{
		cout << m << ' ' << n << '\n';
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << values[i][j] << ' ';
			}
			cout << '\n';
		}
		cout << '\n';
	}

	bool operator==(const matrice& other)
	{
		if (n != other.n || m != other.m)
		{
			return false;
		}
		bool valEqual = true;
		for(int i = 0; i < m; i++) // linii
		{
			for (int j = 0; j < n; j++) //coloane
			{
				if (values[i][j] != other.values[i][j])
					return false;
			}
		}
		return true;
	}

	matrice operator+(const matrice& other)
	{
		if (n != other.n || m != other.m)
		{
			cout << "NOT POSSIBLE\n";
			return 0;
		}
		matrice sum(m, n);
		for (int i = 0; i < m; i++) // linii
		{
			for (int j = 0; j < n; j++) //coloane
			{
				sum.values[i][j] = values[i][j] + other.values[i][j];
			}
		}
		return sum;
	}

	matrice operator-(const matrice& other)
	{
		if (n != other.n || m != other.m)
		{
			cout << "NOT POSSIBLE\n";
			return 0;
		}
		matrice diff;
		for (int i = 0; i < m; i++) // linii
		{
			for (int j = 0; j < n; j++) //coloane
			{
				diff.values[i][j] = values[i][j] - other.values[i][j];
			}
		}
		return diff;
	}

	void operator=(const matrice& other)
	{
		n = other.n;
		m = other.m;
		for (int i = 0; i < m; i++)//linii
		{
			for (int j = 0; j < n; j++)//coloane
			{
				values[i][j] = other.values[i][j];
			}
		}
	}

	matrice operator*(const double& scalar)
	{
		matrice prod(m, n);
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				prod.values[i][j] = values[i][j] * scalar;
			}
		}
		return prod;
	}

	matrice operator*(const matrice& other)
	{
		matrice prod(m, n);
		prod.values[1][1] = 8;  // for testing
		return prod;
	}
};