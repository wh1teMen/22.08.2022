#include <iostream>
#include"check.h"
#include"employee.h"
#include"Product.h"
#include"Safety_system.h"
#include"Stock.h"
#include"Trading_position.h"
#include <string>
#include"Menu.h"
using namespace model;

int main()
{
    system("chcp 1251>nul");
	
   Safety_system safety_one; //объект безопасности
   
    //создание сотрудников
    employee sotrudnik_1(111, "Иванов","Иван", "Иванович", 4412);
    employee sotrudnik_2(435, "Петров", "Олег", "Дмитриевич",8933);
    employee sotrudnik_3(901, "Сергеев", "Николай", "Владимирович", 8933);
   employee director(777, "Владимирович", "Владимир", "Путин", 7777);
    /*********************************************************************************************/
   //    
   // //добавление сотрудников
    safety_one.add_employee(sotrudnik_1);//добавляем сотрудника
    safety_one.add_employee(sotrudnik_2);
    safety_one.add_employee(sotrudnik_3);
    safety_one.add_employee(director);
	Menu a(&safety_one);
	a.menu();
   // //выводим список сотрудников
   // safety_one.show_employee();
   // //поиск сотрудника по логину
   // safety_one.find_login(144) == true ? std::cout << "\nСотрудника с таким логином есть\n" :
   // std::cout << "\nСотрудника с таим логином нету\n";
   // /*********************************************************************************************/

   // //создаем обект торговой позиции
   // Trading_position flowers("flowers", 70, 12, 43);
   // Trading_position toy("toy", 100, 90, 3500);

   // //создаем продукт
   // Product rose("rose", "blue", 50);
   // Product toys_bear("bear", "white", 1000);

   // //создаем объект чек
   //

   // /*********************************************************************************************/
   // //Склад
   // Stock stock_1;
   // stock_1.Trading_position_add(flowers);//добавление на склад  цветов
   // stock_1.Trading_position_add(toy); //добавление на склад игрушки
   // stock_1.show_stock();//вывод содержимого склада
   // /*********************************************************************************************/

   // check check1("13:00", "газпром",flowers);
   // check check2("13:00", "Лукойл", toy);
   // //добавить в чек, объект торговой позиции цветы

   // check1.Trading_position_add(flowers,90);
   // check2.Trading_position_add(toy, 65);
   // //вывод чека
   // check1.show_check(flowers);
   // check2.show_check(toy);
   // std::cout << std::endl;
   // //убирает позиции
   // try {
   //     stock_1.position_update(check1);
   //     stock_1.position_update(check2);
   // }
   // catch (const std::exception& ex) {
   //     std::cout << ex.what() << std::endl;
   // }




   //stock_1.show_stock();//вывод содержимого склада









    system("pause>nul");
    return 0;
}

