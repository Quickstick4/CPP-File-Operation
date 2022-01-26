// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Doing this a little project to create a log in

#include <iostream>
#include <fstream> //allows reading and writting of files
#include <string> //String isn't standard in C launguages

bool isLoggedIn()
{
    std::string username, password, un, pw;
    std::cout << "Enter Username: "; 
    std::cin >> username;
    std::cout << "Enter Password: ";
    std::cin >> password;

    std::fstream read(username + ".txt");

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
    int choice;

    std::cout << "1. Register User" << "\n" << "2. Existing User" << "\n";
    std::cout << "Enter your selection: ";
    std::cin >> choice;

    if (choice == 1)
    {
        //local variable, still - change names
        std::string username, password;

        std::cout << "Enter a Username: ";
        std::cin >> username;

        std::cout << "Enter a password: ";
        std::cin >> password;


        //write the file
        //Declare the object 
        std::ofstream file;
        //Open, write, close
        file.open(username + ".txt");
        file << username << std::endl << password;
        file.close();
            
        //set program back to main message
        //Should really be a method then...
        main();

    } else if (choice == 2) {
        bool status = isLoggedIn();

        if (!status)
        {
            std::cout << "False Login" << std::endl;
            system("Pause");
            return 0;
        } else {
            std::cout << "Success logged in!" << std::endl;
            system("Pause");
            return 1;
        }
    }
}
