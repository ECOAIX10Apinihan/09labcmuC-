#include<iostream>
#include<iomanip>
using namespace std;

int main(){	
	double initial,rate,pay,Interest,Total,NewBalance;
	int year = 0;
	cout << "Enter initial loan: ";
	cin >> initial;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	NewBalance = initial;
	do
	{
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year + 1;
		Interest = NewBalance*(rate/100);
		cout << setw(13) << left << NewBalance;
		cout << setw(13) << left << Interest;
		Total = NewBalance + Interest;
		cout << setw(13) << left << Total;
		if (pay > Total)
		{
			pay = Total;
		}
		cout << setw(13) << left << pay;
		NewBalance = Total - pay;
		cout << setw(13) << left << NewBalance;
		cout << "\n";
			year++;	
	} while (NewBalance > 0);
	
	return 0;
}