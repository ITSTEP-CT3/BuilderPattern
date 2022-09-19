#include <iostream>
#include <map>

using namespace std;

class Aircraft {
public:
	Aircraft(string);
	virtual ~Aircraft();

private:
	//��� �������� ��������
	string aircraftType;
	//��������� ���������� �� ����������
	map<string, string> parts;
public:
	//��������� ���������� � ���������� ����� ����������
	string GetPart(const string& key) {
		if (!CheckForPart(key)) {
			throw "There is no such key!";
		}
		return parts[key];
	}
	//��������� �������� ��� ����������
//����� ����������
	void SetPart(const string& key, const string& value) {
		parts[key] = value;
	}
	//�������� �� ������� �����
	bool CheckForPart(const string& key) {
		return parts.find(key) != parts.end() ? true : false;
	}
	//����������� ���������� �� ����������� ����������
	void Show();
};
Aircraft::Aircraft(string type)
{
	aircraftType = type;
}
Aircraft::~Aircraft()
{
}
void Aircraft::Show() {
	cout << "\n====================\n";
	cout << "Aircraft Type:" << aircraftType << endl;
	cout << "Frame:" << parts["frame"] << endl;
	cout << "Engine:" << parts["engine"] << endl;
	cout << "Wheels:" << parts["wheels"] << endl;
};
