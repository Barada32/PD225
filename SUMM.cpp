#pragma once

#include "SUMM.h" 



/*Реализация шаблона суммы массива типа INT или DOUBLE*/
template<typename Mytype>double Summ(Mytype arr[], const int length)
{
	double sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += arr[i];
	}
	return sum;
}
/*Реализация шаблона суммы двумерного массива типа INT или DOUBLE*/
template<typename Mytype>double Summ(Mytype arr[rows][cols], const int rows, const int cols)
{
	double sum = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

