#include <iostream>
/*
Write a program that can convert the Distance (meter, centimeter) to meters measurement in float and vice versa. Make a class distance with two data members, meter and centimeter. You can add function members as per your requirement.

*/

class Distance
{
public:
	Distance(float meter = 0)
	{
		m_centimeter = meter * 100;
		if (m_centimeter > 100) {
			m_meter += m_centimeter / 100;
			m_centimeter = m_centimeter - m_meter * 100;
		}
	}

	operator float()
	{
		return m_meter + static_cast<float>( m_centimeter) / 100;
	}

	void display() {
		std::cout << m_meter << "m " << m_centimeter << "cm " << std::endl;
	}


private:
	int m_meter = 0;
	int m_centimeter = 0;
};

int affsdjld() {
	float dist = 12.3;
	Distance distance(dist);
	distance.display();
	float dist2 = float(distance);
	std::cout << "Float:" << dist2 << "m " << std::endl;
	return 0;
}


/*



Write two classes to store distances in meter-centimeter and feet-inch systems respectively. Write conversions functions so that the program can convert objects of both types.


*/
class Metric;
	
class Imperial;

class Metric
{
public:
	friend class Imperial;
	Metric(float meters = 0, float centimeters = 0) : m_centimeters(centimeters), m_meters(meters) {}
	Metric(Imperial);
	void display() {
		std::cout << m_meters << "m " << m_centimeters << "cm " << std::endl;
	}
private:
	float m_meters;
	float m_centimeters;
};

class Imperial
{
public:
	friend class Metric;
	Imperial(float feet = 0, float inches = 0) : m_feet(feet), m_inches(inches) {}
	Imperial(Metric);

	void display() {
		std::cout << m_feet << "ft " << m_inches << "in " << std::endl;
	}
private:
	float m_feet;
	float m_inches;
};

Metric::Metric(Imperial british) {
		m_centimeters = (british.m_inches + british.m_feet * 12) * 2.54;
		if (m_centimeters > 100) {
			m_meters = int( m_centimeters ) / 100;
			m_centimeters = m_centimeters - m_meters * 100;
		}
	}

Imperial::Imperial(Metric metric) {
		m_inches = (metric.m_centimeters + metric.m_meters * 100) / 2.54;
		if (m_inches > 12) {
			m_feet = int( m_inches ) / 12;
			m_inches = m_inches - m_feet * 12;
		}
}

int alfsfddklkasfjlkdlkf() {
	Metric metric(32.3, 23);
	Imperial imperial(metric);
	Metric metric2(imperial);
	imperial.display();
	metric2.display();
    return 0;
}



/*

Create a class called Musicians to contain three methods string(), wind(), and perc(). Each of these methods should initialize a string array to contain the following instruments

-  veena, guitar, sitar, sarod and mandolin under string()

-  flute, clarinet saxophone, nadhaswaram, and piccolo under wind()

-  tabla, mridangam, bangos, drums and tambour under perc()

It should also display the contents of the arrays that are initialized. Create a derived class called TypeIns to contain a method called get() and show(). The get() method must display a  menu as follows

Type of instruments to be displayed

a.  String instruments

b.  Wind instruments

c.  Percussion instruments

The show() method should display the relevant detail according to our choice. The base class variables must be accessible only to their derived classes.

*/


#include <iostream>
#include <string>
using namespace std;
class Musicians {
public:
    void strings() {      //veena, guitar, sitar, sarod and mandolin
        m_string[0] = "veena";
        m_string[1] = "guitar";
        m_string[2] = "sitar";
        m_string[3] = "sarod";
        m_string[4] = "mandolin";
        cout << "String Instruments: " << endl;
        for (int i = 0; i < 5; i++) {
            cout << m_string[i] << endl;
        }
    }
    void winds() {        //flute, clarinet saxophone, nadhaswaram and piccolo
        m_wind[0] = "flute";
        m_wind[1] = "clarinet";
        m_wind[2] = "saxophone";
        m_wind[3] = "nadhaswaram";
        m_wind[4] = "piccolo";
        cout << "Wind Instruments: " << endl;
        for (int i = 0; i < 5; i++) {
            cout << m_wind[i] << endl;
        }
    }
    void percs() {         //tabla, mridangam, bangos, drums and tambour
        m_perc[0] = "tabla";
        m_perc[1] = "mridangam";
        m_perc[2] = "bangos";
        m_perc[3] = "drums";
        m_perc[4] = "tambour";
        cout << "Percussion Instruments: " << endl;
        for (int i = 0; i < 5; i++) {
            cout << m_perc[i] << endl;
        }
    }
protected:
    string m_string[5];
    string m_wind[5];
    string m_perc[5];
};
class TypeIns : public Musicians {
public:
    void get() {
        cout << "Type of instruments to be displayed: " << endl;
        cout << "a. String instruments" << endl;
        cout << "b. Wind instruments" << endl;
        cout << "c. Percussion instruments" << endl;
    }
    void show() {
        strings();
        winds();
        percs();
    }
};
int lsdjlakjfdlsajf() {
    TypeIns TI;
    TI.get();
    TI.show();
    return 0;
}


