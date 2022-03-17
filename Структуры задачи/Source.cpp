// персональный шаблон C++
#include<iostream>
#include <sstream>
using namespace std;
struct person{
	string name;
	int age;
	int coins[5];
};
void showPerson(person &P) {
	cout << P.name << ", " << P.age << "лет\n";
	cout << "Монеты: [";
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
	cout << "Задача 1\n";
	person A = {"Вася",25,{3,5,6,7,8}};
	showPerson(A);
	cout << "Год рождения - " << yearofBirth(A, 2022) << endl;
	cout << "Всего у Васи денег - " << cash(A)<<"\n\n";


	system("pause>nul");
	return 0;
}