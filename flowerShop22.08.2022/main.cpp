#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

namespace UI { //������������� ������������

}

namespace businessLogic {
	
	class florist {
		int idPassport;
		string name;
		string surname;
		int salary;
		string login;

		void allFlorist(int idPassport, string name, string surname) { // ������� ������ ����������(���� ��� �����������, ��� ���)
			vector<florist> allFlorist;//��
			allFlorist.reserve(3);
			for (auto item : allFlorist)
			{
				allFlorist.emplace_back(idPassport);
			}
		}
	};

	class flower {
	public:
		enum typeF {
			rose,
			chamomile,//�������
			lily,//�����
			tulip//�������
		};
		enum colorF {
			red,
			white,
			yellow,
			violet
		};

		void type(typeF type) {
			switch (type)
			{
			case businessLogic::flower::rose:
				cout << "Rose" << endl;
				break;
			case businessLogic::flower::chamomile:
				cout << "Chamomile" << endl;
				break;
			case businessLogic::flower::lily:
				cout << "Lily" << endl;
				break;
			case businessLogic::flower::tulip:
				cout << "Tulip" << endl;
				break;
			default:
				break;
			}
		}
	};

	class check {
		int id;
		int totalPrice;
	};

	class bouquet {
		int countOfFlower;
	};

	class storage{
		int countActiveProduct;
	};
	
}



int main() {

	return 0;
}