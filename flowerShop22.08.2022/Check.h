#pragma once

namespace BusinessLogic {
	class check {
	public:
		void setId(int id);
		int getId() const;

		void setPrice(int price);
		int getPrice() const;
	private:
		int id;
		int price;
	};
}