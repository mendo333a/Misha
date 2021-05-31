// Buble_sort_int.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <string>
using namespace std;

int i, k, obmen, id;
int* massiv, n;

void vvod_massiva (int n)
{
	massiv = new int[n];

	for (i = 0; i < n; ++i) { // Ввод значения элементов массива */

		cout << "massiv[" << i + 1 << "]= ";
		cin >> massiv[i];
	}
	
	cout << "Source array: "; // Вывод исходного массива (без сортировки) 

	for (i = 0; i < n; ++i) {
		cout << massiv[i] << " ";
	}

	cout << endl;

	return;
}

void bubble_sort(int n) {

	for (i = 0; i < n; ++i) {              // cортировка по возрастанию

		for (k = 0; k < n - i - 1; k++) {

			if (massiv[k] > massiv[k + 1]) {

			 obmen = massiv[k];           // oбмен элементов массива местами через временную переменную obmen
			 massiv[k] = massiv[k + 1];
			 massiv[k + 1] = obmen;
			}
		}
	}
}

void vivod_massiva (int n) {
	
	cout << endl;
	cout << "Bubble sorted array: "; // вывод отсортированного массива

	for (i = 0; i < n; ++i) {

		cout << massiv[i] << " ";
	}

	cout << endl<<endl;

}

int main()
{

	cout << "This is the program for bubblt sort of array. ";  // определяем размер массива - количество его элементов
	cout << endl << endl ;

	do {

		cout << "Enter size of array: ";  // определяем размер массива - количество его элементов
		cin >> n;

		if (n <= 0) {   // проверка: азмер масива должен быть больше 0
			cout << "You entered the wrong size. The of array must be more 0\n";
			cout << "Try again";
			cout << "Enter size of array: ";
			cin >> n;
		}

		vvod_massiva(n);  // вызов процедуры ввода элементов массива

		bubble_sort(n); // вызов процедуры пузырьковой сортировки

		vivod_massiva(n); // +++
		
		cout << "Continue bubble sort for another array?: 0 - no; 1 - yes: ";
		cin >> id;

		cout << endl;
	
	} while (id > 0);

 delete[] massiv; // освобождение памяти;
 // system("pause"); // система просит нажать любую кнопку для продолжения
 
 return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
