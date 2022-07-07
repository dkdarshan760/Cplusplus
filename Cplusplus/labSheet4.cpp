#include <iostream>
//Write a program that has a class to represent time. The class should have constructors to initialize data members hour, minute, and second to 0 and to initialize them to values passed as arguments. The class should have a member function to add time objects and return the result as a time object. There should be functions to display time in 12-hour and 24-hour format.

class Time
{
	Time() {
		m_hour = 0;
		m_minute = 0;
		m_second = 0;
	}

	Time(int hour, int minute, int second) {
		m_hour = hour;
		m_minute = minute;
		m_second = second;
	}

	Time add(Time& time2) {
		m_hour + time2.m_hour;
		m_minute + time2.m_minute;
		m_second + time2.m_second;
		return time2;
	}

	void display(enum Format formatted) {
		if (formatted == twelve) {
			if (m_hour > 12) {
				std::cout << m_hour << ":" << m_minute << ":" << m_second << " PM" << std::endl;
			}
			else {
				std::cout << m_hour << ":" << m_minute << ":" << m_second << " PM" << std::endl;
			}
		}
		else {
				std::cout << m_hour << ":" << m_minute << ":" << m_second << std::endl;

		}
	}
	
private:
	int m_hour, m_minute, m_second;
	enum Format {
		twelve, twentyFour
	};
};




//Write a program that has a class with a dynamically allocated character array as its data member. One object should contain "Engineers are" and another should contain " Creatures of logic". Member function join() should concatenate two strings by passing two objects as arguments. Display the concatenated string through a member function. Use constructors to allocate and initialize the data member. Also, write a destructor to free the allocated memory for the character array. Make your own function for the concatenation of two strings.
#include <cstring>
class Test
{
public:
	Test(const char *str)  {
		m_string = new char[strlen(str) + 1];

		memcpy(m_string, str, strlen(str));

		m_string[strlen(str)] = '\0';
	}

	~Test() {
		delete[] m_string;
	}

	Test &join(const Test &test)  {
		char* new_str = new char[len() + test.len() + 1];

		memcpy(new_str, m_string, len());
		memcpy(new_str + len(), test.m_string, test.len());

		new_str[len() + test.len()] = '\0';

		delete[] m_string;

		m_string = new_str;

		return *this;
	}

	int len() const {
		return  strlen(m_string);
	}

	char* show() {
		return m_string;
	}

private:
	char *m_string;
	
};


int aslfj() {
	Test test1("Engineers are ");
	Test test2("creatures of logic.");

	test1.join(test2);
	std::cout << test1.show();
	return 0;
}


//Write a class that can store Department ID and Department Name with constructors to initialize its members. Write destructor member in the same class and display the message "Object n goes out of the scope". Your program should be made such that it should show the order of constructor and destructor invocation.

class Department
{
public:
	Department(const char *string, int departmentID) : m_departmentID(departmentID)  {
		//memcpy(m_name, string, strlen(string));
		std::cout << "Constructor Invoked" << std::endl;
	}

	~Department() {
		std::cout << "Object n goes out of the scope";
	}
private:
	char m_name[20];
	int m_departmentID;
};

int eafldsajflkdsajj() {
	const char hello[] = "What the heck";
	Department department("Hello", 12);
	return 0;
}


//Assume that one constructor initializes data member say num_vehicle, hour, and rate. There should be a 10% discount if num_vehicle exceeds 10. Display the total charge. Use two objects and show a bit-by-bit copy of one object to another (make your own copy constructor).

class Vehicle
{
public:
	Vehicle(int num_vehicle, float hour, float rate) : m_num_vehicle(num_vehicle), m_hour(hour), m_rate(rate) {
		if (num_vehicle > 10) {
			m_rate = m_rate - 0.1 * m_rate;
		}
	}

	Vehicle(Vehicle &vec)
	{
		m_hour = vec.m_hour;
		m_num_vehicle = vec.m_num_vehicle;
		m_rate = vec.m_rate;
	}

	void display() {
		std::cout << "Total Charge:" << m_hour * m_rate * m_num_vehicle << std::endl;
	}

private:
	int m_num_vehicle, m_hour, m_rate;
};

int afldsjaf() {
	Vehicle vec1(122, 23, 324);
	Vehicle vec2(vec1);
	vec2.display();
	return 0;
}




//Write a program that illustrates the following relationship and comment on them. 

//i) const_object.non_const_mem_function

//ii) const_object.const_mem_function

//iii) non_const_object.non_const_mem_function

//iv) non_const_object.const_mem_function

//const object non const mem function



//Create a class with a data member to hold a "serial number" for each object created from the class. That is, the first object created will be numbered 1, the second 2, and so on by using the basic concept of static data members. Use static member function if it is useful in the program. Otherwise, make a separate program that demonstrates the use of static member function


class Data
{
public:
	Data() {
		increment();
		serialNumber = count;
	}

	~Data() {
		decrement();
	}

	static void increment() {
		count++;
	}

	static void decrement() {
		count--;
	}

	void display() {
		std::cout << "serialNumber:" << serialNumber << std::endl;
	}
private:
	int serialNumber;
	static int count;
};

int Data::count = 0;

int flasjdfljaj() {
	Data data1;
	Data data2;
	Data data3;
	data1.display();
	data2.display();
	data3.display();
	return 0;
}

#include<iostream>

class Complex {
public:
  Complex(float x = 0.0f, float y = 0.0f) :
    m_a(x), m_b(y) {
  }

  const Complex& print() const {
    std::cout << " " << m_a << " + " << m_b << "i ";
    return *this;
  }

  Complex& addWith(const Complex& c2) {
    m_a += c2.m_a;
    m_b += c2.m_b;
    return *this;
  }

private:
  float m_a;
  float m_b;
};

int falkjdlkf() {
  Complex c1(1, 2);
  const Complex c2(-6, 3);


  //const_object.non_const_mem_function
  //c2.addWith(c1);        //Error, cannot happen

  //const_object.const_mem_function
  c2.print();

  //non_const_object.non_const_mem_function
  c1.addWith(c2);

  //non_const_object.const_mem_function
  c1.print();

  return 0;
}

