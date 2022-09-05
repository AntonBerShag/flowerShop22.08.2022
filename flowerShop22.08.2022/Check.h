#pragma once

namespace BusinessLogic {
	class Check {
	public:
		Check();

		void setId(int id);
		int getId() const;

		void setPrice(int price);
		int getPrice() const;

		void addPosition(BussinessLogics::TradePosition obj);
		int depth()const;
		BussinessLogics::TradePosition& at(int i);

	private:
		std::vector<BussinessLogics::TradePosition> position_;
		int id;
		int price;
	};
}