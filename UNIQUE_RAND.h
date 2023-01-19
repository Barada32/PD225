#pragma once

#include "Constant.h"
#include"stdafx.h"

template<typename Mytype> void UniqueRand(Mytype arr[], const int length, int minrand = 0, int maxrand = 100);
template<typename Mytype> void UniqueRand(Mytype arr[rows][cols], const int rows, const int cols, int minrand, int maxrand);
/*заполняет массив уникальными случайными числами в заданном диапазоне*/