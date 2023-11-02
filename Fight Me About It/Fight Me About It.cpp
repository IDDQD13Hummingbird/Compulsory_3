// Fight Me About It.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include "File.h"
#include "Folder.h"

//std::string time;
//std::ostringstream oss;



int main()
{
    srand((unsigned int)time(NULL));
    int choice = 1;
    //oss << std::put_time(&tm, "%d-%m-%Y %H-%M-%S");
    //auto str = oss.str();
    //srand((unsigned int)time(NULL));
    std::cout << "Fight me, you Punk!\n";
    std::cout << "\n(C) Hi, pal. Your computer friend speaking. You happened to be in my special Punk folder.\n(C) ''O-oh, but what's so special about your punk folder?''. Well, first of all, it has a neat little menu! :D";
    Folder f("Punk folder");
    do {
        std::cout << "\n(C) Akh-em! Welcome to my secret Punk folder! You can interact with it the following way :\n";

        std::cout << "\n  1: Show folders;\n  2: Show my precious punks in a folder;\n  3 : Add punks to da folder;\n  4 : Add even more folders;\n  0 : Quit looking at the punks.\n";

        std::cout << "\n> Enter your selection (1, 2, or 3): ";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            f.Show_Folder();
            break;
        case 2:
            f.Show_Punks();
            break;
        case 3:
            f.New_File();
            break;
        case 4:
            f.Create_Folder();
            break;
        default:
            std::cout << "\n(C) Wait, what? I think I should repeat myself again.\n";
            break;
        }
    } while (choice != 0);
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
