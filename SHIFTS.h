#pragma once
#include "Constant.h"
#include"stdafx.h"

template<typename Mytype> void shiftLeft(Mytype arr[], const int length, int sdvig);
template<typename Mytype> void shiftLeft(Mytype arr[rows][cols], const int rows, const int cols, int sdvig);
//выполняет циклический сдвиг массива на заданное число элементов влево

template<typename Mytype> void shiftRight(Mytype arr[], const int length, int sdvig);
template<typename Mytype> void shiftRight(Mytype arr[rows][cols], const int rows, const int cols, int sdvig);
//выполняет циклический сдвиг массива на заданное число элементов право