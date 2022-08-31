#include<vector>
#include "Florist.h"
#include "Flower.h"
#include "Storage.h"

using namespace std;

namespace UI { //представления пользователю
	class AppMainWindow {
	public:

		void setWindowSize(int x, int y) {
			this->sizeX = x;
			this->sizeY = y;
		}

		int getWindowSizeX() {
			return sizeX;
		}

		int getWindowSizeY() {
			return sizeY;
		}

		void setWindowColor(int color) {
			this->windowColor = color;
		}

		int getWindowColor() {
			return windowColor;
		}

	private:
		int sizeX, sizeY;
		int windowColor = 0;
	};

	class AppFormingCheck {
	public:

		void setWindowSize(int x, int y) {
			this->sizeX = x;
			this->sizeY = y;
		}

		int getWindowSizeX() {
			return sizeX;
		}

		int getWindowSizeY() {
			return sizeY;
		}

		void setWindowColor(int color) {
			this->windowColor = color;
		}

		int getWindowColor() {
			return windowColor;
		}

	private:
		int sizeX, sizeY;
		int windowColor = 0;
	};

	class AppSearchingOfStuff {
	public:

		void setWindowSize(int x, int y) {
			this->sizeX = x;
			this->sizeY = y;
		}

		int getWindowSizeX() {
			return sizeX;
		}

		int getWindowSizeY() {
			return sizeY;
		}

		void setWindowColor(int color) {
			this->windowColor = color;
		}

		int getWindowColor() {
			return windowColor;
		}

		string getStuff() {
			return stuff;
		}

		int getCost() {
			return costOfStuff;
		}

	private:
		int sizeX, sizeY;
		int windowColor = 0;

		string stuff = "";
		int costOfStuff = 0;
	};
}

namespace View {

	class View {
	};

}


namespace model {

	class Employee {
	public:


		void isActive(bool& isAct) {
			this->accountIsActive = isAct;
		}

		bool isActive() {
			return accountIsActive;
		}


		int getPassportId() {
			return passportId;
		}

		string getNameAndSurname() {
			return nameAndSurname;
		}

		string getWorkScedule() {
			return workScedule;
		}

		string getLogin() {
			return login;
		}


		void setPassportId(int& passId) {
			this->passportId = passId;
		}

		void setNameAndSurname(string& nameAndSurname) {
			this->nameAndSurname = nameAndSurname;
		}

		void setWorkScedule(string& workScedule) {
			this->workScedule = workScedule;
		}

		void setLogin(string& login) {
			this->login = login;
		}

	private:
		bool accountIsActive;
		int passportId;
		string nameAndSurname;
		string workScedule;
		string login;
	};

	class Product {
	public:

		string getName() {
			return this->name;
		}

		int getGabarits() {
			return this->gabarits;
		}

		int getColor() {
			return this->color;
		}


		void setName(string& name) {
			this->name = name;
		}

		void setGabarits(int& gabarits) {
			this->gabarits = gabarits;
		}

		void setColor(int& color) {
			this->color = color;
		}

	private:
		string name;
		int gabarits;
		int color;
	};

	class Warehouse {
	private:
		vector <Flower> Flowers;
		vector <Bouquet> Bouqets;
		vector <TeddyBear> TeddyBears;
		vector <Package> Packages;
		vector <Ribbon> Ribbons;
	};

	// Classes Of Stuff

	class Flower {

		int color;
		int quantity;
		int cost;

		string type;

	};
	class Bouquet {

		bool size = 0; // 1 - Big or 0 - small
		bool withDecorations = 0; // 0 - without, 1 - with
		bool type = 0; // 1 - paper, 2 - cellophane

	};
	class TeddyBear {

		int color;
		int quantity;
		int cost;

		string type;

	class check {
		int id;
		int price;
	};
	class Package {

		bool isReady = 0; // 0 - not ready, 1 - ready
		bool type = 0; // 0 - small, 1 - big

	};
	class Ribbon {

		bool withOrWithout = 0; // 0 - without, 1 - with

	};

}

int main() {

	/*int checksQuantity = 30;
	BussinessLogics::Check Check;
	DataAccessLayer::saveCheck(Check, checksQuantity);

	BussinessLogics::Florist Florist_1;
	BussinessLogics::Florist Florist_2;
	BussinessLogics::Florist Florist_3;*/

	return 0;
}

