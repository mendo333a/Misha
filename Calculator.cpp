// Calculator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

int main()
{
    int k, d1,k1;
    double d, a, b; // Объявление переменных
    std::string zn;

    std::cout << "Hello!\n";

    do { std::cout << "Enter the a: ";
         std::cin >> a; // присваиваем введенное значение a

            if (std::cin.fail()) {// если предыдущее извлечение оказалось неудачным,
                std::cin.clear(); // то возвращаем cin в 'обычный' режим работы
                std::cin.ignore(32767, '\n'); // и удаляем значения предыдущего ввода из входного буфера
                std::cout << "That input is invalid.  Try again.\n";
                std::cout << "Enter the a: ";
                std::cin >> a; // присваиваем введенное значение a
            }

                   
        std::cout << "Enter the b: ";
        std::cin >> b; // присваиваем введенное значение b
           if (std::cin.fail()) {// если предыдущее извлечение оказалось неудачным,
               std::cin.clear(); // то возвращаем cin в 'обычный' режим работы
               std::cin.ignore(32767, '\n'); // и удаляем значения предыдущего ввода из входного буфера
               std::cout << "That input is invalid.  Try again.\n";
               std::cout << "Enter the b: ";
               std::cin >> b; // присваиваем введенное значение b
           }
           
          
        std::cout << "Enter math action sign: +, -, /, *, //, % : ";
        std::cin >> zn; // присваиваем введенное значение zn

        if (zn == "+") {
            d = a + b;
            std::cout << "Sum of numbers: d= a + b = " << d << std::endl;
        }

        if (zn == "-") {
            d = a - b;
            std::cout << "Difference of numbers: d= a - b = " << d << std::endl;
        }

        if (zn == "/") {
            d = a / b;
            std::cout << "Division of numbers: d= a / b = " << d << std::endl;
        }

        if (zn == "*") {
            d = a * b;
            std::cout << "Multiplication of numbers: d= a * b = " << d << std::endl;
        }

        if (zn == "//") {
            d1 = int(a / b);
            std::cout << "Integer from division of numbers: d= a div b = " << d1 << std::endl;
        }

        if (zn == "%") {
            d1 = int(a / b);
            d = a - d1 * b;
            std::cout << "Remainder of division of numbers: d= a mod b = " << d << std::endl;
        }

        std::cout << "Сontinue calculations?: 0 - no; 1 - yes: ";
        std::cin >> k;

    } while (k > 0);

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