/*

Write three derived classes subClassing functionality of base class person (should have a member function that asks to enter name and age) and with added unique features of student, and employee, and functionality to assign, change and delete records of student and employee. And make one member function for printing the address of the objects of classes (base and derived) using this pointer. Create two objects of the base class and derived classes each and print the addresses of individual objects. Using a calculator, calculate the address space occupied by each object and verify this with address spaces printed by the program.


********/
#include <iostream>
#include <string>
using namespace std;
class person {
private:
    string Name;
    int Age;
public:
    void askName() {
        cout << "What is the name? " << endl;
        cin >> Name;
    }
    void askAge() {
        cout << "What is the age? " << endl;
        cin >> Age;
    }
    void pAdd() {
        cout << this << endl;
    }
};
class student : public person {
private:
    int rollNo;
    int level;
public:
    void printRollNo() {
        cout << "Roll Number: " << rollNo << endl;
    }
    void printLevel() {
        cout << "Level: " << level << endl;
    }
    void pAdd() {
        cout << this << endl;
    }
};
class employee : public person {
private:
    int salary;
    int idNo;
public:
    void printSalary() {
        cout << "Salary: " << salary << endl;
    }
    void printIdNo() {
        cout << "Id Number: " << idNo << endl;
    }
    void pAdd() {
        cout << this << endl;
    }
};
int lasjdfklasdlkfdlskcnoiwqe() {
    person p1, p2;
    student s1, s2;
    employee e1, e2;
    cout << "Addresses of pointers\n";

    cout << "P1 :"; 
    p1.pAdd(); 
    cout << " P2 :"; 
    p2.pAdd();
    cout << "\nS1 :" ; 
    s1.pAdd(); 
    cout<< " S2 :" ; 
    s2.pAdd();
    cout << "\nE1 :" ; 
    e1.pAdd(); 
    cout << " E2 :"; 
    e2.pAdd();

    cout << "Sizes of objects: \n";
    cout << "Person: " << sizeof(p1) << endl;

    cout << "Student: " << sizeof(s1) << endl;

    cout << "employee: " << sizeof(e1) << endl;

    return 0;
}


/*
Write a base class that asks the user to enter a complex number and make a derived class that adds the complex number of its own with the base. Finally, make a third class that is a friend of derived and calculate the difference of the base complex number and its own complex number.

 
*/


#include <iostream>
using namespace std;

class Complex
{
public:
    void getIn() {
        cout << "Enter real and imaginary :";
        cin >> m_real >> m_im;
    }
    void display()
    {
        cout << "The complex number is: " << m_real << " + i" << m_im << endl;
    }

    float m_real;
    float m_im;
};

class subClass : public Complex
{
public:
    friend class CFriend;
    void add(Complex a)
    {
        cout << "The sum from base and subClassed : " << a.m_real + m_real << " + i" << a.m_im + m_im << endl;
    }
    


#include <iostream>

class Complex
{
public:
    void getIn() {
        cout << "Enter real and imaginary :";
        cin >> m_real >> m_imag;
    }
    void display()
    {
        cout << "The complex number is: " << m_real << " + i" << m_imag << endl;
    }

    float m_real;
    float m_imag;
};

class Inherit : public Complex
{
public:
    friend class CFriend;
    void add(Complex a)
    {
        cout << "The sum from base and inherited : " << a.m_real + m_real << " + i" << a.m_imag + m_imag << endl;
    }
    
};
class CFriend
{
public:
    void diff(Complex a)
    {
        cout << "The difference of base and friend: " << a.m_real - m_real << " + i" << a.m_imag - m_imag << endl;
    }
    void getIn() {
        cout << "Enter real and imaginary :";
        cin >> m_real >> m_imag;
    }
    void display()
    {
        cout << "The complex number is: " << m_real << " + i" << m_imag << endl;
    }
private:
    float m_real, m_imag;

};
int main5()
{
    Complex a;
    cout << "For base class: " << endl;
    a.getIn();
    a.display();
    Inherit b;
    cout << "For inherited class: " << endl;
    b.getIn();
    b.display();
    b.add(a);
    CFriend c;
    cout << "For friend class: " << endl;
    c.getIn();
    c.display();
    c.diff(a);
    return 0;
}
};
class CFriend
{
public:
    void diff(Complex a)
    {
        cout << "The difference of base and friend: " << a.m_real - m_real << " + i" << a.m_im - m_im << endl;
    }
    void getIn() {
        cout << "Enter real and imaginary :";
        cin >> m_real >> m_im;
    }
    void display()
    {
        cout << "The complex number is: " << m_real << " + i" << m_im << endl;
    }
private:
    float m_real, m_im;

};
int dlkajfaplsnmjvopkwqejeflkmnweqofjewioajnf()
{
    Complex a;
    cout << "For base class: " << endl;
    a.getIn();
    a.display();
    subClass b;
    cout << "For subClassed class: " << endl;
    b.getIn();
    b.display();
    b.add(a);
    CFriend c;
    cout << "For friend class: " << endl;
    c.getIn();
    c.display();
    c.diff(a);
    return 0;
}