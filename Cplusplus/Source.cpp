#include <iostream>

struct Date {
	int day;
	int month;
	int year;
};

void print(const Date &date) {
	std::cout << date.month << "/" << date.day << "/" << date.year << std::endl;
}

int questionFirst() {


	struct Date date;
	date.day = 11;
	date.month = 28;
	date.year = 2004;

	print(date);
	return 0;
}



// question Two

void convert() {
	int feets = 0;
	std::cout << "Enter the Number of Feets:";
	std::cin >> feets;
	std::cout << "The number of Feets for " << feets << " feets are " << feets * 12 << " inches.";
	std::cout << std::endl;
}
void convert(int &feets) {
	std::cout << "The number of Feets for " << feets << " feets are " << feets * 12 << " inches.";
	std::cout << std::endl;
}
void convert(int feets, int inches) {
	std::cout << "The number of Feets for " << feets << " and " << inches;
	std::cout << " inches is " << feets * 12 + inches  << " inches.";
	std::cout << std::endl;
}


int questionSecond() {
	int feets = 10;
	convert();
	convert(feets);
	convert(19, 5);

	return 0;
}



//question Third

namespace Square {
	int num;
	int fun(int &number) {
		return number * number;
	}
}


namespace Cube {
	int num;
	int fun(int &number) {
		return number * number * number;
	}
}


int questionThird() {
	Square::num = 10;
	Cube::num = 30;

	std::cout << "Square:" << Square::fun(Square::num) << std::endl;

	std::cout << "Cube:" << Cube::fun(Cube::num) << std::endl;
	return 0;
}


//question Fourth

#define LARGER(Temp1, Temp2) (Temp1 > Temp2) ? Temp1 : Temp2

float& largerTemperature(float &Temp1, float &Temp2) {
	return LARGER(Temp1, Temp2);
}

int questionFourth() {
	float valueEntered, Temp1, Temp2;
	std::cout << "Write Temp1:";
	std::cin >> Temp1;
	std::cout << "Write Temp2:";
	std::cin >> Temp2;
	std::cout << "Write Value:";
	std::cin >> valueEntered;

	largerTemperature(Temp1, Temp2) = valueEntered;
	std::cout << "Larger Temperature Replaced:" << (LARGER(Temp1, Temp2));

	return 0;
}

//question Fifth

inline float finalSalary(float salary) {
	return salary - (static_cast<float>(10) / 100) * salary;
}

int questionFifth() {
	float salary;
	std::cout << "Enter the Employee Salary:";
	std::cin >> salary;
	std::cout << "The payment after 10% Tax to the government is " << finalSalary(salary);
	return 0;
}



//question Sixth

void increament(float &salary, int increament = 12) {
	salary += (increament / static_cast<float>(100)) * salary;
}

using namespace std;
int eafskldjlafjldj(){
	//in 2009
	float CEO_salary = 35000;
	float INF_salary = 25000;
	float SYS_salary = 24000;
	float PRG_salary = 18000;

	cout << "In 2009: --" << endl;
	cout << "CEO_salary:" << CEO_salary << endl;
	cout << "INF_salary:" << INF_salary << endl;
	cout << "SYS_salary:" << SYS_salary << endl;
	cout << "PRG_salary:" << PRG_salary << endl;

	//in 2010
	increament(CEO_salary, 9);
	increament(INF_salary, 10);
	increament(SYS_salary);
	increament(PRG_salary);

	cout << "In 2010: --" << endl;
	cout << "CEO_salary:" << CEO_salary << endl;
	cout << "INF_salary:" << INF_salary << endl;
	cout << "SYS_salary:" << SYS_salary << endl;
	cout << "PRG_salary:" << PRG_salary << endl;

	return 0;
}
