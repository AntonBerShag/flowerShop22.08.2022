#pragma once
#include <vector>
#include "TradePosition.h"
#include "Check.h"

namespace BusinessLogic {
	class storage {
	public:
		void setCountActiveProduct(int countActiveProduct);
		int getCountActiveProduct() const;

		std::vector<BussinessLogics::TradePosition> getPosition();
		bool checkPosition(Check& obj);
	private:
		int countActiveProduct;
		std::vector<BussinessLogics::TradePosition> storage_;
	};
}