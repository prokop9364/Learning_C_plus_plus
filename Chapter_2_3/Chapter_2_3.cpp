// Leaning_Cpp_Chapter_2_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Write a function called doubleNumber() that takes one integer parameter. 
//The function should return double the value of the parameter.
//Write a complete program that reads an integer from the user, 
//doubles it using the doubleNumber() function you wrote in the 
// previous quiz, and then prints the doubled value out to the console.

#include <iostream>

int doubleNumber(int number)
{
    return number * 2;
}

int main()
{
    int number{};
    std::cout << "Number to double: ";
    std::cin >> number;
    std::cout << doubleNumber(number);

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
