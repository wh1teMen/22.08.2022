#pragma once
#include"employee.h"
#include<vector>
namespace model {
	class Safety_system
	{
	public:
		void set_employee(employee &other) {
			data_employee.emplace_back(other);
		}
		//void set_employee_add()



	private:
		std::vector<employee>data_employee;

	};

}