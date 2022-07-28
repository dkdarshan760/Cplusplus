#include <iostream>
/*
Write a program to create a class shape with functions to find the area of the shapesand display the names of the shapesand other essential components of the class.Create derived classes circle, rectangle, and trapezoid each having overriding functions area() and display().Write a suitable program to illustrate virtual functionsand virtual destructors.
*/

class Shape
{
public:
	virtual float area() {

		return 0;
	}

	virtual ~Shape() {

	}
};

class Circle : public Shape
{
public:
	Circle(int radius) : m_radius(radius) {

	}
	float area(float m_radius)
	{
		return m_radius * m_radius * 3.14;
	}

	void display()
	{
		std::cout << "Area of Cirle:" << area(m_radius);
	}

private:
	float m_radius;
};


class Rectangle : public Shape
{
public:
	Rectangle(int a, int b) : m_a(a), m_b(b) {

	}
	float area()
	{
		return m_a * m_b ;
	}

	void display()
	{
		std::cout << "Area of Rectangle:" << area();
	}

private:
	float m_a, m_b;
};

class Trapezoid : public Shape
{
public:
	Trapezoid(float a, float b, float h) : m_a(a), m_b(b), m_h(h) {

	}
	float area()
	{
		return 1 / 2 * m_h * (m_a + m_b);
	}

	void display()
	{
		std::cout << "Area of Trapezoid:" << area();
	}

private:
	float m_a, m_b, m_h;
};

int main1() {
	Circle circle(2);
	Rectangle rect(23, 4);
	Trapezoid trap(32, 53, 2);

	circle.display();
	rect.display();
	trap.display();
	return 0;
}

/*
Create a class Personand two derived classes Employeeand Student, inherited from class Person.Now create a class Manager which is derived from two base classes Employeeand Student.Show the use of the virtual base class.
*/

class Person
{
public:
	Person() {

	}

	void function() {
		std::cout << "Of base:" << std::endl;;
	}
private:
	std::string name;
	int age;
};

class Employee : virtual public Person {
public:
	Employee() {

	}
	void function() {
		std::cout << "Of Employee" << std::endl;
	}
};

class Student : virtual public Person {
public:
	Student() {

	}
};

class Manager : public Employee, Student {
public:
	Manager() {

	}
};

int main234234() {
	Manager man;
	man.function();
	return 0;
}

/*
Write a program with an abstract class Studentand create derive classes Engineering, Medicineand Science from base class Student.Create the objects of the derived classesand process themand access them using an array of pointers of type base class Student.
*/

class Studenti {
public:
	Studenti(std::string name, int age) : m_name(name), m_age(age) {}
	virtual void display() { }
protected:
	std::string m_name;
	int m_age;
};

class Engineering : public Studenti {
public:
	Engineering(std::string name, int age, std::string collegeName) : Studenti(name, age), college(collegeName) {
	}

	void display() {
		std::cout << "Name:" << m_name << std::endl;
		std::cout << "Age:" << m_age << std::endl;
		std::cout << "College:" << college << std::endl;
	}
private:
	std::string college;
};


class Medicine : public Studenti {
public:
	Medicine(std::string name, int age, std::string collegeName) :  Studenti(name, age), college(collegeName) {}
	void display() {
		std::cout << "Name:" << m_name << std::endl;
		std::cout << "Age:" << m_age << std::endl;
		std::cout << "College:" << college << std::endl;
	}
private:
	std::string college;
};


class Science : public Studenti {
public:
	Science(std::string name, int age, std::string collegeName) : Studenti(name, age),  college(collegeName) {}
	void display() {
		std::cout << "Name:" << m_name << std::endl;
		std::cout << "Age:" << m_age << std::endl;
		std::cout << "College:" << college << std::endl;
	}
private:
	std::string college;
};

int maindsalfjdaslmdlksacm() {
	Science science("Darshan", 18, "Pulchowk");
	Medicine medicine("manastha", 21, "medCollege");
	Engineering engineering("Rame", 24, "Thapathali");

	Studenti* stu[] = { &science, &medicine, &engineering };
	stu[0]->display();
	stu[1]->display();
	stu[2]->display();
	return 0;
}

/*
Create a polymorphic class Vehicleand create other derived classes Bus, Car, and Bike from Vehicle.Illustrate RTTI by the use of dynamic_castand typeid operators in this program.
*/


class Vehicle {
public:
	Vehicle(int serialNo) : m_serialNo(serialNo) {

	}
	virtual void dummy() {};

protected:
	int m_serialNo;
};

class Bus : public Vehicle {
public:
	Bus(int seats, int milege, int serialNo) : Vehicle(serialNo), m_seats(seats), m_milege(milege) {

	}
	virtual void dummy() { std::cout << "Dummy:" << std::endl; }
private:
	int m_seats;
	int m_milege;
};

class Car : public Vehicle {
public:
	Car(int seats, int milege, int serialNo) : Vehicle(serialNo), m_seats(seats), m_milege(milege) { 

	}
	virtual void dummy() { std::cout << "Dummy:" << std::endl; }
private:
	int m_seats;
	int m_milege;
};

class Bike : public Vehicle {
public:
	Bike(int milege, int serialNo) : Vehicle(serialNo), m_milege(milege) { 

	}
	virtual void dummy() { std::cout << "Dummy:" << std::endl; }
private:
	int m_milege;
};


int main()
{
	Bike bike(45, 23543);
	Car car(4, 20, 2344);
	Bus bus(4, 10, 2345);
	Vehicle* vec = dynamic_cast<Vehicle*> (&bike);
	std::cout << "Type oF Vehicle:" << typeid(vec).name();
	return 0;
}