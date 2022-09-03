#pragma once
#include<iostream>
#include <chrono>
#include <ctime>  
#include<vector>
#include"Trading_position.h"
#include<string>
#include<iostream>


namespace model{
class check {
public:
	Trading_position operator [](int i) {
		return Check[i];
	}
	
	check() = default;
	check(std::string time,std::string counterparty):time_(time),counterparty_(counterparty){}

	//�������� ������� � ���
	void Trading_position_add(Trading_position &other) {
		Check.emplace_back(other);
	}
	//������� ���
	void Trading_position_delete(Trading_position &other) {
		Check.clear();
	}
	//�������� ����� 
	void set_time(std::string time){
		time_ = time;
	}
	std::string get_time() {
		return time_;
	}
	//�������� �����������
	void set_counterparty(std::string counterparty) {
		counterparty_ = counterparty;
	}
	std::string  get_counterparty() {
		return counterparty_;
	}
	void show_check(Trading_position&other) {
		std::cout <<"\n��������:\t"<< other.get_product() << "\n����������:\t" << other.get_amount() <<
			"\n���� ��������:\t" << other.get_delivery_price() << "\n"<<"�����:\t\t"<<check::get_time()<<"\n"
			<<"����������:\t"<<check::get_counterparty()<<std::endl;

	}
	int payment(Trading_position& other) {
		
		  int amount = other.get_amount();
		  return amount;
	
			
	}
	

private:
	
	std::string time_;
	std::string counterparty_;
	std::vector<Trading_position>Check;
	};

}