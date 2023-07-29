#include <iostream>
using namespace std;
using wholenumber = int;
using trueorfalse = bool;
#include <cmath>
#include <math.h>
#include <time.h>
// ***********************************CALCULATIONS**********************************************
void hypotenuseCalculation();
void EvenOrOdd();
void FourMathOps();
void squareRoot();
//************************************************************************************************

//*****************************************CONVERTING**********************************************

void convertingTemperature();
void questionsforUnit();
void ifsectionoftempConverting();
double temp;
string unitfortempconverting;

//*********************************************SWAPPING STUFF*****************************************

void swap();
//***************************************************************************************************
// WHAT DO YOU WANT***************************************************************
void WhatDoYouWant();

//***************************************SWAPPING STUFF*****************************************
void swap(){
    string x, y;
    string temporary;


    while (true) {

            cout << "Enter string x: ";
            cin >> x;
    
            cout << "\nEnter string y: ";
            cin >> y;   

        if (cin.fail()) {
            cin.clear();                // Clear the error state
            cin.ignore(10000, '\n');    // Ignore the remaining input in the buffer
            cout << "Please just enter string type!\n";
        } else {
            temporary = x;
            x = y;
            y = temporary;

            cout << "Change completed!\n";
            cout << "X: " << x << endl;
            cout << "Y: " << y << endl;
            break;
        }

    }


}
//*****************************************************************************************************

// ***********************************CALCULATIONS**********************************************

void hypotenuseCalculation(){
    while (true) {

        double a, b, c;

        std::cout << "Enter side A: \n";
        std::cin >> a;

        std::cout << "Enter side B: \n";
        std::cin >> b;

        if (cin.fail()) {
            cin.clear();                // Clear the error state
            cin.ignore(10000, '\n');    // Ignore the remaining input in the buffer
            cout << "Please just enter a number!\n";
        } else {
            c = sqrt(pow(a, 2) + pow(b, 2));
            std::cout << "Side C: " << c << "\n";
        }
    }

    
}

void EvenOrOdd(){
    while (true) {

        int number;
        cout << "Enter a number to check if it's even or odd: ";
        cin >> number;

        if (cin.fail()) {
            cin.clear();                // Clear the error state
            cin.ignore(10000, '\n');    // Ignore the remaining input in the buffer
            cout << "Please just enter a number!\n";
        } else {
            number % 2 == 1 ? cout << "Number " << number << " is even\n" : cout << "Number " << number << " is odd.\n";
        }

    }
    
}

void Calculationstrings(){
    cout << "*****************************************Calculation************************************" << endl;
}

 void FourMathOps(){
    char op;
    double num1;
    double num2;
    double result;



    while (true) {

        cout << "Enter #1: ";
        cin >> num1;

        cout << "Enter the operation: ";
        cin >> op;

        cout << "Number #2: ";
        cin >> num2;  

        if (cin.fail()) {
            cin.clear();                // Clear the error state
            cin.ignore(10000, '\n');    // Ignore the remaining input in the buffer
            cout << "Please fill all the blanks!\n";
        } else {
            switch(op){

                case '+':
                    result = num1 + num2;
                    cout << "Result: " << result << endl;
                    break;
                case '-':
                    result = num1 - num2;
                    cout << "Result: " << result << endl;
                    break;
                case '*':
                    result = num1 * num2;
                    cout << "Result: " << result << endl;
                    break;
                case '/':
                    result = num1 / num2;
                    cout << "Result: " << result << endl;
                    break;
                default:
                    cout << "\n You must enter an operation! Or a number!\n";
            }
        
        }

    }

    
}
//*************************************************************************************************

//*****************************************CONVERTING**********************************************
void questionsforUnit() {
    
    cout << "Converting Temperatures:\n"
         << "F/f: Fahrenheit\n"
         << "C/c: Celcius\n";
    cout << "Enter the type to be converted to: ";
    cin >> unitfortempconverting;
}

void ifsectionoftempConverting() {
    if (unitfortempconverting == "C" || unitfortempconverting == "c") {
        cout << "Enter the temperarture in Fahrenheit: ";
        cin >> temp;
        temp = (temp - 32) / 1.8;
        cout << "Temperature in Celcius: " << temp << "C\n";
    } else if (unitfortempconverting == "F" || unitfortempconverting == "f") {
        cout << "Enter temperature in Celcius: ";
        cin >> temp;
        temp = (1.8 * temp) + 32.0;
        cout << "Temperature in Fahrenheit: " << temp << "F\n";
    }
}

void convertingTemperature() {
    cout << "**********************Converting Temperature**************************************\n";
    questionsforUnit();

    // Input validation for unit


    // Input validation for temperature (must be a valid double)
    while (true) {    

        if (cin.fail()) {
            cin.clear();                // Clear the error state
            cin.ignore(10000, '\n');    // Ignore the remaining input in the buffer
            cout << "Please just enter a temperature a.k.a number!\n";
            questionsforUnit();
        } else {
            ifsectionoftempConverting();
            break;
        }
    }
}

//**************************************SQUAREROOT******************************************

void squareRoot(){
    float number, root;

    while (true) {
        cout << "Enter the number to find it's square root: ";
        cin >> number;    

        if (cin.fail()) {
            cin.clear();                // Clear the error state
            cin.ignore(10000, '\n');    // Ignore the remaining input in the buffer
            cout << "Please just enter a number!\n";
        } else {
            root = sqrt(number);

            cout << "The square root of " << number << " is: " << root << endl;
            break;
        }

    }

}


//***********************************************WHATDOYOUWANT************************************

void WhatDoYouWant(){
    cout << "Hello. Here is what you can do:\n" << endl;
    cout << "1.Hypotenus Calculation.\n";
    cout << "2.Check a number if it's even or odd.\n";
    cout << "3. Four Math Operation.\n";
    cout << "4. Finding a square root of a number.\n";
    cout << "5.Converting temperature.\n";
    cout << "6.Swapping string.\n";

    int choice;
    while (true) {
        cout << "What do you want to do: ";
        cin >> choice;    

        if (cin.fail()) {
            cin.clear();                // Clear the error state
            cin.ignore(10000, '\n');    // Ignore the remaining input in the buffer
            cout << "Please just enter a number!\n";
        } else {
            switch(choice){

                case 1:
                    hypotenuseCalculation();
                    break;
                case 2:
                    EvenOrOdd();
                    break;
                case 3:
                    FourMathOps();
                    break;
        
                case 4:
                    squareRoot();
                    break;
            
                case 5:
                    convertingTemperature();
                    break;
                case 6:
                    swap();
                    break;

                default:
                    do{
                        cout << "Please just enter 1, 2, 3, 4, 5, or 6!\n";
                        WhatDoYouWant();
                    }while(choice != 1 || choice != 2 || choice != 3 || choice != 4 || choice != 5);
            }

}
        }

    }

    

//***********************************************MAIN************************************************
int main(){
    WhatDoYouWant();
}