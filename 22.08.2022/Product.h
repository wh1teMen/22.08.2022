#pragma once
#include<string>
namespace model {
	//Класс продукт
	class Product {
	public:
		Product() = default;
		//конструктор(название продукта, цвет продукта,габариты продукта)
		Product(std::string name_product, std::string color, int dimensions) :name_product_(name_product), color_(color), dimensions_(dimensions) {}
		//возвращает название продукта
		std::string get_name_product() {
			return name_product_;
		}
		//добавляет название продукта
		void set_name_product(std::string name_prod) {
			name_product_ = name_prod;
		}
		//возвращает цвет продукта
		std::string get_color() {
			return color_;
		}
		//добавить цвет продукта
		void set_color(std::string color) {
			color_ = color;
		}
		//добавляет габариты продукта
		int set_deminsions(int diminsions) {
			dimensions_ = diminsions;
		}
		//возвращает габариты продукта
		int get_deminsions() {
			return dimensions_;
		}
	private:
		std::string name_product_;//названиае продукта
		std::string color_;//цвет продукта
		int dimensions_;//габариты
	};
}