#pragma once
#pragma warning(disable : 4996)
#include <iostream>
#include <chrono>
#include <iomanip>
#include <ctime>
#include <sstream>


class File {

private:
    std::string name;
    std::string date;
    int size;
public:
    File() {

    }
    File(std::string myname) {
        name = myname;
        int psize = (int(rand()) / int((RAND_MAX)) * 100);
        size = psize;
        //source https://stackoverflow.com/a/16358111
        auto t = std::time(nullptr);
        auto tm = *std::localtime(&t);

        std::ostringstream oss;
        oss << std::put_time(&tm, "%d-%m-%Y %H-%M-%S");
        auto str = oss.str();
        date = str;
    }
    void Show_Punk() {
        std::cout << "\n(C) Here's your punk. \nName : " << name << ";\nDate of creation : " << date << ";\nSize : " << size << "bytes.\n";
    }

    std::string getName() {
        return name;
    }
    int getSize() {
        return size;
    }
    std::string getDate() {
        return date;
    }
    

}
;




//int ID;
//int Course[3];

//Student(std::string Name, std::string Surname, int Age, int ID);
//Course 0 - n/a, 1 - Math, 2 - 3D, 3 - Programming


//int Course1, Course2, Course3;
//    Student(std::string newName, std::string newSurname, int newAge, int newID, std::string newCourses[]) {
//        Name = newName;
//        Surname = newSurname;
//        Age = newAge;
//        ID = newID;
//        for (int i = 0; i < 3; i++)
//            Courses[i] = newCourses[i];
//    }
//    void Change() {
//
//    }
//
//};