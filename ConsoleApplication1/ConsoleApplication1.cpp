// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Doing this a little project to create a log in

#include <iostream>
#include <fstream> //allows reading a writting of files
#include <string>

bool isLoggedIn()
{
    std::string username, password, un, pw;
    std::cout << "Enter Username: "; 
    std::cin >> username;
    std::cout << "Enter Password: ";
    std::cin >> password;

    std::fstream read("data\\" + username + ".txt");

    std::getline(read, un);
    std::getline(read, pw);

    if (un == username && pw == password)
    {
        return true;
    } else {
        return false;
    }



}

int main()
{
    std::cout << "Hello World!\n";
}
