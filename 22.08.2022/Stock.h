#pragma once
#include"Trading_position.h"
//#include"check"
#include<vector>
namespace model {
	//Класс Склад
	class Stock
	{
	public:
		//добавить торговую позицию на склад
		void Trading_position_add(Trading_position &other) {
			Stock.emplace_back(other);
		}
		//удалить торговую позицию
		void Trading_position_delete(Trading_position &other) {
			Stock.clear();
		}
		//принимает торговую объект торговой позиции и новое значение(тип продукта)-->меняет тип продукта
		void Trading_position_change_product(Trading_position &other, std::string new_product) {
			other.set_product(new_product);
		}
		//принимает торговую объект торговой позиции и новое значение(количество)-->меняет количество 
		void Trading_position_change_amount(Trading_position &other, int new_amount) {
			other.set_amount(new_amount);
		}
		//пинимает торговую объект торговой позиции и новое значение(срок реализации)-->меняет срок реализации
		void Trading_position_change_implementation_period(Trading_position &other, int new_implementation_period) {
			other.set_implementation_period_(new_implementation_period);
		}
		//пинимает торговую объект торговой позиции и новое значение(цена доставки)-->меняет цену доставки
		void Trading_position_change_delivery_price_(Trading_position &other, int new_delivery_price_) {
			other.set_delivery_price(new_delivery_price_);
		}
		//вывод содержимого склада
		void show_stock() {
			std::cout << "\nСодержимое склада:\n";
			for (auto& el :Stock) {
				std::cout << el.get_product()<<" " << el.get_amount() <<" шт"<< std::endl;
			}
		}

		/*void position_update(check&other) {
			
				
			
			
			
			


		}*/
		



	private:
		std::vector<Trading_position>Stock;
	};
}