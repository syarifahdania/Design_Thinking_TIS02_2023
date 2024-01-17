//NAME: SYARIFAH DANIA BINTI SYED ABU BAKAR
//MATRICS NO: A23CS0183
//NAME: AIN NURNABILA BINTI MOHD AZHAR
//MATRICS NO: A23CS0207
#include <iostream>
using namespace std;

int main (){
	
	int numFood;
	
	cout << "Welcome to the Food Ordering System\n";
	cout << "1. Pizza - $10\n";
	cout << "2. Burger - $5\n";
	cout << "3. Sandwich - $7\n";
	cout << "Enter the number of the item you want to order: ";
	cin >> numFood;
	
	switch (numFood)
	{
	case 1 : cout << "Your total bill is: $10" ;
			break;
	
	case 2 : cout << "Your total bill is: $5";
			break;
	
	case 3 : cout << "Your total bill is: $7";
			break;
}

return 0;

}