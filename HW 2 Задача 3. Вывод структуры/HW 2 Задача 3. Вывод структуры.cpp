// HW 2 Задача 3. Вывод структуры.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <windows.h>

struct Address
{
    std::string City;
    std::string Street;
    int House_Num;
    int Apartment_Num;
    int Index;
};

void Print(Address Add) {
    std::cout << "Город: " << Add.City << std::endl;
    std::cout << "Улица: " << Add.Street << std::endl;
    std::cout << "Номер дома: " << Add.House_Num << std::endl;
    std::cout << "Номер квартиры: " << Add.Apartment_Num << std::endl;
    std::cout << "Индекс: " << Add.Index << std::endl;
    std::cout << std::endl;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    Address Add1 = {"Москва", "Арбат", 12, 8, 123456};
    Print(Add1);

    Address Add2 = { "Ижевск", "Пушкина", 59, 143, 953769 };
    Print(Add2);

}
