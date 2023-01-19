

#include "stdafx.h"
#include "Constant.h"
//#include "PEREG.h" 
#include "FILL_RAND.h"
#include "PRINT_ARR.h"
#include "SUMM.h"
#include "SRSSUMM.h"
#include "MINVALUE.h"
#include "MAXVALUE.h" 
#include "SHIFTS.h"
#include "SORT_VYBOR.h"
#include "SORT_PYZYR.h"
#include "UNIQUE_RAND.h"
#include "SEARCH.h"




int main()
{
	setlocale(LC_ALL, "Rus");
	using namespace std;

	//srand(time(NULL));

//переменные одномерного массива типа INT
	int int_ar[int_length] = {};
	int int_start, int_stop;
	int sdvig_pravo = 0;
	int sdvig_levo = 0;
	//переменные для одномерного массива тима DOUBLE
	double doub_ar[doub_length] = {};
	double doub_start, doub_stop;
	int sdvig_doub_pravo = 0;
	int sdvig_doub_levo = 0;
	//переменные для одномерного массива типа  CHAR
	char char_ar[char_length] = {};
	char char_start, char_stop;
	int sdvig_char_pravo = 0;
	int sdvig_char_levo = 0;
	//переменные двумерного массива типа INT
	int dm_int_arr[rows][cols];
	int dm_int_start = 0, dm_int_stop = 0;
	int dm_sdvig_int_pravo = 0;
	int dm_sdvig_int_levo = 0;

	//переменные двумерного массива типа DOUBLE
	double dm_doub_arr[rows][cols];
	double dm_doub_start = 0, dm_doub_stop = 0;
	int dm_sdvig_doub_pravo = 0;
	int dm_sdvig_doub_levo = 0;

	//переменные двумерного массива типа CHAR
	char dm_char_arr[rows][cols];
	char dm_char_start = 0, dm_char_stop = 0;
	int dm_sdvig_char_pravo = 0;
	int dm_sdvig_char_levo = 0;

	

	cout << "Набор функций для одномерного массива типа INT " << endl;
	cout << "Введите начало диапазона массива\n";
	cin >> int_start;
	cout << "\nВведите начало диапазона массива\n";
	cin >> int_stop;
	FillRand(int_ar, int_length, int_start, int_stop);
	PrintAr(int_ar, int_length);
	cout << endl;
	cout << "Сумма массива= " << Summ(int_ar, int_length);
	cout << endl;
	cout << "Среднеарифметическое INT массива= " << SRSumm(int_ar, int_length);
	cout << endl;
	minValueIn(int_ar, int_length);
	cout << endl;
	maxValueIn(int_ar, int_length);
	cout << endl;
	cout << "Введите значение на сколько хотите сдвнуть массив вправо \n";
	cin >> sdvig_pravo;
	shiftRight(int_ar, int_length, sdvig_pravo);
	PrintAr(int_ar, int_length);
	cout << endl;
	cout << "Введите значение на сколько хотите сдвнуть массив влево \n";
	cin >> sdvig_levo;
	cout << endl;
	shiftLeft(int_ar, int_length, sdvig_levo);
	PrintAr(int_ar, int_length);
	cout << endl;
	Search(int_ar, int_length);
	cout << endl;
	cout << "После сортировки" << endl;
	SortVybor(int_ar, int_length);
	PrintAr(int_ar, int_length);
	cout << endl;
	cout << "Введите начало диапазона масива для уникальных значений\n ";
	cin >> int_start;
	cout << "Введите  конец диапазона масива для уникальных значений\n ";
	cin >> int_stop;
	cout << "Наполнение массива уникальными значениями\n ";
	UniqueRand(int_ar, int_length, int_start, int_stop);
	PrintAr(int_ar, int_length);
	cout << endl;
 //одномерный массив типа INT

//	cout << delimetr << endl;
//	cout << "Набор функций для одномерного массива типа DOBLE " << endl;
//
//
//#ifdef DOUBLE
//
//	cout << "Введите начало диапазона массива\n";
//	cin >> doub_start;
//	cout << "\nВведите начало диапазона массива\n";
//	cin >> doub_stop;
//	FillRand(doub_ar, doub_length, doub_start, doub_stop);
//	PrintAr(doub_ar, doub_length);
//	cout << endl;
//	cout << "Сумма DOUBLE массива= " << Summ(doub_ar, doub_length);
//	cout << endl;
//	cout << "Среднеарифметическое DOUBLE массива= " << SRSumm(doub_ar, doub_length);
//	cout << endl;
//	minValueIn(doub_ar, doub_length);
//	cout << endl;
//	maxValueIn(doub_ar, doub_length);
//	cout << endl;
//	cout << "Введите значение на сколько хотите сдвнуть массив вправо \n";
//	cin >> sdvig_doub_pravo;
//	shiftRight(doub_ar, doub_length, sdvig_doub_pravo);
//	PrintAr(doub_ar, doub_length);
//	cout << endl;
//	cout << "Введите значение на сколько хотите сдвнуть массив влево \n";
//	cin >> sdvig_doub_levo;
//	cout << endl;
//	shiftLeft(doub_ar, doub_length, sdvig_doub_levo);
//	PrintAr(doub_ar, doub_length);
//	cout << endl;
//	Search(doub_ar, doub_length);
//	cout << endl; 
//	cout << "После сортировки" << endl;
//	SortVybor(doub_ar, doub_length);
//	PrintAr(doub_ar, doub_length);
//	cout << endl;
//	cout << "Введите начало диапазона масива для уникальных значений\n ";
//	cin >> doub_start;
//	cout << "Введите  конец диапазона масива для уникальных значений\n ";
//	cin >> doub_stop;
//	cout << "Наполнение массива уникальными значениями\n ";
//	UniqueRand(doub_ar, doub_length, doub_start, doub_stop);
//	PrintAr(doub_ar, doub_length);
//	cout << endl;
//#endif //одномерный массив типа DOUBLE
//
//	cout << delimetr << endl;
//	cout << "Набор функций для одномерного массива типа CHAR" << endl;
//
//
//#ifdef CHAR
//
//	cout << "Введите начало  массива(от A(a) - Z(z)\n ";
//	cin >> char_start;
//	cout << "Введите конец массива(от A(a) - Z(z)\n ";
//	cin >> char_stop;
//	FillRand(char_ar, char_length, char_start, char_stop);
//	PrintAr(char_ar, char_length);
//	cout << endl;
//	cout << "Результат функции суммы массива типа CHAR равен " << " [ ";
//	Summ(char_ar, char_length);
//	cout << " ]\n ";
//	SRSumm(char_ar, char_length);
//	minValueIn(char_ar, char_length);
//	cout << endl;
//	maxValueIn(char_ar, char_length);
//	cout << endl;
//	cout << "Введите значение на сколько хотите сдвнуть массив вправо \n";
//	cin >> sdvig_char_pravo;
//	shiftRight(char_ar, char_length, sdvig_char_pravo);
//	PrintAr(char_ar, char_length);
//	cout << endl;
//	cout << "Введите значение на сколько хотите сдвнуть массив влево \n";
//	cin >> sdvig_doub_levo;
//	cout << endl;
//	shiftLeft(char_ar, char_length, sdvig_doub_levo);
//	PrintAr(char_ar, char_length);
//	cout << endl;
//	Search(char_ar, char_length);
//	cout << endl;
//	cout << "После сортировки" << endl;
//	SortVybor(char_ar, char_length);
//	PrintAr(char_ar, char_length);
//	cout << endl;
//	cout << "Введите начало диапазона масива для уникальных значений\n ";
//	cin >> char_start;
//	cout << "Введите  конец диапазона масива для уникальных значений\n ";
//	cin >> char_stop;
//	cout << "Наполнение массива уникальными значениями\n ";
//	UniqueRand(char_ar, char_length, char_start, char_stop);
//	PrintAr(char_ar, char_length);
//	cout << endl;
//одномерный массив типа CHAR
//
//	cout << delimetr << endl;
//	cout << "Набор функций для двумерного массива типа INT" << endl;
//
//#ifdef D_M_INT
//
//	cout << "Введите начало диапазона для заполнения массива" << endl;
//	cin >> dm_int_start;
//	cout << "Введите конец диапазона для заполнения массива" << endl;
//	cin >> dm_int_stop;
//	FillRand(dm_int_arr, rows, cols, dm_int_start, dm_int_stop);
//	PrintAr(dm_int_arr, rows, cols);
//	cout << "\nСумма двумерного массива типа INT равна " << Summ(dm_int_arr, rows, cols);
//	cout << "\nСредняя сумма двумерного массива типа INT равна " << SRSumm(dm_int_arr, rows, cols);
//	cout << "\nМинимальное значение в двумерном массиве типа INT равно " << minValueIn(dm_int_arr, rows, cols);
//	cout << "\nМаксимальное значение в двумерном массиве типа INT равно " << maxValueIn(dm_int_arr, rows, cols);
//	cout << "\nВведите на сколько сдвинуть массив вправо " << endl;
//	cin >> dm_sdvig_int_pravo;
//	cout << "После сдвига вправо" << endl;
//	shiftRight(dm_int_arr, rows, cols, dm_sdvig_int_pravo);
//	PrintAr(dm_int_arr, rows, cols);
//	cout << "\nВведите на сколько сдвинуть массив влево " << endl;
//	cin >> dm_sdvig_int_levo;
//	cout << "После сдвига влево" << endl;
//	shiftLeft(dm_int_arr, rows, cols, dm_sdvig_int_levo);
//	PrintAr(dm_int_arr, rows, cols);
//	Search(dm_int_arr, rows, cols);
//	cout << "После сортировки" << endl;
//	SortPyzyr(dm_int_arr, rows, cols);
//	PrintAr(dm_int_arr, rows, cols);
//	cout << "Массив из уникальных значений" << endl;
//	UniqueRand(dm_int_arr, rows, cols, dm_int_start, dm_int_stop);
//	PrintAr(dm_int_arr, rows, cols);
//#endif //двумерный массив типа INT
//
//	cout << delimetr << endl;
//	
//
//#ifdef D_M_DOUBLE
//	//переменные двумерного массива типа DOUBLE
//cout << "Набор функций для двумерного массива типа DOUBLE" << endl;
//	cout << "Введите начало диапазона для заполнения массива" << endl;
//	cin >> dm_doub_start;
//	cout << "Введите конец диапазона для заполнения массива" << endl;
//	cin >> dm_doub_stop;
//	FillRand(dm_doub_arr, rows, cols, dm_doub_start, dm_doub_stop);
//	PrintAr(dm_doub_arr, rows, cols);
//	cout << "\nСумма двумерного массива типа INT равна " << Summ(dm_doub_arr, rows, cols);
//	cout << "\nСредняя сумма двумерного массива типа INT равна " << SRSumm(dm_doub_arr, rows, cols);
//	cout << "\nМинимальное значение в двумерном массиве типа INT равно " << minValueIn(dm_doub_arr, rows, cols);
//	cout << "\nМаксимальное значение в двумерном массиве типа INT равно " << maxValueIn(dm_doub_arr, rows, cols);
//	cout << "\nВведите на сколько сдвинуть массив вправо " << endl;
//	cin >> sdvig_doub_pravo;
//	cout << "После сдвига вправо" << endl;
//	shiftRight(dm_doub_arr, rows, cols, sdvig_doub_pravo);
//	PrintAr(dm_doub_arr, rows, cols);
//	cout << "\nВведите на сколько сдвинуть массив влево " << endl;
//	cin >> sdvig_doub_levo;
//	cout << "После сдвига влево" << endl;
//	shiftLeft(dm_doub_arr, rows, cols, sdvig_doub_levo);
//	PrintAr(dm_doub_arr, rows, cols);
//	Search(dm_doub_arr, rows, cols);
//	cout << "После сортировки" << endl;
//	SortPyzyr(dm_doub_arr, rows, cols);
//	PrintAr(dm_doub_arr, rows, cols);
//	cout << "Массив из уникальных значений" << endl;
//	UniqueRand(dm_doub_arr, rows, cols, dm_doub_start, dm_doub_stop);
//	PrintAr(dm_doub_arr, rows, cols);
//
//#endif//двумерный массив типа DOUBLE
//
//	cout << delimetr << endl;
//	cout << "Набор функций для двумерного массива типа CHAR" << endl;
//
//#ifdef D_M_CHAR
//
//
//	cout << "Введите начало диапазона для заполнения массива" << endl;
//	cin >> dm_char_start;
//	cout << "Введите конец диапазона для заполнения массива" << endl;
//	cin >> dm_char_stop;
//	FillRand(dm_char_arr, rows, cols, dm_char_start, dm_char_stop);
//	PrintAr(dm_char_arr, rows, cols);
//	cout << "\nСумма двумерного массива типа INT равна ";
//	Summ(dm_char_arr, rows, cols);
//	cout << "\nСредняя сумма двумерного массива типа INT равна ";
//	SRSumm(dm_char_arr, rows, cols);
//	cout << "\nМинимальное значение в двумерном массиве типа INT равно " << minValueIn(dm_char_arr, rows, cols);
//	cout << "\nМаксимальное значение в двумерном массиве типа INT равно " << maxValueIn(dm_char_arr, rows, cols);
//	cout << "\nВведите на сколько сдвинуть массив вправо " << endl;
//	cin >> dm_sdvig_char_pravo;
//	cout << "После сдвига вправо" << endl;
//	shiftRight(dm_char_arr, rows, cols, dm_sdvig_char_pravo);
//	PrintAr(dm_char_arr, rows, cols);
//	cout << "\nВведите на сколько сдвинуть массив влево " << endl;
//	cin >> dm_sdvig_char_levo;
//	cout << "После сдвига влево" << endl;
//	shiftLeft(dm_char_arr, rows, cols, dm_sdvig_char_levo);
//	PrintAr(dm_char_arr, rows, cols);
//	Search(dm_char_arr, rows, cols);
//	cout << "После сортировки" << endl;
//	SortPyzyr(dm_char_arr, rows, cols);
//	PrintAr(dm_char_arr, rows, cols);
//	cout << "Массив из уникальных значений" << endl;
//	UniqueRand(dm_char_arr, rows, cols, dm_char_start, dm_char_stop);
//	PrintAr(dm_char_arr, rows, cols);
//
//#endif

	return 0;
}









