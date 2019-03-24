#include<iostream>
#include<string>

using namespace std;

char option;
string fname;
string lname;
string id;

int TU = 0;
int CV = 0;
int GFU = 0;
double REG = 1.48;
double UNL = 1.10;
double DSL = 1.40;
float tu_sv = 200;
float tu_sd = 150;
float cv_sv = 40;
float cv_sd = 30;
int disc;
float CVT = 0;
float TUT = 0;
float GFUTT = 0;

void menu()
{
	cout << " *****************************************" << endl;
	cout << "                 LEW SERIVCE BAY" << endl;
	cout << " *****************************************" << endl;

	cout << endl << "       OPTIONS" << endl;
	cout << "             What is your selection?..." << endl;
	cout << "A.           TUNE-UP" << endl;
	cout << "B.           CAR-VALET" << endl;
	cout << "C.           GAS-FILLUP" << endl;
	cout << "D.           COMPLETE TRANSACTION" << endl;
	cout << "E.           EXIT" << endl;
	cin >> option;
}

char option2;

void car()
{
	cout << endl << "     What kind of car do you have?..." << endl;
	cout << "1.           SUV" << endl;
	cout << "2            Regular Sedan" << endl;
	cin >> option2;
}

char option3;

void GFUopt()
{
	int fuel_amt;

	cout << endl << "       What variant of fuel do you need?..." << endl;
	cout << "             Type R for Regular Gas" << endl;
	cout << "             Type U for Unleaded Gas" << endl;
	cout << "             Type D for Diesel" << endl;
	cout << "             If Gas Bill is greater than $50, and you have a TuneUp, You're awarded with 10% discount" << endl;
	cin >> option3;
	cout << "                 Enter the Amount of Fuel Needed" << endl;
	cin >> fuel_amt;
}

int main()
{
	int SUV; int RSD; int TU = 0, CV = 0;
	int TU1 = tu_sv; int TU2 = tu_sd; int CV1 = cv_sd; int CV2 = cv_sv;
	float GFU1, GFUTT, GFU2, GFU3 = 0;
	int a, b, c, d, e, R, U, D, GFU =0;
	double REG = 1.48;
	float UNL = 1.10;
	float DSL = 1.40;
	float tu_sv = 200;
	float tu_sd = 150;
	float TUT = 0;
	float cv_sv = 40;
	float cv_sd = 30;
	float CVT = 0;
	float disc = 0;
	float fuel_amt = 0;
	float TTB = 0;

	cout << "Please enter first name" << endl;
	cin >> fname;
	cout << "Please enter last name" << endl;
	cin >> lname;
	cout << "Please Enter Account Number" << endl;
	cin >> id;

	do
	{
		menu();

		if ((option == 'a') || (option == 'b')) {
			car();
		}

		if (option == 'c')
		{
			GFUopt();
		}
	} while (option != 'd');

	if (option = 'd')
	{
		TUT = (tu_sv * 1);
		TUT = (tu_sd * 1);

		if (option2 == TU1)
		{
			TU1 = TUT;
		}
		if (option2 == TU2)
			TU2 = TUT;
	}

	CVT = (cv_sd * 1);
	CVT = (cv_sv * 1);

	if (option3 == CV1)
	{
		(CV1 = CVT);
	}
	if
		(option2 == CV2)
	{
		(CV2 = CVT);
	}

	if (option3 == 'R')
	{
		GFUTT = REG * fuel_amt;
		GFU1 = GFUTT;
	}

	if (option3 == 'U') {
		GFUTT = UNL * fuel_amt;
		GFU2 = GFUTT;
	}

	if (option3 == 'D') {
		GFUTT = DSL * fuel_amt;
		GFU3 = GFUTT;
	}

	if ((GFUTT > 50 && TU != 0));
	{
		disc = (GFUTT * 10) / 100;
	}

	TTB = (CVT)+(TUT)+(GFUTT - disc);

	cout << endl << "TuneUp\t\t$" << TUT << endl;
	cout << endl << "GasFillUp\t\t$" << GFUTT << endl;
	cout << endl << "CarValet\t\t$" << CVT << endl;
	cout << endl << "TotalBill\t\t$" << TTB << endl;

	cout << endl << "CustomerBill" << TTB << endl;
	if (TUT != 0)
	{
		cout << endl << "TuneUp.1\t\t$" << TUT << endl;
	}

	if (CVT != 0)
	{
		cout << endl << "CarValet\t\t$" << CVT << endl;
	}

	if (GFUTT != 0)
	{
		cout << endl << "GasFillUp\t\t$" << GFUTT << endl;
	}

	while (option == 'e') {
		return 0;
	}
}