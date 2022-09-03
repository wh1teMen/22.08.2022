#pragma once
#include<iostream>

#include <string>
namespace model {
	class employee {

		
	public:
		//���������� ��������� << ��� ������ ������� ���������
		friend std::ostream& operator<<(std::ostream& out, const employee& obj) {
				out << obj.login_ << ' ' << obj.name_ << ' ' << obj.surname_ << ' ' <<
				obj.patronymic_ << ' '<<obj.num_passport_<<" ";
			return out;
		}

		employee() = default;
		//����������� ������(�����,���,�������,��������,����� ��������)
		employee(int login, std::string surname, std::string name,  std::string patronymic, int num_passport) :login_(login), name_(name), surname_(surname),
			patronymic_(patronymic), num_passport_(num_passport) {
		}
		//�������� ���
		void set_name(std::string name) {
			name_ = name;
		}
		//���������� ��� 
		std::string get_name() {
			return name_;
		}
		//�������� �������
		void set_surname(std::string surname) {
			surname_ = surname;
		}
		//���������� �������
		std::string get_surname() {
			return surname_;
		}
		//�������� ��������
		void set_patronamic(std::string patronymic) {
			patronymic_ = patronymic;
		}
		//���������� ��������
		std::string get_patronamyc() {
			return patronymic_;
		}
		//�������� ����� ��������
		void set_num_passport(int num_passport) {
			num_passport_ = num_passport;
		}
		//���������� ����� ��������
		int get_num_passport() {
			return num_passport_;
		}
		//��������� �����
		void set_login(int login) {
			login_= login;
		}
		//���������� �����
		int get_login() {
			return login_;
		}


	private:
		std::string name_;//���
		std::string surname_;//�������
		std::string patronymic_;//��������
		int login_;//�����
		int num_passport_;//����� ��������

	};

	
}
