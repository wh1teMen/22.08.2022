#pragma once
#include"Trading_position.h"
#include<vector>
namespace model {
	class Stock
	{
	public:
		std::vector<Trading_position>two;
		void Trading_position_add(Trading_position &other) {
			two.emplace_back(other);
		}
		void Trading_position_delete(Trading_position &other) {
			two.clear();
		}
		void Trading_position_change_product(Trading_position &other, std::string new_product) {
			other.set_product(new_product);
		}
		void Trading_position_change_amount(Trading_position &other, int new_amount) {
			other.set_amount(new_amount);
		}
		void Trading_position_change_implementation_period(Trading_position &other, int new_implementation_period) {
			other.set_implementation_period_(new_implementation_period);
		}
		void Trading_position_change_delivery_price_(Trading_position &other, int new_delivery_price_) {
			other.set_delivery_price(new_delivery_price_);
		}


	};

}