#pragma once

namespace BusinessLogic {

	class bouquet {
	public:
		void setCountOfFlowers(int countOfFlowers);
		int getCountOfFlowers() const;
	private:
		int countOfFlowers;
	};

}