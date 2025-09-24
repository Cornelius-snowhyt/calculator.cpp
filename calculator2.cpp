#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice; 
    double num1, num2;

    while (true) {
        cout << "\n===Cornelius-snowhyt's Simple Calculator==\n";
        cout << "1. Add\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Square\n";
        cout << "6. Square Root\n";
        cout << "7. Eponentiation (x^y)\n";
        cout << "8. Modulus (x % y)\n";
        cout << "9. Cancel (Exit)\n";

        cout << "Enter choice (1-9): \n";
        cin >> choice;

        if (choice == 9) {
            cout << "Calculator exited.\n";
            break;

        }
        if (choice >= 1 && choice <= 4 || choice ==7 || choice ==8) {
            cout << "Enter first number: \n";
            cin >> num1;
            cout << "Enter second number \n";
            cin >> num2;
        } else if (choice == 5 || choice == 6) { 
            cout << "Enter a number:\n";
            cin >> num1;
        } else { 
            cout << "Invalid choice! Please try again.\n";
            continue;
        }            

            
        switch (choice) { 
            case 1: cout << "Result: " << num1 + num2 << endl;
            case 2: cout << "Result: " << num1 - num2 << endl;
            case 3: cout << "Result: " << num1 * num2 << endl;
            case 4: 
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero\n";
                break;
            case 5: cout << "Result: Square of " << num1 << " = " << pow(num1, 2) << endl; break;
            case 6:
                if (num1 >= 0)
                    cout << "Result: Square root of " << num1 << " = " << sqrt(num1) << endl;  
                else 
                    cout << "Error: Cannot take square root of a negative number.\n";
            case 7: cout << num1 << " ^ " << num2 << " = " << pow(num1, num2) << endl; break;
            case 8: 
                    if (num2 != 0)
                        cout << num1 << " % " << num2 << " = " << fmod(num1, num2) << endl;
                    else
                        cout << "Error: Modulus by zero!\n";
                    break;           

           }
        }
        return 0;  
    } 
       