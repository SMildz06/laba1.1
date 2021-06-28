// №1.1
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");


    //заполнение массива
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Введите" i + 1 << " э-т массива: "
        cin >> a[i];
    }
   //вывод обычного массива
   cout << "Введенный массив: ";
    for (int i = 0; i < 10; i++) 
        cout << a[i] << " ";
    cout << endl;
    //вывод массива с нулями
    cout << "Измененный массив: ";
    for (int i = 0; i < 10; i++) { 

        if (a[i] % 2 == 0)
            a[i] = 0;
        cout << a[i] << " ";
    }




	return 0;
}