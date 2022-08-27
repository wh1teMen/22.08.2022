#pragma once
#include"employee.h"
#include<vector>
namespace model {
	class Safety_system
	{
	public:
		void add_employee(employee &other) {
			data_employee.emplace_back(other);
		}
		bool find_login(int login) {
			for (auto it : data_employee) 
				if (it.get_login() == login)
					return true;
					return false;
		}



	private:
		std::vector<employee>data_employee;

	};

}