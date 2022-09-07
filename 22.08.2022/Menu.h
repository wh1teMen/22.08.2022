#pragma once
#include <iostream>
#include"check.h"
#include"employee.h"
#include"Product.h"
#include"Safety_system.h"
#include"Stock.h"
#include"Trading_position.h"
#include <string>
using namespace model;
class Menu
{
public:
	Menu(Safety_system *obj):safety_one(obj) {}

	Safety_system *safety_one;
	Safety_system *get_safety_system() {
		return safety_one;
	}
 	void menu() {
		

		std::cout << "[1]¬ход";
		int button;
		std::cin >> button;
		switch (button)
		{
			case 1:
				int login;
				std::cout << "¬ведите логин: "; std::cin >> login;
				if (safety_one->find_login(login) == true) {
					std::cout << "входите";
				}
				else std::cout << "нет входа";
			 
			default:
				break;
		}

}





};

