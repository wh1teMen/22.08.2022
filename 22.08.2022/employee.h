#pragma once
#include<iostream>

#include <string>
namespace model {
	class employee {

		
	public:
		//перегрузка оператора << для вывода объекта сотрудник
		friend std::ostream& operator<<(std::ostream& out, const employee& obj) {
				out << obj.login_ << ' ' << obj.name_ << ' ' << obj.surname_ << ' ' <<
				obj.patronymic_ << ' '<<obj.num_passport_<<" ";
			return out;
		}

		employee() = default;
		//конструктор класса(логин,имя,фамилия,отчество,номер паспорта)
		employee(int login, std::string surname, std::string name,  std::string patronymic, int num_passport) :login_(login), name_(name), surname_(surname),
			patronymic_(patronymic), num_passport_(num_passport) {
		}
		//добавить имя
		void set_name(std::string name) {
			name_ = name;
		}
		//возвращает имя 
		std::string get_name() {
			return name_;
		}
		//добавить фамилию
		void set_surname(std::string surname) {
			surname_ = surname;
		}
		//возвращает фамилию
		std::string get_surname() {
			return surname_;
		}
		//добавить отчество
		void set_patronamic(std::string patronymic) {
			patronymic_ = patronymic;
		}
		//возвращает отчество
		std::string get_patronamyc() {
			return patronymic_;
		}
		//добавить номер паспорта
		void set_num_passport(int num_passport) {
			num_passport_ = num_passport;
		}
		//возвращает номер паспорта
		int get_num_passport() {
			return num_passport_;
		}
		//добавляет логин
		void set_login(int login) {
			login_= login;
		}
		//возвращает логин
		int get_login() {
			return login_;
		}


	private:
		std::string name_;//имя
		std::string surname_;//фамилия
		std::string patronymic_;//отчесвто
		int login_;//логин
		int num_passport_;//номер паспорта

	};

	
}
