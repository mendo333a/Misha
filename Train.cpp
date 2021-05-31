// Train.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
 
 int h1, m1, h2, m2, h3, m3, N1, kh, km, N2; // Объявление переменных

 std::cout << "Hello!\n";
 
 std::cout << "Enter the hours of departure: ";
 std::cin >> h1; // присваиваем введенное значение часам отправления

 std::cout << "Enter the minutes of departure: ";
 std::cin >> m1; // присваиваем введенное значение минутам отправления

 std::cout << "Enter the time on the road, hours: ";
 std::cin >> h2; // присваиваем введенное значение часам в пути

 std::cout << " Enter the time on the road, minutes: ";
 std::cin >> m2; // присваиваем введенное значение минутам в пути

 N1 = 1;

   if (h1 < 0 && h1 > 24) {
    std::cout << "Enter the hours of departure anew: ";
    std::cin >> h1; // присваиваем введенное значение часам отправления
   }

   if (m1 < 0 && m1 > 60) {
    std::cout << "Enter the minutes of departure anew: ";
    std::cin >> m1; // присваиваем введенное значение минутам отправления
   }

   if (h2 < 0) {
    std::cout << "Enter the hours on the road anew: ";
    std::cin >> h2; // присваиваем введенное значение часам в пути
   }

   if (m2 < 0 && m2 > 60) {
    std::cout << "Enter the hours on the road anew: ";
    std::cin >> m2; // присваиваем введенное значение минутам в пути
   }

   m3 = m1 + m2;
   h3 = h1 + h2;

   if (m3 >= 60) {
      km = int (m3/60);
      m3 = int (m3%60);
      h3 = h3 + km;
   }
   else {
       m3 = m3;
   }
 
   if (h3 >= 24) {
       kh = int (h3 / 24);
       h3 = int (h3 % 24);
       N2 = N1 + kh;
   }
   else {
       h3 = h3;
       N2 = N1;
   }
 
 std::cout << "Date of arrival at the station:" << N2 << std::endl;
 std::cout << "Time of arrival at the station, hours:" << h3 << std::endl;
 std::cout << "Time of arrival at the station, minutes:" << m3 << std::endl;

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
