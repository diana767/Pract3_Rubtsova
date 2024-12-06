// Pract3_Rubtsova.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "DoublyLinkedList.h"

int main()
{
    setlocale(LC_ALL, "RU");
    DoublyLinkedList list;
   /* list.push_front(40);
    list.push_front(40);
    list.push_back(30);

    std::cout << "Элементы списка: ";
    list.display(); 

    list.pop_front(); 
    std::cout << "После удаления первого элемента: ";
    list.display(); 

    list.pop_back(); 
    std::cout << "После удаления последнего элемента: ";
    list.display();

    list.pop_back(); 
    std::cout << "После удаления последнего элемента: ";
    list.display(); */

    int a = 0;
    int b;
    while (true) {

        std::cout << "Введите номер в списке , что вы хотите сделать\n 1) Добавить элемент в начало. \n 2) Добавить элемент в конец. \n 3) Удалить элемент с начала. \n 4) Удалить элемент с конца. \n 5) Отобразить список. \n 6) Сортировать список.\n 7) Удалить дубликаты.\n 8)Выйти.\n ";
        std::cin >> a;
        switch (a)
        {
        case 1:
            std::cout << "Введите число для добавления в начало:\n";
            std::cin >> b;
            list.push_front(b);
            break;
        case 2:
            std::cout << "Введите число для добавления в конец:\n";
            std::cin >> b;
            list.push_back(b);
            break;
        case 3:
            list.pop_front();
            std::cout << "Элемент с начала удален.\n";
            break;
        case 4:
            list.pop_back();
            std::cout << "Элемент с конца удален.\n";
            break;
        case 5:
            std::cout << "Список:\n";
            list.display();
            break;
        case 6:
            list.sort();
            std::cout << "Список отсортирован.\n";
            break;
        case 7:
            list.remove_duplicates();
            std::cout << "Дубликаты удалены.\n";
            break;
        case 8:
            std::cout << "Выход из программы.\n";
            return 0;
        default:
            std::cout << "Неверный выбор, попробуйте снова.\n";
            break;
        }
    }
    
   
}

