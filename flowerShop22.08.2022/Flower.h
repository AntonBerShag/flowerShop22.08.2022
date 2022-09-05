#pragma once
#include <iostream>
#include <stdlib.h>
#include <string>

namespace BusinessLogic {

	class flower {
	public:
		void setTypeF(std::string typeF);
		std::string getTypeF() const;
	
		void setColorF(std::string colorF);
		std::string getColorF() const;

	private:
		std::string typeF;
		std::string colorF;
	};

}