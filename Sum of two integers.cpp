// Sum of two integers
//Class Exercise 
//26th October

#include <iostream>
using namespace std;

int main()
{
    //Declare and initialize the variables

    int num1, num2, sum; 

    //Ask the users to input the two numbers
    cout << "The program calculates the sum of two numbers input by the user\n\n";
    cout << "------------------------------------------------------------------\n\n"; 
    cout << "Please input the first number\n";
    cin >> num1;

    cout << "Please input the second number\n";
    cin >> num2;

    //Display the sum of the two numbers

    sum = num1 + num2;
    cout << "The sum of the two numbers is " << sum << endl;

    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
