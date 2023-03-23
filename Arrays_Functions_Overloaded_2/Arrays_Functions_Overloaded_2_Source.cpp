#include <iostream>
using namespace std;
using std::cout;
const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int  ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], double  ROWS, double COLS);
void FillRand(char arr[ROWS][COLS], char ROWS, double COLS);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void UniqueRand(int arr[], const int n);
void UniqueRand(double arr[], const int n);
void UniqueRand(char arr[], const int n);
void UniqueRand(int arr[ROWS][COLS], const int  ROWS, const int COLS);
void Print(const int arr[], const int n);
void Print(const int arr[ROWS][COLS], const int  ROWS, const int COLS);
void Print(double arr[ROWS][COLS], double  ROWS, double COLS);
void Print(char arr[ROWS][COLS], char  ROWS, char COLS);
void Print(double arr[], const int n);
void Print(char arr[], const int n);
int Sum(const int arr[], const int n);
double Sum(double arr[], const int n);
char Sum(char arr[], const int n);
int Sum(const int arr[ROWS][COLS], const int  ROWS, const int COLS);
int Sum(double arr[ROWS][COLS], double  ROWS, double COLS);
int Sum(char arr[ROWS][COLS], char  ROWS, char COLS);
int Avg(const int arr[], const int n);
double Avg(double arr[], const int n);
char Avg(char arr[], const int n);
int Avg(const int arr[ROWS][COLS], const int  ROWS, const int COLS);
int Avg(double arr[ROWS][COLS], double  ROWS, double COLS);
int Avg(char arr[ROWS][COLS], char  ROWS, char COLS);
int minValueIn(const int arr[], const int n);
double minValueIn(double arr[], const int n);
char minValueIn(char arr[], const int n);
int minValueIn(const int arr[ROWS][COLS], const int  ROWS, const int COLS);
double minValueIn(double arr[ROWS][COLS], double ROWS, double COLS);
char minValueIn(char arr[ROWS][COLS], char ROWS, char COLS);
int maxValueIn(const int arr[], const int n);
double maxValueIn(double arr[], const int n);
char maxValueIn(char arr[], const int n);
int maxValueIn(const int arr[ROWS][COLS], const int  ROWS, const int COLS);
double maxValueIn(double arr[ROWS][COLS], double  ROWS, double COLS);
char maxValueIn(char arr[ROWS][COLS], char ROWS, char COLS);
void Sort(int arr[], int const n);
void Sort(char arr[], int const n);
void Sort(int arr[ROWS][COLS], const int  ROWS, const int COLS);
void Sort(double arr[ROWS][COLS], const int  ROWS, const int COLS);
void Sort(char arr[ROWS][COLS], const int  ROWS, const int COLS);
void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftLeft(double arr[], const int n, int number_of_shifts);
void shiftLeft(char arr[], const int n, int number_of_shifts);
void shiftLeft(int arr[ROWS][COLS], const int  ROWS, const int COLS);
void Search(int arr[], const int n);
void Search(double arr[], const int n);
void Search(char arr[], const int n);
//void shiftRight(int arr[], const int n, int number_of_shifts);
//void shiftRight(double arr[], const int n, int number_of_shifts);
//void shiftRight(char arr[], const int n, int number_of_shifts);

//#define ARRAYS_1
#define ARRAYS_2

const int n = 10;
//int arr[] = { 0, 1, 2, 3, 3, 5, 6, 3, 8, 3 };
int arr[n];
int repeat_qty = 0;
void main()
{
	setlocale(LC_ALL, "");

#ifdef ARRAYS_1
	//arr[2] = 123; // обращение к эелементу массива на запись
	//cout << arr[2] << endl; //обращение к эелементу массива на чтение

	int Sum_arr = 0, Mid_arr = 0;
	//cout << "Введите элементы массива: ";
	FillRand(arr, n, 0, 5);
	//UniqueRand(arr, n);
	cout << endl << "Вы ввелли следующие значения массива: ";
	Print(arr, n);
	cout << endl << endl;;
	//Sum(arr, n);
	cout << "Сумма всех элементов массива равна:  " << Sum(arr, n) << endl << endl;
	cout << "Среднее арифмтическое значение элементов массива равно: " << Avg(arr, n) << endl << endl;

	cout << "Максимальное значение элемента массива равно: " << maxValueIn(arr, n) << endl << endl;
	cout << "Минималбное значение элемента массива равно: " << minValueIn(arr, n) << endl << endl;
	Search(arr, n);
	Sort(arr, n);
	Print(arr, n);
	int number_of_shifts;
	//cout << "Введите количество шагов, для сдвига элементов массива: "; cin >> number_of_shifts;
	//shiftLeft(arr, n, number_of_shifts);
	//Print(arr, n);
	//shiftLeft(arr, n, n - number_of_shifts);
	//Print(arr, n);
	//Search(arr, n);
	//Print(arr, n);
	//shiftRight(arr, n, number_of_shifts);
	//Print(arr, n);
#endif 
	int i_arr_2[ROWS][COLS];
	//FillRand(i_arr_2, ROWS, COLS);
	UniqueRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	//Sort(i_arr_2, ROWS, COLS);
	cout << endl;
	//Print(i_arr_2, ROWS, COLS);
	//cout << "Введите количество шагов, для сдвига элементов массива: "; cin >> number_of_shifts;
	//cout << "Sum of i_arr_2 = " << Sum(i_arr_2, ROWS, COLS) << endl;
	//cout << "Минималбное значение элемента массива равно: " << minValueIn(i_arr_2, ROWS, COLS) << endl << endl;
	//cout << "Максимальное значение элемента массива равно: " << maxValueIn(i_arr_2, ROWS, COLS) << endl << endl;



}
void FillRand(int arr[ROWS][COLS], const int  ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}

}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;

	}
}
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;

	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[ROWS][COLS], double  ROWS, double COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}

}
void FillRand(char arr[ROWS][COLS], char ROWS, double COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}

}

void UniqueRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j]) { i--; break; }
		}
	}
}
void UniqueRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j]) { i--; break; }
		}
	}
}
void UniqueRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j]) { i--; break; }
		}
	}
}
void UniqueRand(int arr[ROWS][COLS], const int  ROWS, const int COLS)
{
	/*/for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
			if (arr[i][j] == arr[j][i]) { i--; break; }
		}
	}*/
}


void Print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl << endl;
}
void Print(const int arr[ROWS][COLS], const int  ROWS, const int COLS)
{
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				cout << arr[i][j] << "\t";
			}
			cout << endl;
		}


	}

}
void Print(double arr[ROWS][COLS], double  ROWS, double COLS)
{
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				cout << arr[i][j] << "\t";
			}
			cout << endl;
		}


	}

}
void Print(char arr[ROWS][COLS], char  ROWS, char COLS)
{
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				cout << arr[i][j] << "\t";
			}
			cout << endl;
		}


	}

}

void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl << endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl << endl;
}


int Sum(const int arr[], const int n)
{
	int Sum_arr = 0;
	for (int i = 0; i < n; i++)
	{
		Sum_arr += arr[i];
	}
	return Sum_arr;
}
double Sum(double arr[], const int n)
{
	double Sum_arr = 0;
	for (int i = 0; i < n; i++)
	{
		Sum_arr += arr[i];
	}
	return Sum_arr;
}
char Sum(char arr[], const int n)
{
	char Sum_arr = 0;
	for (int i = 0; i < n; i++)
	{
		Sum_arr += arr[i];
	}
	return Sum_arr;
}
int Sum(const int arr[ROWS][COLS], const int  ROWS, const int COLS)
{
	int Sum_arr = 0;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Sum_arr += arr[i][j];

		}
		cout << endl;
	}
	return Sum_arr;
}
int Sum(double arr[ROWS][COLS], double  ROWS, double COLS)
{
	double Sum_arr = 0;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Sum_arr += arr[i][j];

		}
		cout << endl;
	}
	return Sum_arr;
}
int Sum(char arr[ROWS][COLS], char  ROWS, char COLS)
{
	char Sum_arr = 0;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Sum_arr += arr[i][j];

		}
		cout << endl;
	}
	return Sum_arr;
}


int Avg(const int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
char Avg(char arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
int Avg(const int arr[ROWS][COLS], const int  ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / n;
}
int Avg(double arr[ROWS][COLS], double  ROWS, double COLS)
{
	return (double)Sum(arr, ROWS, COLS) / n;
}
int Avg(char arr[ROWS][COLS], char  ROWS, char COLS)
{
	return (double)Sum(arr, ROWS, COLS) / n;
}

int minValueIn(const int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) { min = arr[i]; }
	}
	return min;
}
double minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) { min = arr[i]; }
	}
	return min;
}
char minValueIn(char arr[], const int n)
{
	char min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) { min = arr[i]; }
	}
	return min;
}
int minValueIn(const int arr[ROWS][COLS], const int  ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) { min = arr[i][j]; }

		}
	}
	return min;
}
double minValueIn(double arr[ROWS][COLS], double ROWS, double COLS)
{
	double min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) { min = arr[i][j]; }

		}
	}
	return min;
}
char minValueIn(char arr[ROWS][COLS], char ROWS, char COLS)
{
	char min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) { min = arr[i][j]; }

		}
	}
	return min;
}


