// Colton Swartwoudt, 7/20/22
/*
* Write a program that uses a function to return the value of a number cubed.
Take the number as an input from the user and print the cubed value back to the user.
*/

#include <iostream>
using namespace std;

int numberCubed(int input);

int main()
{
    int input = 0;
    cout << "Welcome to the number cuber\nPlease input a number: ";
    cin >> input;
    int output = numberCubed(input);
    cout << "Your number cubed is: " << output;
}

int numberCubed(int input) {
    return (input * input * input);
}