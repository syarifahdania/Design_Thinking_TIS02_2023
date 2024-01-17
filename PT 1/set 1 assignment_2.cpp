//NAME: SYARIFAH DANIA BINTI SYED ABU BAKAR
//MATRICS NO: A23CS0183
//NAME: AIN NURNABILA BINTI MOHD AZHAR
//MATRICS NO: A23CS0207

#include<iostream>
using namespace std;

void displayAccountInfo(double &balance);
void deposit(double &balance, double adv_payment);
void withdraw(double take_out, double &balance);



int main() 	
{
	
	double balance = 200.00;
	
	char response;	
	
	do{
	
	
	
		displayAccountInfo(balance);
	
    	cout <<"\n<<<<< Deposit Transaction >>>>>" << endl;
		deposit(balance, 500.00);
	
		cout<<"\n<<<<< Withdrawal Transaction >>>>>"<< endl;
		withdraw(200.00, balance);
	
		cout <<"\n";
		displayAccountInfo(balance);
		
		cout << "\nDo you want to perform another transaction? (Y/N): ";
		cin >>  response;
	}
	
	
	while(response == 'y' || response == 'Y');

	return 0;
}



void displayAccountInfo(double &balance)
{
	
	cout << "<<<<< My Accounts Overview >>>>>" << endl;
	cout << "Account Holder Name : User 1"<<endl;
	cout << "Account Number: 1013202341"<<endl;
	cout << "Balance : RM " << balance <<endl;
		
}

void deposit(double &balance, double adv_payment)
{
	balance = balance + adv_payment;
	cout <<"Deposit of RM " << adv_payment <<" successful." << endl;
}

void withdraw(double take_out, double &balance)
{
	if (take_out<=balance)
	{
		balance = balance - take_out;
		cout<<"Withdrawal of RM " <<take_out<< " successful."<<endl;
	}
	
	else 
	cout <<"Insufficient funds for withdrawal"<<endl;
		
}
