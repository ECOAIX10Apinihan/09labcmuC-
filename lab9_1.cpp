#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;

int main(){	
	double loan,year,pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> year;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	for (int i = 0; i < loan; i++)
	{
		double interest,total,newbalance;
		if (loan > pay)
		{
			interest = (year/100.0)*loan;
			total = (loan + interest);
			newbalance = total - pay;	
			loan = newbalance;
			cout << fixed << setprecision(2);
			cout << setw(13) << left << i+1;
			cout << setw(13) << left << loan;
			cout << setw(13) << left << interest;
			cout << setw(13) << left << total;
			cout << setw(13) << left << pay;
			cout << setw(13) << left << newbalance;
			cout << "\n";
		}else if(loan < pay){
			interest = (year/100.0)*loan;
			total = (loan + interest);
			pay = total;
			newbalance = total - pay;
			cout << fixed << setprecision(2);
			cout << setw(13) << left << i+1;
			cout << setw(13) << left << loan;
			cout << setw(13) << left << interest;
			cout << setw(13) << left << total;
			cout << setw(13) << left << pay;
			cout << setw(13) << left << newbalance;
			cout << "\n";
			break;
		}
	}
	return 0;
}
