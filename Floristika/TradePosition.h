#pragma once
#include <string>

namespace BussinessLogics {
	class TradePosition {
	public:
		TradePosition();
		TradePosition(std::string nameOfProduct, int quantity, int timeOfRealization, double cost) : nameOfProduct_(nameOfProduct), quantity_(quantity), timeOfRealization_(timeOfRealization), cost_(cost) {}

		void setNameOfProduct(std::string& nameOfProduct);
		std::string getNameOfProduct();

		void setQuantity(int& quantity);
		int getQuantity();

		void setTimeOfRealization(int& timeOfRealization);
		int getTimeOfRealization();

		void setCost(double& cost);
		double getCost();

	private:

		std::string nameOfProduct_;
		int quantity_;
		int timeOfRealization_;
		double cost_;

	};
}