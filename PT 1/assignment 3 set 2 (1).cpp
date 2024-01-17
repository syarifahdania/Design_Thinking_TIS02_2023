//NAME: SYARIFAH DANIA BINTI SYED ABU BAKAR
//MATRIC NO: A23CS0183
//NAME: AIN NURNABILA BINTI MOHD AZHAR
//MATRIC NO: A23CS0207
#include<iostream>
using namespace std;

const int MAX_OPERATIONS = 100; //declaring constant for the maxiumum operations

int operands1[MAX_OPERATIONS];
int results[MAX_OPERATIONS];


int multiplyUsingAddition(int a, int b) /*this function takes 2 integers as input and returns the 
										result of multiplication using repeated addition*/
{
    int result = 0;
    for (int i = 0; i < b; i++) {
        result = result + a;
    }
    return result;
}

void displayMainMenu() {
    cout << "\n<<<<<Main Menu>>>>>" << endl;
    cout << "=======================================" << endl;
    cout << "1. Perform Multiplication" << endl;
    cout << "2. Display Results" << endl;
    cout << "3. Quit" << endl;
}

void performMultiplication(int &operationCount) //function to specify and prompt user to number of operands and performs multiplication using repeated addition
{

    if (operationCount < MAX_OPERATIONS) {
        cout << "\nEnter the number of operands for multiplication: ";
        cin >> operands1[operationCount];

        int operand;
        int result = 1;
        for (int i = 0; i < operands1[operationCount]; i++) {
            cout << "Enter operand " << i + 1 << " : "; 
            cin >> operand;
            result = multiplyUsingAddition(result, operand);
            
        }
        results[operationCount] = result;
        operationCount++;
        cout << "Multiplication is performed successfully!" << endl;

    } else {
        cout << "Unsuccessful";
    }
}

void displayResults(int operationCount) //this function displays result and no of operands
{
    cout << "\nResults of Mathematical Operations:\n " << endl;
    cout << "====================================" << endl; 
    for (int i = 0; i < operationCount; i++) {
        cout << "Operation " << i + 1 << ": " << results[i] << "(Operand: "<< operands1[i] << ")" << endl;
        
        
    }
}

// Main function
int main() {
    int choice;
    int operationCount = 0;
    do {
        displayMainMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                performMultiplication(operationCount); 
                break;
            case 2:
                displayResults(operationCount); 
                break;
            case 3:
                cout << "\nGoodbye!\n";
                break;
            default:
                cout << "Invalid\n";
        }

    } while (choice != 3);

    return 0;
}
