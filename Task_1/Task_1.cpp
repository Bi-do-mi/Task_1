#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;

void fmultipliers(int n, vector<vector<int>>&  mv)
{
	mv.clear();
	vector<int> v;
	for (int i = 1; i <= n; ++i)
	{
		v.clear();
		bool b = true;
		while (b)
		{
			for (int j = 2; j <= sqrt(i); ++j)
			{
				if (i % j == 0)
				{
					b = false;
					break;
				}
			}
			break;
		}
		if (!b)
		{
			int d = i;
			while (d > 1)
			{
				for (int k = 2; k <= d; ++k)
				{
					if (!(d%k))
					{
						v.push_back(k);
						if ((d / k) != 1)
						{
							d /= k;
							break;
						}
						else
						{
							d = 1;
							break;
						}
					}
				}
			}

		}
		else
		{
			v.push_back(1);
			v.push_back(i);
		}
		mv.push_back(v);
	}
	int z = 1;
	for (auto a : mv)
	{
		cout << z << ": ";
		for (auto c : a)
		{
			cout << c << ", ";
		}
		cout << endl;
		++z;
	}
}


int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Пожалуйста введите целое число,"
		" являющегося пределом диапазона." << endl;
	int n = 0;
	vector<vector<int>> m_pliers;
	while (cin >> n)
	{
		fmultipliers(n, m_pliers);
		cout << "Пожалуйста введите целое число,"
			" являющегося пределом диапазона." << endl;
	}


	return 0;
}

