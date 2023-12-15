#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
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
	double interest,total,newbalance,Ey;
	Ey = 1;
	interest = (year/100)*loan;
	total = (loan + interest);
	newbalance = total - pay;

	
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << Ey; 
	cout << setw(13) << left << loan;
	cout << setw(13) << left << interest;
	cout << setw(13) << left << total;
	cout << setw(13) << left << pay;
	cout << setw(13) << left << newbalance;
	cout << "\n";	
	
	return 0;


}
