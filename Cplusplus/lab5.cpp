/*
Write a class for instantiating the objects that represent the two-dimensional Cartesian coordinate system.

A. Make a particular member function of one class as a friend function of another class for addition.

B. Make the other three functions to work as a bridge between the classes for multiplication, division, and subtraction.

C. Also write a small program to demonstrate that all the member functions of one class are the friend functions of another class if the former class is made friend to the latter.

Make least possible classes to demonstrate all the above in a single program without conflict.
*/

class Coordinate
{
public:
	Coordinate(int x, int y) : m_x(x), m_y(y) {}
	friend Coordinate add(Coordinate c1, Coordinate c2);
private:
	int m_x, m_y;
};

Coordinate add(Coordinate c1, Coordinate c2) {
	return Coordinate(c1.m_x + c2.m_x, c1.m_x + c2.m_y);
}


	


/*


Write a class to store x, y, and z coordinates of a point in three-dimensional space. Overload addition and subtraction operators for addition and subtraction of two coordinate objects. Implement the operator functions as non-member functions (friend operator functions).

*/

class Coord
{
public:
	Coord(int x, int y, int z) : m_x(x), m_y(y), m_z(z) {}
	int x() { return m_x; }
	int y() { return m_y; }
	int z() { return m_z; }
private:
	int m_x, m_y, m_z;
};

Coord operator+(Coord c1, Coord c2)
{
	return Coord(c1.x() + c2.x(), c1.y() + c2.y(), c1.z() + c2.z());
}

Coord operator-(Coord c1, Coord c2)
{
	return Coord(c1.x() - c2.x(), c1.y() - c2.y(), c1.z() - c2.z());
}

/*



Write a program to compare two objects of a class that contains an integer value as its data member. Make overloading functions to overload equality(==), less than(<), greater than(>), not equal (!=), greater than or equal to (>=), and less than or equal to(<=) operators using member operator functions.
*/

class Num
{
public:
	Num(int num) : data(num) {}
	bool operator==(Num num) {
		return (num.data == this->data);
	}
	bool operator<(Num num) {
		return (num.data < this->data);
	}
	bool operator>(Num num) {
		return (num.data > this->data);
	}
	bool operator!=(Num num) {
		return (num.data != this->data);
	}
	bool operator<=(Num num) {
		return (num.data <= this->data);
	}
private:
	int data;
};



/*

Write a class Date that overloads prefix and postfix operators to increase the Date object by one day, while causing appropriate increments to the month and year (use the appropriate condition for leap year). The prefix and postfix operators in the Date class should behave exactly like the built-in increment operators.

*/


class Date
{
public:
	Date(int day, int year, int month) : m_day(day), m_year(year), m_month(month) {}

	Date operator++(int) {

	}

	Date operator++() {

	}
private:
	int m_day, m_year, m_month;
};


