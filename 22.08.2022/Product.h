#pragma once
#include<string>
class Product {
public:
	Product() = default;
	Product(std::string name_product,int price_product):name_product_(name_product),price_product_(price_product) {}




	std::string get_name_product() {
		return name_product_;

	}
	void set_name_product(std::string name_prod) {
		name_product_ = name_prod;
	}

	int get_price_product() {
		return price_product_;
	}
	void set_price_product(int price_prod) {
		price_product_ = price_prod;
	}


private:
	std::string name_product_;
	int price_product_;


};