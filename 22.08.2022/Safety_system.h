#pragma once
#include"employee.h"
#include<vector>
#include <iostream>
namespace model {
	//����� ������������
	class Safety_system
	{
	public:

		//��������� ������ ���������
		void add_employee(employee &other) {
			data_employee.emplace_back(other);
		}
		//����� �� ������, ���������� ������� �������� ���� 1, ���� 0
		bool find_login(int login) { 
			for (auto it : data_employee)
				if (it.get_login() == login)
					return true;
					return false;
		}
		//�������� ���������
		void delite_employee(int login) {
			auto it = std::find_if(data_employee.begin(), data_employee.end(),
				[login](employee& other)->bool {return other.get_login() == login; });
			if (it != data_employee.end()) {
				std::cout << "�������� ������..." << std::endl;
				data_employee.erase(it);
			}
			else std::cout << "������ ��������� ����"<<std::endl; 
		

		}
	
		
		//������� ������ �����������
		void show_employee() {
			std::cout << "������ �����������: " << std::endl;
			for (auto& el : data_employee) {
				std::cout<<el<<std::endl;
			}
		}
	private:
		std::vector<employee>data_employee;//������ ����������

	};
}