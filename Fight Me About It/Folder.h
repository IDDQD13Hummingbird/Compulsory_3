#pragma once
#pragma warning(disable : 4996)
#include <iostream>
#include <chrono>
#include <iomanip>
#include <ctime>
#include <sstream>
#include "File.h"



/// <summary>
///In the constructor : Date of creation equals string.
/// </summary>
//std::ostringstream oss;
//oss << std::put_time(&tm, "%d-%m-%Y %H-%M-%S");
//auto str = oss.str();

class Folder {
private:
    std::string name;
    std::string date = "Today";
    int size = 0;
    int fsize = 0;
    int psize = 0;
    int fsizemax = 5;
    int psizemax = 10;
    File* files;
    Folder* folders; //To future me : you need an array of pointers that point t the items. Sounds scary, but the guy behind you might help.
    
public:
    std::string answ;
    int count = 0;
    int punkgetter = 0;
    Folder() {
        name = "";
        date = "Today"; 
        psize = 0;
        folders = NULL;


    }



    Folder(std::string myname) {
        name = myname;
        int fsize = (int(rand()) / int((RAND_MAX)) * 100);
        size = fsize;
        //source https://stackoverflow.com/a/16358111
        auto t = std::time(nullptr);
        auto tm = *std::localtime(&t);

        std::ostringstream oss;
        oss << std::put_time(&tm, "%d-%m-%Y %H-%M-%S");
        auto str = oss.str();
        date = str;
        folders = new Folder[5];
        files = new File[10];
        

    }
    void Print_Name() {
        
    }
    std::string getfName() {
        return name;
    }
    void Create_Folder() {
        if (psize < psizemax) {
        std::cout << "\n(C) O-oh, new folder! Cool beans. Can I get a name for it? \n(You) Sure, pal. It's ";
        std::string name;
        std::cin >> name;
        std::cout << ".\n(C) Ni-i-ice. Gimme a sec.\n";
        folders[fsize] = Folder(name);
        //      Punks[count] = answ;
        std::cout << "\n(C) New folder created!\n";
        fsize += 1;
        }
        else {
            std::cout << "\n(C) Nah, fam. Dat's about right ammount of folders.";
        }
        //psize = rand() % 100;
        //date = "null"; //std::ctime(&end_time); fix later.
    }
    void Show_Folder() {
        std::cout << "\n(C) Here's the folder, pal. \nName : " << name << ";\nDate of creation : " << date << ";\nSize : " << fsize << " bytes.\n";
        std::cout << "\n(C) It contains " << count << " punks. Here are they, in semi-random order.";
        Show_Punks();
        std::cout << "\n(C) It also has " << count << " folders, too. Here are they, in semi-random order.";
        for (int i = 0; i <= fsize; i++) {
            std::cout << "\n" << folders[i].getfName() << ";";
            //std::cout << Punk[i]; //god, help me.
        }
    }

    void Show_Punks() {
        for (int i = 0; i <= psize; i++) {
            std::cout << "\n" << files[i].getName()<< ";";
        //std::cout << Punk[i]; //god, help me.
        }
    }
    void New_File() {
        if (psize < psizemax) {
            std::cout << "\n(C) Gimme a name. \n(You) ";
            std::string name;
            std::cin >> name;
            files[psize] = File(name);
            //      Punks[count] = answ;
            std::cout << "\n(C) New punk created!\n";
            psize += 1;

        }
        else {
            std::cout << "\n(C) ERROR : FULL. No more punks in this party. They'll fight, y'know.";
        }
    }
    }
;
//class Punk;
