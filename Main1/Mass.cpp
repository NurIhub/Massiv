#include <iostream>
#include <Windows.h>
#include <ctime>

void taks1()
{
	std::cout << "\t\t\t\t\t\t\tЗадание 1\n";
    const int n = 10;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
        std::cout << a[i] << " ";
    }

    int min = a[0];
    int max = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
        if (a[i] > max) {
            max = a[i];
        }
    }

	std::cout << "\nМинимальный элемент: " << min << "\n";
    std::cout << "Максимальный элемент: " << max << "\n";
}

void taks2()
{
	std::cout << "\t\t\t\t\t\t\tЗадание 2\n";
    int n;
    std::cout << "Введите размер массива: ";
    std::cin >> n;

    if (n < 1 || n > 100)
    {
        std::cout << "Размер массива должен быть от 1 до 100";
        return;
    }

    int a[100];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        a[i] = std::rand() % 100;
        std::cout << a[i] << " ";
    }

    int x;
    std::cout << "\nВведите число для сравнения: ";
    std::cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < x)
        {
            sum = sum + a[i];
        }
    }

    std::cout << "Сумма элементов меньше " << x << ": " << sum << std::endl;
}
void taks3()
{
	std::cout << "\t\t\t\t\t\t\tЗадание 3\n";
    int profit[12];

    for (int i = 0; i < 12; i++)
    {
        std::cout << "Введите прибыль за " << i + 1 << " месяц: ";
        std::cin >> profit[i];
    }

    int start, end;

    std::cout << "Введите начальный месяц: ";
    std::cin >> start;

    std::cout << "Введите конечный месяц: ";
    std::cin >> end;

    if (start < 1 || end > 12 || start > end)
    {
        std::cout << "Неверный диапазон месяцев" << "\n";
        return;
    }

    int minMonth = start;
    int maxMonth = start;

    for (int i = start; i < end; i++)
    {
        if (profit[i] < profit[minMonth - 1])
        {
            minMonth = i + 1;
        }

        if (profit[i] > profit[maxMonth - 1])
        {
            maxMonth = i + 1;
        }
    }

    std::cout << "Минимальная прибыль: " << profit[minMonth - 1]
        << ", месяц: " << minMonth << "\n";

    std::cout << "Максимальная прибыль: " << profit[maxMonth - 1]
        << ", месяц: " << maxMonth << "\n";
}

void taks4()
{
	std::cout << "\t\t\t\t\t\t\tЗадание 4\n";
    double sales[3];
    double salary[3];

    for (int i = 0; i < 3; i++)
    {
        std::cout << "Введите продажи менеджера " << i + 1 << ": ";
        std::cin >> sales[i];
    }

    for (int i = 0; i < 3; i++)
    {
        if (sales[i] <= 500)
        {
            salary[i] = 200 + sales[i] * 0.08;
        }
        else if (sales[i] <= 1000)
        {
            salary[i] = 200 + sales[i] * 0.05;
        }
        else
        {
            salary[i] = 200 + sales[i] * 0.03;
        }
    }

    int best = 0;

    for (int i = 1; i < 3; i++)
    {
        if (sales[i] > sales[best])
        {
            best = i;
        }
    }

    salary[best] += 200;

    for (int i = 0; i < 3; i++)
    {
        std::cout << "Зарплата менеджера " << i + 1
            << ": " << salary[i] << " $\n";
    }

    std::cout << "Премию 200 $ получил менеджер "
        << best + 1 << "\n";
}


int main()
{
	int zadanie;
    SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	std::srand(std::time(0));

	std::cout << "Выберите задание (1-4): \n";
	std::cout << "1. Задание 1\n";
	std::cout << "2. Задание 2\n";
	std::cout << "3. Задание 3\n";
	std::cout << "4. Задание 4\n";
	std::cin >> zadanie;
	system("cls");

    if (zadanie == 1)
    {
         taks1();
    }
	if (zadanie == 2)
	{
		taks2();
	}
	if (zadanie == 3)
	{
		taks3();
	}
	if (zadanie == 4)
	{
		taks4();
	}







	return 0;
}