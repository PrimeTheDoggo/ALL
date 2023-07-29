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

            cout << "Kelime grubu x'i girin: ";
            cin >> x;
    
            cout << "\nKelime grubu y'yi girin: ";
            cin >> y;   

        if (cin.fail()) {
            cin.clear();                // Clear the error state
            cin.ignore(10000, '\n');    // Ignore the remaining input in the buffer
            cout << "Lutfen sadece sozcuk ya da sozcuk grupları girin!\n";
        } else {
            temporary = x;
            x = y;
            y = temporary;

            cout << "Degistirme tamamlandi!\n";
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

        std::cout << "Kenar A girin: \n";
        std::cin >> a;

        std::cout << "Kenar B girin: \n";
        std::cin >> b;

        if (cin.fail()) {
            cin.clear();                // Clear the error state
            cin.ignore(10000, '\n');    // Ignore the remaining input in the buffer
            cout << "Lütfen sadece bir sayı girin!\n";
        } else {
            c = sqrt(pow(a, 2) + pow(b, 2));
            std::cout << "Kenar C: " << c << "\n";
        }
    }
    
}

void EvenOrOdd(){
    while (true) {

        int number;
        cout << "Tek mi cift mi oldugunu kontrol etmek icin bir sayi girin: ";
        cin >> number;

        if (cin.fail()) {
            cin.clear();                // Clear the error state
            cin.ignore(10000, '\n');    // Ignore the remaining input in the buffer
            cout << "Lutfen sadece bir sayi girin!\n";
        } else {
            number % 2 == 1 ? cout << "Sayi " << number << " cift\n" : cout << "Sayi " << number << " tek.\n";
        }

    }
}

void Calculationstrings(){
    cout << "*****************************************HESAPLAMA************************************" << endl;
}

 void FourMathOps(){
    char op;
    double num1;
    double num2;
    double result;



    while (true) {

        cout << "Sayi #1: ";
        cin >> num1;

        cout << "Islem isareti girin: ";
        cin >> op;

        cout << "Numara #2: ";
        cin >> num2;  

        if (cin.fail()) {
            cin.clear();                // Clear the error state
            cin.ignore(10000, '\n');    // Ignore the remaining input in the buffer
            cout << "Lütfen tüm boşlukları uygun doldurun!\n";
        } else {
            switch(op){

                case '+':
                    result = num1 + num2;
                    cout << "Sonuc: " << result << endl;
                    break;
                case '-':
                    result = num1 - num2;
                    cout << "Sonuc: " << result << endl;
                    break;
                case '*':
                    result = num1 * num2;
                    cout << "Sonuc: " << result << endl;
                    break;
                case '/':
                    result = num1 / num2;
                    cout << "Sonuc: " << result << endl;
                    break;
                default:
                    cout << "\n Sadece bir islem isareti gir!\n";
            }
        
        }

    }

    
}
//*************************************************************************************************

//*****************************************CONVERTING**********************************************
void questionsforUnit() {
    
    cout << "Sicaklik Donusturme:\n"
         << "F/f: Fahrenheit\n"
         << "C/c: Selsiyus\n";
    cout << "Donusturmek istediginiz birimi yazin: ";
    cin >> unitfortempconverting;
}

void ifsectionoftempConverting() {
    if (unitfortempconverting == "C" || unitfortempconverting == "c") {
        cout << "Sicakligi Fahrenheit seklinde girin: ";
        cin >> temp;
        temp = (temp - 32) / 1.8;
        cout << "Celciyus'taki sicaklik: " << temp << " C\n";
    } else if (unitfortempconverting == "F" || unitfortempconverting == "f") {
        cout << "Sicakligi Selsiyus seklinde girin: ";
        cin >> temp;
        temp = (1.8 * temp) + 32.0;
        cout << "Fahrenheit'taki sicaklik: " << temp << " F\n";
    }
}

void convertingTemperature() {
    cout << "**********************SICAKLIK CEVIRME**************************************\n";
    questionsforUnit();

    // Input validation for unit


    // Input validation for temperature (must be a valid double)
    while (true) {    

        if (cin.fail()) {
            cin.clear();                // Clear the error state
            cin.ignore(10000, '\n');    // Ignore the remaining input in the buffer
            cout << "Sadece bir sıcaklık giriniz yani numara!\n";
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
        cout << "Karekoku bulunacak sayiyi girin: ";
        cin >> number;    

        if (cin.fail()) {
            cin.clear();                // Clear the error state
            cin.ignore(10000, '\n');    // Ignore the remaining input in the buffer
            cout << "Lutfen sadece bir sayi girin!\n";
        } else {
            root = sqrt(number);

            cout << number << " in karekoku: " << root << endl;
            break;
        }

    }

}


//***********************************************WHATDOYOUWANT************************************

void WhatDoYouWant(){
    cout << "Merhaba, yapabilecegin seyler asagida verilmistir:\n" << endl;
    cout << "1.Hipotenus hesaplama.\n";
    cout << "2.Sayiyi tek mi cift mi oldugunu kontrol etme.\n";
    cout << "3. 4 Islem.\n";
    cout << "4. Bir sayinin karekokunu bulma.\n";
    cout << "5.Sicaklik cevirme.\n";
    cout << "6.Sozcuk gruplarini degistirme.\n";

    int choice;
    while (true) {
        cout << "Simdi ne yapmak istiyorsun: ";
        cin >> choice;    

        if (cin.fail()) {
            cin.clear();                // Clear the error state
            cin.ignore(10000, '\n');    // Ignore the remaining input in the buffer
            cout << "Lutfen sadece bir sayi girin!\n";
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
                        cout << "Sadece 1, 2, 3, 4, 5 veya 6 girin!\n";
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