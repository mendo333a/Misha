// Fir_tree.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

int main()
{

    long n_str;
    int i, k, id;
    char symb;
    std::string str;

    std::cout << "Welcome to the Fir-Tree drawing program\n";
    std::cout << "To draw a spruce, you need to set its height (from -20 to 20),\n";
    std::cout << "as well as the symbol it will consist of(*, =, +, -and so on).\n";
    std::cout << "Well? Go!!!\n";

    do {

        i = 0;
        k = 0;

        std::cout << "Enter Fir-Tree height (number of raws): ";
        std::cin >> n_str; // высота елки в строках

        if (n_str < -20 || n_str>20) {
            std::cout << "You entered the wrong number. The number must be in the range -20 to 20\n";
            std::cout << "Try again";
            std::cout << "Enter Fir-Tree height (number of raws): ";
            std::cin >> n_str;
        }

        std::cout << "Enter type of symbol: ";
        std::cin >> symb; // принимаем введенный сисмвол

        if (n_str >= -20 && n_str <= 20) {

            if (n_str >= 0) {

                while (i < n_str)
                {
                    str.append(n_str - i - 1, ' ');
                    str.append(2 * i + 1, symb);
                    std::cout << str << std::endl;
                    str.clear();
                    i++;
                }

            }

            if (n_str < 0) {
                n_str = abs(n_str);
                i = n_str - 1;

                while (k < n_str)
                {
                    str.append(n_str - i - 1, ' ');
                    str.append(2 * i + 1, symb);
                    std::cout << str << std::endl;
                    str.clear();
                    i = i - 1;
                    k++;
                }

            }


        }

        std::cout << "Сontinue drawing?: 0 - no; 1 - yes: ";
        std::cin >> id;

    } while (id > 0);

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
