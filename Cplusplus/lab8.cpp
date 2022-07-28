#include <iostream>
#include <iomanip>



using namespace std;
int lasjdflasjdfkljas() {
	 string head("========================================================================");
	 const int numberOfDigits = 7;
	 const float price[] = { 250.00, 1560.00, 433.00, 150.00, 234.00 };
	 int sum = 0;

	 cout << head << endl;
	 cout << setw(head.length()) << left << "KSAS Super Department" << endl;
	 cout << head << endl;
	 cout << endl;

	 cout << setw(head.length() - numberOfDigits) << left << "Broccoli:" << right << setprecision(2) << fixed << price[0] << endl;
	 cout << setw(head.length() - numberOfDigits) << left << "NumbericaTo:" << right << price[1] << endl;
	 cout << setw(head.length() - numberOfDigits) << left << "CocaCola:" << right << price[2] << endl;
	 cout << setw(head.length() - numberOfDigits) << left << "Kitkat:" << right << price[3] << endl;
	 cout << setw(head.length() - numberOfDigits) << left << "Cadbury:" << right << price[4] << endl;
	 cout << head << endl;
	 cout << setw(head.length()) << right << "Total:" << endl;
	 for (int i = 0; i < 5; i++) {
		 sum += price[i];
	 }
	 cout << setw(head.length()) << right << sum << endl;
	 return 0;
}






//user defined manipulators

ostream& myManip(ostream& obj)
{
	cout << setw(10) << setprecision(2) << setfill('-');
	return obj;
}

int easdjflpjsadfljsadflasdfljjflksa()
{
	cout << myManip << 10.23;
	return 0;
}


//overload stream operator to display
#include <iostream>
using namespace std;
 
class Complex
{
public:
    Complex(int r = 0, int i = 0)
    {  real = r;   imag = i; }
    friend ostream & operator << (ostream &out, const Complex &c);
    friend istream & operator >> (istream &in,  Complex &c);
private:
    int real, imag;
};
 
ostream & operator << (ostream &out, const Complex &c)
{
    out << c.real;
    out << "+i" << c.imag << endl;
    return out;
}
 
istream & operator >> (istream &in,  Complex &c)
{
    cout << "Enter Real Part ";
    in >> c.real;
    cout << "Enter Imaginary Part ";
    in >> c.imag;
    return in;
}
 
int sldfja()
{
   Complex c1;
   cin >> c1;
   cout << "The complex object is ";
   cout << c1;
   return 0;
}



// jlosadfdjlajflj


//Write a program that stores the information about students (name, student id, department, and address) in a structure and then transfers the information to a file in your directory. Finally, retrieve the information from your file and print it in the proper format on your output screen.

#include <iostream>
#include <fstream>

enum Department {
	BCT, BCE, BCH, BME
};

struct Studentman
{
	string name;
	int id;
	Department D;
} ;


using namespace std;
int elsfjad() {
	Studentman std1;
	Studentman stdR;
	std1.D = BCT;
	std1.name = "Darshan Koirala";
	std1.id = 24;
	fstream file;
	file.open("new.bin", ios::out);
	file.write(reinterpret_cast<char*> (&std1), sizeof(std1));
	file.close();
	file.open("new.bin", ios::in);
	file.read(reinterpret_cast<char*> (&stdR), sizeof(std1));

	cout << "Name: " << stdR.name << endl;
	cout << "ID: " << stdR.id << endl;
	cout << "Department: " << stdR.D << endl;

	file.close();
	return 0;
}

		

#include <iostream>
#include <fstream>

struct Account
{
	string firstName;
	string lastName;
	int accNum;
	float totalBalance;
};


int lsddajfdlasfdjj()
{
	int N;
	cout << "Enter N:";
	cin >> N;
	Account *acc = new Account[N];
	Account m;
	for (int i = 0; i < N; i++) {
		cout << "FirstName:";
		cin >> acc[i].firstName;
		cout << "LastName:";
		cin >> acc[i].lastName;
		cout << "AccNum:";
		cin >> acc[i].accNum;
		cout << "TotalBalace:";
		cin >> acc[i].totalBalance;
		cout << endl;
	}

	fstream file;
	file.open("new.bin", ios::out);
	for (int i = 0; i < N; i++) {
		file.write(reinterpret_cast<char*> (&acc[i]), sizeof(acc[i]));
	}
	file.close();

	cout << "Which one you want to Read:";
	cin >> N;

	file.open("new.bin", ios::in);
	file.seekg(N * sizeof(Account));
	file.read(reinterpret_cast<char*> (&m), sizeof(m));

	cout << endl;
	cout << "FirstName:";
	cout << m.firstName << endl;
	cout << "LastName:";
	cout << m.lastName << endl;
	cout << "AccNum:";
	cout << m.accNum << endl;
	cout << "TotalBalace:";
	cout << m.totalBalance << endl;

	return 0;
}
