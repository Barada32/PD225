#pragma once

#include "Constant.h"
#include"stdafx.h"
void FillRand(char arr1[], const int length, char minrand = 'A', char maxrand = 'Z');
void FillRand(char arr[rows][cols], const int rows, const int cols, char minrand = 'A', char maxrand = 'Z');

template<typename Mytype> void FillRand(Mytype arr1[], const int length, int minrand = 0, int maxrand = 100);


template<typename Mytype> void FillRand(Mytype arr[rows][cols], const int rows, const int cols, int minrand = 0, int maxrand = 100);

 //шаблонна€ функци€ дл€ наполнени€ массивов случайными символами
//заполнение одномерного массива int и double
template<typename Mytype> void FillRand(Mytype arr[], const int length, int minrand, int maxrand)
{
	if (minrand > maxrand)
	{
		swap(minrand, maxrand);
	}
	if (minrand == maxrand) 
	{
		maxrand++;
	}
	for (int i = 0; i < length; i++)
	{
		arr[i] = (minrand + rand() % (maxrand - minrand)) + (1 + rand() % 99 / 100.0);
	}

}


//заполнение двумерного массива int и double
template<typename Mytype>void FillRand(Mytype arr[rows][cols], const int rows, const int cols, int minrand, int maxrand)
{
	if (minrand > maxrand)
	{
		swap(minrand, maxrand);
	}
	if (minrand == maxrand)
	{
		maxrand++;
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			{
				arr[i][j] = (minrand + rand() % (maxrand - minrand)) + (1 + rand() % 99 / 100.0);
			}
		}
	}
}

