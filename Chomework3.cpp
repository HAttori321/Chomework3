#include <iostream>
using namespace std;

int main()
{
    //Task1
     
    int number;

    cout << "Enter six digit number : ";
    cin >> number;

    if (number < 100000 || number > 999999) {
        cout << "Enter six digit number!" << endl;
    }
    int numSum1 = number / 100000 + (number / 10000) % 10 + (number / 1000) % 10;
    int numSum2 = (number / 100) % 10 + (number / 10) % 10 + number % 10;

    if (numSum1 == numSum2) {
        cout << "Ñongratulations, you have lucky number" << endl;
    }
    else {
        cout << "Your number isn1 lucky(" << endl;
    }
    //Task2
    int number;

    cout << "Enter four digit number : ";
    cin >> number;

    if (number < 1000 || number > 9999) {
        cout << "Enter four digit number!" << endl;
    }

    int newNumber = (number % 100) * 100 + (number / 100);

    cout << "Mod number is : " << newNumber << endl;


    //Task3
    int numbers[7];
    cout << "Enter 7 number : \n";
    for (int i = 0; i < 7; ++i) 
    {
        cin >> numbers[i];
    }
    int max_number = numbers[0];
    for (int i = 1; i < 7; ++i) 
    {
        if (numbers[i] > max_number) 
        {
            max_number = numbers[i];
        }
    }
    cout << "Max number : " << max_number << endl;

}

