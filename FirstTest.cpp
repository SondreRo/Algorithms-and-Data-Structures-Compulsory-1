// FirstTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Input
int MyInput;
//Factorial
int TempNumber = 1;
//Fibonacci
int FibNumber = 1;
int n = 0;
int n1 = 1;
int n2 = 0;

int Factorial(int n)
{
    if (n > 1) {

        TempNumber *= n;
        Factorial(n - 1);
    }
    else
    {
        return TempNumber;
    }
}

void Fibonacci(int n)
{
    if (n < 2)
    {  
        return;       
    }
    else 
    {
        FibNumber = n1 + n2;
        cout << FibNumber << "\n";
        n2 = n1;
        n1 = FibNumber;
        
        Fibonacci(n - 1);
    }
}


void FactorialManager() 
{
    cout << "Factorial: \n";
    cout << "Give me a number pls: ";
    cin >> MyInput;
    cout << "Your number is: " << Factorial(MyInput);
}

void FibonacciManager()
{
    cout << "Fibo: \n";
    cout << "Give me a number pls: ";
    cin >> MyInput;
    cout << "\n";
    cout << "0\n";
    Fibonacci(MyInput);
}



int main()
{
    cout << "1 For Fibonacci. \n";
    cout << "2 For Factorial. \n";
    cout << "3 To Clear the terminal. \n";
    cout << "MyNumber: ";
    cin >> MyInput;
    cout << "\n";
    if (MyInput == 1) 
    {
        FibonacciManager();
    }
    else if (MyInput == 2) 
    {
        FactorialManager();
    }
    else if (MyInput == 3)
    {
        system("cls");
        main();
    }
       
    cout << "\n" << "Restarting:" << "\n";
    main();
    
}