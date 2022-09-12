#pragma once
#include <vector>
#include <string>
#include "TradePosition.h"

namespace BusinessLogic {
	class Check {
	public:
		Check() = default;
		Check(std::string time, std::string counterparty, BussinessLogics::TradePosition) : time_(time), counterparty_(counterparty) {}

		void setTime(std::string time);
		std::string getTime() const;

		void setCounterparty(std::string counterparty);
		std::string getCounterparty() const;

		void addPosition(BussinessLogics::TradePosition obj);
		int depth()const;
		BussinessLogics::TradePosition& at(int i);

	private:
		std::string time_;
		std::string counterparty_;
		std::vector<BussinessLogics::TradePosition> Check_;
		std::vector<BussinessLogics::TradePosition> position_;
	};
}