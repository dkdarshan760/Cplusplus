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

int main()
{
	cout << myManip << 10.23;
}


//overload stream operator to diplay

class Complex
{
	Complex(int a, int b) : m_a(a), m_b(b) {}
	ostream& operator<<(ostream& obj) {
		
		return obj;
	}
private:
	int m_a;
	int m_b;
};

