#pragma once
#include"Trading_position.h"
#include"check.h"
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
		void Trading_position_delete(const Trading_position &other) {
			auto it = std::find_if(Stock.begin(), Stock.end(), [other](const Trading_position &tmp) {
				return other.get_product() == tmp.get_product();
				}
			);
			if (it != Stock.end()) {
				Stock.erase(it);

			}
		}
		//��������� �������� ������ �������� ������� � ����� ��������(��� ��������)-->������ ��� ��������
		void Trading_position_change_product(Trading_position &other, std::string new_product) {
			other.set_product(new_product);
		}
		//��������� �������� ������ �������� ������� � ����� ��������(����������)-->������ ���������� 
		void Trading_position_change_amount(Trading_position& other, int new_amount) {
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
		}///������ ��������� ��� �������� ��������
		

		void position_update(check&other) {
			for (auto& el:Stock) {
				
					if (el.get_product() == other.get_name_check()) {
						
						if(el.get_amount() <other.get_amount_check()) {
							
							std::string a ="!!!������!!!-->������: "+ el.get_product() + " �� ������� ��� ����������";
							throw std::exception( a.c_str());
							
						}
						el.set_amount(el.get_amount() - other.get_amount_check());
					}
					
				
				
				
					
				
				
				
			}
						
		}
		



	private:
		std::vector<Trading_position>Stock;
	};
}