int maxValueIn(const int arr[], const int n)
{
	int max = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (max < arr[i]) { max = arr[i]; }
	}
	return max;
}
double maxValueIn(double arr[], const int n)
{
	double max = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (max < arr[i]) { max = arr[i]; }
	}
	return max;
}
char maxValueIn(char arr[], const int n)
{
	char max = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (max < arr[i]) { max = arr[i]; }
	}
	return max;
}
int maxValueIn(const int arr[ROWS][COLS], const int  ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 1; i <= ROWS; i++)
	{
		for (int j = 1; j <= COLS; j++)
		{
			if (arr[i][j] > max) { max = arr[i][j]; }

		}
		return max;
	}

}
double maxValueIn(double arr[ROWS][COLS], double  ROWS, double COLS)
{
	double max = arr[0][0];
	for (int i = 1; i <= ROWS; i++)
	{
		for (int j = 1; j <= COLS; j++)
		{
			if (arr[i][j] > max) { max = arr[i][j]; }

		}
		return max;
	}

}
char maxValueIn(char arr[ROWS][COLS], char ROWS, char COLS)
{
	char max = arr[0][0];
	for (int i = 1; i <= ROWS; i++)
	{
		for (int j = 1; j <= COLS; j++)
		{
			if (arr[i][j] > max) { max = arr[i][j]; }

		}
		return max;
	}

}

void Sort(int arr[], int const n)
{
	for (int i = 0; i < n; i++)
	{
		//Счетчик 'i' выбирает элемент, в который нужно поместить минимальное значение из перебираемых элементов

		for (int j = i + 1; j < n; j++)
		{
			//Счетчик 'j' перебирает элементы в поисках минимального
			// arr[i] - выбранный элемент
			// arr[j] - перебираемый элемент
			if (arr[j] < arr[i])
			{
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];
			}
		}
	}
}
void Sort(char arr[], int const n)
{
	for (int i = 0; i < n; i++)
	{

		for (int j = i + 1; j < n; j++)
		{

			if (arr[j] < arr[i])
			{
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];
			}
		}
	}
}
void Sort(int arr[ROWS][COLS], const int  ROWS, const int COLS)
{
	
}
void Sort(double arr[ROWS][COLS], const int  ROWS, const int COLS)
{
	
}
void Sort(char arr[ROWS][COLS], const int  ROWS, const int COLS)
{
	
}

void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)     // n - number_of-shits
	{
		int temp = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = temp;
	}

}
void shiftLeft(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int temp = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = temp;
	}

}
void shiftLeft(char arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int temp = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = temp;
	}

}
void shiftLeft(int arr[ROWS][COLS], const int  ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		int temp = arr[0][0];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < COLS; j++)

			{
				arr[i][j] = arr[i + 1][j + 1];

				arr[n - 1][j - 1] = temp;
			}
		}
	}
}
/*void shiftRight(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int temp = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = temp;
	}

}
void shiftRight(double arr[], const int n, int number_of_shifts)
{
for (int i = 0; i < number_of_shifts; i++)
{
int temp = arr[n - 1];
for (int i = n - 1; i > 0; i--)
{
arr[i] = arr[i - 1];
}
arr[0] = temp;
}
}
void shiftRight(char arr[], const int n, int number_of_shifts)
{
for (int i = 0; i < number_of_shifts; i++)
{
int temp = arr[n - 1];
for (int i = n - 1; i > 0; i--)
{
arr[i] = arr[i - 1];
}
arr[0] = temp;
}
}*/

void Search(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;// предположем, что искомое число не встречалась ранее, но нужно проверить
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true; // запоминаем то, что число уже встречалось
				break;
			}
		}
		if (met_before) continue;
		int repeat_qty = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				repeat_qty++;
			}

		}
		if (repeat_qty)printf("значение %i повторяется %i раз\n", arr[i], repeat_qty);
		//if (repeat_qty) cout << "число " << arr[i] << " повторилось " << repeat_qty << " раз(а)" << endl;
	}


	cout << endl;
}
void Search(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;// предположем, что искомое число не встречалась ранее, но нужно проверить
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true; // запоминаем то, что число уже встречалось
				break;
			}
		}
		if (met_before) continue;
		int repeat_qty = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				repeat_qty++;
			}

		}
		if (repeat_qty)printf("значение %i повторяется %i раз\n", arr[i], repeat_qty);
		//if (repeat_qty) cout << "число " << arr[i] << " повторилось " << repeat_qty << " раз(а)" << endl;
	}


	cout << endl;
}
void Search(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;// предположем, что искомое число не встречалась ранее, но нужно проверить
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true; // запоминаем то, что число уже встречалось
				break;
			}
		}
		if (met_before) continue;
		int repeat_qty = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				repeat_qty++;
			}

		}
		if (repeat_qty)printf("значение %i повторяется %i раз\n", arr[i], repeat_qty);
		//if (repeat_qty) cout << "число " << arr[i] << " повторилось " << repeat_qty << " раз(а)" << endl;
	}


	cout << endl;
}


