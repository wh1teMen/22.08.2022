#pragma once
#include"Trading_position.h"
//#include"check"
#include<vector>
namespace model {
	//����� �����
	class Stock
	{
	public:
		//�������� �������� ������� �� �����
		void Trading_position_add(Trading_position &other) {
			Stock.emplace_back(other);
		}
		//������� �������� �������
		void Trading_position_delete(Trading_position &other) {
			Stock.clear();
		}
		//��������� �������� ������ �������� ������� � ����� ��������(��� ��������)-->������ ��� ��������
		void Trading_position_change_product(Trading_position &other, std::string new_product) {
			other.set_product(new_product);
		}
		//��������� �������� ������ �������� ������� � ����� ��������(����������)-->������ ���������� 
		void Trading_position_change_amount(Trading_position &other, int new_amount) {
			other.set_amount(new_amount);
		}
		//�������� �������� ������ �������� ������� � ����� ��������(���� ����������)-->������ ���� ����������
		void Trading_position_change_implementation_period(Trading_position &other, int new_implementation_period) {
			other.set_implementation_period_(new_implementation_period);
		}
		//�������� �������� ������ �������� ������� � ����� ��������(���� ��������)-->������ ���� ��������
		void Trading_position_change_delivery_price_(Trading_position &other, int new_delivery_price_) {
			other.set_delivery_price(new_delivery_price_);
		}
		//����� ����������� ������
		void show_stock() {
			std::cout << "\n���������� ������:\n";
			for (auto& el :Stock) {
				std::cout << el.get_product()<<" " << el.get_amount() <<" ��"<< std::endl;
			}
		}

		/*void position_update(check&other) {
			
				
			
			
			
			


		}*/
		



	private:
		std::vector<Trading_position>Stock;
	};
}