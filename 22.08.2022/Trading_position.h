#pragma once
#include<string>
#include <iostream>
namespace model {
	//����� �������� �������
	class Trading_position
	{
	public:
		friend std::ostream& operator<<(std::ostream& out, const Trading_position& obj) {
			out << obj.product_ << ' ' << obj.amount_ << ' ' << obj.implementation_period_ << ' ' <<
				obj.delivery_price_ << ' '; 
			return out;
		}
		bool operator ==(const  Trading_position &other) {
			return this->product_ == other.product_ && this->amount_ == other.amount_ && this->implementation_period_ == other.implementation_period_ && this->delivery_price_ == other.delivery_price_;

		}
		Trading_position() = default;
		//����������� (��� ��������,����������,���� ����������,���� ��������)
		Trading_position(std::string product, int amount, int implementation_period, int delivery_price) :
			product_(product), amount_(amount),
			implementation_period_(implementation_period), delivery_price_(delivery_price) {}
		//���������� ���� ��������
		void set_product(std::string product) {
			product_ = product;
		}
		//���������� ��� �������
		std::string get_product()const {
			return product_;
		}
		//���������� ���������� ��������
		void set_amount(int amount) {
			amount_ = amount;
		}
		//���������� ���������� ��������
		int get_amount() {
			return amount_;
		}
		//��������� ����� ����������
		void set_implementation_period_(int implementation_period) {
			implementation_period_ = implementation_period;
		}
		//���������� ���� ����������� ������
		int get_implementation_period() {
			return implementation_period_;
		}
		//��������� ���� ��������
		void set_delivery_price(int delivery_price) {
			delivery_price_ = delivery_price;
		}
		//���������� ���� ��������
		int get_delivery_price() {
			return delivery_price_;
		}
	private:
		std::string product_;//��� ��������
		int amount_; //���-��
		int implementation_period_;//���� ����������
		int delivery_price_; //���� ��������
	};
}

