#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H

#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <iomanip>
#include <stdexcept>
#include <windows.h>

using namespace std;

// Global Handle for Console Coloring
extern HANDLE hConsole;
extern int tStudent;

// Student Data Structure
struct Student {
    char name[256] = "Anonymous";
    long long int id = 0;
    char department[256] = "NA";
    double cgpa = 0.0;
    int semester = 0;
};

// Password Data Structure
struct Password {
    char user_name[256] = "admin";
    char password[256] = "admin";
};

// Global instances for convenience (matches original logic)
extern Student st;
extern Password logIn;

// Function Prototypes
void addNewStudent(void);
void searchStudent(void);
void modifyStudent(void);
void deleteStudent(void);
void showStudent(void);

void signUp(void);
void ResisterWindow(void);
void loginWindow(void);

void welcomePage(void);
void heading(int);
void menu(void);
void displayData(void);
void aboutMe(void);
void loadingbar(void);

void writeToFile(void);
void readFromFile(void);

int totalStudent(void);

#endif // STUDENTMANAGER_H
