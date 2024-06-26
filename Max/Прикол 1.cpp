#include <iostream>
#include <set>
#include<algorithm>
#include<windows.h>
#include<ctime>

using namespace std;

int main() 
{

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    srand(time(0));
    set<int> set1;
    set<int> set2;
    set<int> per, ob, raz;
    int g,z;
    
    // заполняем первое множество
    for (int i =0; i <= 16; i++)
    {
       int j = -50 + rand() % 100;
       set1.insert(j);
    }

    // заполняем второе множество
    for (int i = 0; i <= 16; i++) {
        int j = -10 + rand() % 110;
        set2.insert(j);
    }

    // выводим содержимое множеств
    cout << "Первое множество: \n";
    copy(set1.begin(), set1.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << "Второе множество: \n";
    copy(set2.begin(), set2.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(per, per.begin()));//пересечение множеств
    cout << "Пересечением множеств является множество \n";
    copy(per.begin(), per.end(), ostream_iterator<int>(cout, " "));//вывод пересечения
    cout << endl;
    set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(ob, ob.begin()));//объединение множеств
    cout << "Объединением множеств является множество \n";
    copy(ob.begin(), ob.end(), ostream_iterator<int>(cout, " "));//вывод объединения
    cout << endl;
    set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(raz, raz.begin()));//разность множеств
    cout << "Разностью множеств является множество \n";
    copy(raz.begin(), raz.end(), ostream_iterator<int>(cout, " "));//вывод разности
    cout << endl;
    if (set1 == set2)
    {
        cout << "\nМножества эквивалентны.\n";
    }
    else
    {
        cout << "\nМножества неэквивалентны.\n";
    }

    cout << "Введите элемент для поиска ";
    cin >> g;
    
    if (set1.count(g) > 0)
    {
        cout << "Число найдено " << endl;
    }
    else
    {
            cout << "Число не найдено " << endl;
    }
    
    
if (set2.count(g) > 0) 
{
    cout << "Число найдено" << endl;
}
else
{
    cout << "Число не найдено" << endl;
}
    cout << "Введите элемент для исключения";
    cin >> z;
    set1.erase(z);
    set2.erase(z);
    cout << "Первое множество: \n";
    copy(set1.begin(), set1.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << "Второе множество: \n";
    copy(set2.begin(), set2.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

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
