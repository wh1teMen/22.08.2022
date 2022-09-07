#pragma once
#include"employee.h"
#include<vector>
#include <iostream>
namespace model {
	// ласс Ѕезопасность
	class Safety_system
	{
	public:

		//добавл€ет нового работника
		void add_employee(employee &other) {
			data_employee.emplace_back(other);
		}
		//поиск по логину, возвращает булевое значение есть 1, нету 0
		bool find_login(int login) { 
			for (auto it : data_employee)
				if (it.get_login() == login)
					return true;
					return false;
		}
		//удаление работника
		void delite_employee(int login) {
			auto it = std::find_if(data_employee.begin(), data_employee.end(),
				[login](employee& other)->bool {return other.get_login() == login; });
			if (it != data_employee.end()) {
				std::cout << "–аботник удален..." << std::endl;
				data_employee.erase(it);
			}
			else std::cout << "“акого работника нету"<<std::endl; 
		

		}
	
		
		//выводит список сотрудников
		void show_employee() {
			std::cout << "—писок сотрудников: " << std::endl;
			for (auto& el : data_employee) {
				std::cout<<el<<std::endl;
			}
		}
	private:
		std::vector<employee>data_employee;//массив работников

	};
}