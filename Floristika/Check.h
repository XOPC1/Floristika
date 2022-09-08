#pragma once
#include "TradePosition.h"
namespace BusinessLogic {
	class Check {
	public:
		Check();

		void setId(int id);
		int getId() const;

		void setPrice(int price);
		int getPrice() const;


	private:
		int id;
		int price;
	};
}