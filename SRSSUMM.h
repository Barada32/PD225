#pragma once
#include "stdafx.h"
#include "Constant.h"
void SRSumm(char arr[], const int length);
void SRSumm(char[rows][cols], const int rows, const int cols);
//��������-���������� ��� ������� ���� CHAR

template<typename Mytype> double SRSumm(Mytype arr[rows][cols], const int rows, const int cols);
template<typename Mytype> double SRSumm(Mytype arr[], const int length);
// ����� INT � DOUBLE CHAR ������� 
//���������� ������� ������� ����� ���������� ������� ���� INT ��� DOUBLE
template<typename Mytype>double SRSumm(Mytype arr[rows][cols], const int rows, const int cols)
{
	double sum = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum / (rows * cols);
}
//���������� ������� ������� ����� ����������� ������� ���� INT ��� DOUBLE
template<typename Mytype>double SRSumm(Mytype arr[], const int length)
{
	double sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += arr[i];
	}
	return sum / length;
}

