#pragma once
#include<string>
namespace model {
	class Product {
	public:
		Product() = default;
		Product(std::string name_product, std::string color, int dimensions) :name_product_(name_product), color_(color), dimensions_(dimensions) {}

		std::string get_name_product() {
			return name_product_;

		}
		void set_name_product(std::string name_prod) {
			name_product_ = name_prod;
		}

		std::string get_color() {
			return color_;
		}
		void set_color(std::string color) {
			color_ = color;
		}

		int set_deminsions(int diminsions) {
			dimensions_ = diminsions;
		}



	private:
		std::string name_product_;
		std::string color_;
		int dimensions_;


	};
}