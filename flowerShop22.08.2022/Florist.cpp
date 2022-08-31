#include "Florist.h"

void BusinessLogic::florist::setIdPassport(int idPassport)
{
	this->idPassport = idPassport;
}

int BusinessLogic::florist::getIdPassport() const
{
	return idPassport;
}

void BusinessLogic::florist::setName(std::string name)
{
	this->name = name;
}

std::string BusinessLogic::florist::getName() const
{
	return name;
}

void BusinessLogic::florist::setSurname(std::string surname)
{
	this->surname = surname;
}

std::string BusinessLogic::florist::getSurname() const
{
	return surname;
}

void BusinessLogic::florist::setSalary(int salary)
{
	this->salary = salary;
}

int BusinessLogic::florist::getSalary() const
{
	return salary;
}
