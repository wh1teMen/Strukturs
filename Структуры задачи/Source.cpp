// ������������ ������ C++
#include<iostream>
#include <sstream>
using namespace std;
struct person{
	string name;
	int age;
	int coins[5];
};
void showPerson(person &P) {
	cout << P.name << ", " << P.age << "���\n";
	cout << "������: [";
	for (int i = 0; i <5; i++)
	{
		cout << P.coins[i] << ", ";
	}
	cout << "\b\b]\n";
}
int yearofBirth(person& p,int year) {
	return year - p.age;
}

int cash(person& p) {
	int sum = 0;
		for (int i = 0; i < 5; i++)
	{
			sum += p.coins[i];
	}
		return sum;

}






int main() {
	setlocale(LC_ALL, "ru");
	cout << "������ 1\n";
	person A = {"����",25,{3,5,6,7,8}};
	showPerson(A);
	cout << "��� �������� - " << yearofBirth(A, 2022) << endl;
	cout << "����� � ���� ����� - " << cash(A)<<"\n\n";


	system("pause>nul");
	return 0;
}