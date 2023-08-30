// FirstTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

//Input
uint64_t MyInput;
//Factorial
uint64_t TempNumber;
//Fibonacci
uint64_t FibNumber;
uint64_t n;
uint64_t n1;
uint64_t n2;

uint64_t Factorial(uint64_t n)
{
    cout << TempNumber << "\n";
    if (n > 2) {

        TempNumber *= n;
        Factorial(n - 1);
    }
    else
    {
        return TempNumber;
    }
}

void Fibonacci(uint64_t n)
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
    if (MyInput > 0) {
        cout << "Your number is: " << Factorial(MyInput);
    }
  
}

void FibonacciManager()
{
    cout << "Fibo: \n";
    cout << "Give me a number pls: ";
    cin >> MyInput;
    cout << "\n";
    cout << "0\n";
    if (MyInput > 0) {
        Fibonacci(MyInput);
    }
  
}



int main()
{
    MyInput;
    TempNumber = 1;
    FibNumber = 1;
    n = 0;
    n1 = 1;
    n2 = 0;

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
        return main();
    }
    
         
    cout << "\n" << "Restarting:" << "\n";
   
    
   
    return main();
    

}