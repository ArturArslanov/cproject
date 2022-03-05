// First.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <string>
#include <vector>

int cycle_for(int b)
{
    int i;
    int s0 = 0;

    for (i = 1; i <= b; i++)
    {
        s0 = s0 + i;
    }
    std::cout << s0 << std::endl;
    return 0;

}
int cycle_while(int b) {
    int i = 0;
    int s0 = 0;
    while (i < b) {
        i = i+2;
        s0 += i;    
    }
    std::cout <<s0 << std::endl; 
    return 0;
}
int any() {
    using namespace std;
    int b;
    cin >> b;
    if (b < 10) {  // Если введенное число меньше 10.
        cout << "bit 10." << endl;
    }
    else if (b == 10) {
        cout << "equivalent 10." << endl;
    }
    else {  // иначе
        cout << "bigger 10." << endl;
    }
    cycle_for(b);
    cycle_while(b);
    return 0;
}
int massive() {
    std::string students[10] = {
        "Ivanov", "Петров", "Сидоров",
        "Ахмедов", "Ерошкин", "Выхин",
        "Андеев", "Вин Дизель", "Картошкин", "Чубайс"
    };
    std::cout << students[0] << std::endl;

    return 0;
}

int dinamic()
{
    using namespace std;
    int *a = new int; // Объявление указателя для переменной типа int
    int *b = new int(5); // Инициализация указателя

    *a = 10;
    *b = *a + *b;

    cout << "b is " << *b << endl;
    cout << &a << endl;

    delete b;
    delete a;
    return 0;
}
int massive2()
{
    using namespace std;
    int n;
    cin >> n;
    int *arr = new int[n];
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << arr[0] << "    " << arr[n-1];
    return 0;
}   

int massive3()
{

    std::vector<int> v1(10,1);
    std::cin >> v1[2];
    std::cout << v1[0] << std::endl;
    std::cout << v1[2] << std::endl;
    v1.push_back(999);
    std::cout << v1.size() << std::endl << v1[v1.size() - 1] << std::endl;
    v1.pop_back();
    std::cout << v1.size() << std::endl << v1[v1.size() - 1] << std::endl;

    return 0;

}
int main()
{
    std::cout << "Hello World!\n";
    // any();
    //massive();
    //dinamic();
    //massive2();
    massive3();
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
