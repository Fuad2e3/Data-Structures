#include "StudentManager.h"

/**
 * @brief Main entry point for the Student Management System.
 *
 * This system allows for basic CRUD operations on student records,
 * with admin authentication and persistent storage in CSV files.
 *
 * @return int
 */
int main() {
    // Set console color to Light Green on Black background
    system("color 0A");

    // Start the application from the welcome page
    welcomePage();

    return 0;
}
