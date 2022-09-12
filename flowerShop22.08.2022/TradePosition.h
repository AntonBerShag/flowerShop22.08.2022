#pragma once
#include <string>

namespace BussinessLogics {
	class TradePosition {
	public:

		TradePosition() = default;
		TradePosition(std::string nameOfProduct, int quantity,
			int timeOfRealization, double cost)
			: nameOfProduct_(nameOfProduct), quantity_(quantity),
			timeOfRealization_(timeOfRealization), cost_(cost) {}

		//добавление имя продукта
		void setNameOfProduct(std::string& nameOfProduct);
		//возвращает имя родукта
		std::string getNameOfProduct();

		//добавление количества продукта
		void setQuantity(int& quantity);
		//возвращает количесвто продукта
		int getQuantity();

		//добавляет сроку реализации
		void setTimeOfRealization(int& timeOfRealization);
		//возвращает срок реалицазции товара
		int getTimeOfRealization();

		//добавляет цену доставки
		void setCost(double& cost);
		//возвращает цену доставки
		double getCost();

	private:

		std::string nameOfProduct_;
		int quantity_;
		int timeOfRealization_;
		double cost_;

	};
}