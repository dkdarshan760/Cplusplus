#include <iostream>
#include <string>
#include <cmath>


class Fahrenheit
{
public:
	Fahrenheit(float value) {
		m_value = value;
	}

	float showValue()
	{
		return m_value;
	}
	float toCelsius()
	{
		return (m_value - 32) * 5 / 9;
	}
private:
	float m_value = 0;
};


class Celsius
{
public:
	Celsius(float value) {
		m_value = value;
	}
	float showValue() {
		return m_value;
	}
	float toFahrenheit()
	{
		return (m_value * 9 / 5) + 32;
	}
private:
	float m_value = 0;
};


int asldf() 
{
	Celsius* celsius = new Celsius(32);
	Fahrenheit* fahrenheit = new Fahrenheit(32);
	std::cout << celsius->showValue() << " celsius is " << celsius->toFahrenheit() << " F";
	std::cout << std::endl;
	std::cout << fahrenheit->showValue() << " Fahrenheit is " << fahrenheit->toCelsius() << " F";
	std::cout << std::endl;

	return 0;
}


//Question Second Lab Three

class Prime
{
public:
	void checkPrime(int num)
	{
		for (int i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				isPrime = false;
				return;
			}
			else
			{
				isPrime = true;
			}
		}

		if (num == 1 or num == 0) 
		{
			isPrime = false;
		}
	}

	bool isPrimeNumber() const {
		return isPrime;
	}
private:
	bool isPrime = true;
};

int salfjk()
{
	int input;
	Prime number;
	while (true)
	{
		std::cout << "Enter the number or 0 to quit:";
		std::cin >> input;

		number.checkPrime(input);
		if (number.isPrimeNumber())
		{
			std::cout << "This is a Prime Number" << std::endl;
		}
		else
		{
			std::cout << "This is not a Prime Number" << std::endl;
		}

		if (input == 0) exit(0);
	}
	return 0;
}


// Question Third Lab Three

class carpark
{
public:
	// setters
	void setCarId(int carId)
	{
		m_carId = carId;
	}
	void setChargePerHour(int chargePerHour)
	{
		m_chargePerHour = chargePerHour;
	}
	void setTime(float timeInSeconds)
	{
		m_time = timeInSeconds;
	}
	 //getters
	int getCarId() const 
	{
		return m_carId;
	}
	int getChargePerHour() const 
	{
		return m_chargePerHour;
	}
	int getTime() const 
	{
		return m_time;
	}
private:
	int m_carId;
	int m_chargePerHour;
	float m_time; //seconds
};

void setTheCar(carpark& car, int id, int charge, float time)
{
	car.setCarId(id);
	car.setChargePerHour(charge);
	car.setTime(time);
}

void getTheCar(carpark& car)
{
	std::cout << "Details:" << std::endl;
	std::cout << "CarId:" << car.getCarId() << std::endl;
	std::cout << "ChargePerHour:" << car.getChargePerHour() << std::endl;
	std::cout << "Time:" << car.getTime() << std::endl;
}
int saldfj()
{
	carpark car;
	setTheCar(car, 31, 10, 120.5);
	getTheCar(car);
	return 0;
}


//question four lab three

using namespace std;

class Circle
{
public:
	void setTheCircle()
	{
		cout << "Circle radius r:";
		cin >> m_r;
	}

	void getTheCirle() const
	{
		cout << "Circle Radius: " << m_r << endl;
		cout << "Circle Area: " << 3.14 * m_r * m_r << endl;
	}
private:
	float m_r;
};



class Rectangle
{
public:
	void setTheRectangle()
	{
		cout << "Rectangle side a:";
		cin >> m_a;
		cout << "Rectangle side b:";
		cin >> m_b;
	}

	void getTheRectangle()
	{
		cout << "Rectangle side a:" << m_a << endl;
		cout << "Rectangle side b:" << m_b << endl;
		cout << "Rectangle Area:" << m_a * m_b << endl;
	}
private:
	float m_a;
	float m_b;
};


class Triangle
{
public:
	void setTheTriangle()
	{
		cout << "Triangle side a:";
		cin >> m_a;
		cout << "Triangle side b:";
		cin >> m_b;
		cout << "Triangle side c:";
		cin >> m_c;
	}

	void getTheTriangle()
	{
		float s = (m_a + m_b + m_c) / 2;
		float area = sqrt(s * (s - m_a) * (s - m_b) * (s - m_c));
		cout << "Triangle side a:" << m_a << endl;
		cout << "Triangle side b:" << m_b << endl;
		cout << "Triangle side c:" << m_c << endl;
		cout << "Triangle Area:" << area << endl;
	}
private:
	float m_a;
	float m_b;
	float m_c;
};

int adlsfj()
{
	Circle circle;
	Rectangle rectangle;
	Triangle triangle;
	circle.setTheCircle();
	rectangle.setTheRectangle();
	triangle.setTheTriangle();

	circle.getTheCirle();
	rectangle.getTheRectangle();
	triangle.getTheTriangle();
	return 0;
}


//question five lab three


class Employee
{
public:
	void setpara(int &id, float &totalBonus, float &totalOverTime, int &year)
	{
		m_id = id;
		m_totalBonus = totalBonus;
		m_totalOverTime = totalOverTime;
		m_year = year;
	}

	void displayreport() const
	{
		std::cout << "An employee with " << m_id << " has received Rs " << m_totalBonus << " as a bonus";
		std::cout << " and had worked" << m_totalOverTime << " hours as overtime in the year " << m_totalBonus << " as a bonus";
		std::cout << " in the year " << m_year << endl << endl;
	}
private:
	int m_id;
	float m_totalBonus;
	float m_totalOverTime;
	int m_year;
};


int lkasjdfladsjfd()
{
	int n;
	std::cout << "Enter the number of Employees:";
	std::cin >> n;
	Employee* employees = new Employee[n];
	for (int i = 0; i < n; i++)
	{
		int id, year;
		float totalBonus, totalOvertime;
		std::cout << "Enter the Employee " << i << " details" << std::endl;
		std::cout << "ID:";
		std::cin >> id;
		std::cout << "TotalBonus:";
		std::cin >> totalBonus;
		std::cout << "TotalOvertime:";
		std::cin >> totalOvertime;
		std::cout << "Year:";
		std::cin >> year;

		employees[i].setpara(id, totalBonus, totalOvertime, year);
	}
	
	std::cout << "----";
	for (int i = 0; i < n; i++)
	{
		employees[i].displayreport();
	}

	delete[]employees;
	return 0;  
}
