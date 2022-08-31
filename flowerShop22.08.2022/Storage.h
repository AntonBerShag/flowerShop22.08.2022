#pragma once

namespace BusinessLogic {
	class storage {
	public:
		void setCountActiveProduct(int countActiveProduct);
		int getCountActiveProduct() const;
	private:
		int countActiveProduct;
	};
}