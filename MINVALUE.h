#pragma once
#include "Constant.h"
#include "stdafx.h"

template<typename Mytype> Mytype minValueIn(Mytype arr[], const int length);
template<typename Mytype> Mytype minValueIn(Mytype arr_d[rows][cols], const int rows, const int cols);
//возвращает минимальное значение из массива INT и DOUBLE CHAR