#pragma once
#include <string>

namespace BusinessLogic {
	class florist{
	public:
		void setIdPassport(int idPassport);
		int getIdPassport() const;
		
		void setName(std::string name);
		std::string getName() const;

		void setSurname(std::string surname);
		std::string getSurname() const;

		void setSalary(int salary);
		int getSalary() const;

	private:
		int idPassport;
		std::string name;
		std::string surname;
		int salary;
	};;
}