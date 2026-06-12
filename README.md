<div align="center">
  <h1>🎓 Student Management System</h1>
  <p>A Robust and Efficient Student Management System</p>
</div>

<p align="center">
  <img src="https://img.shields.io/badge/PLATFORM-WINDOWS-28cf7d?style=for-the-badge&logo=windows&logoColor=white" alt="Platform">
  <img src="https://img.shields.io/badge/LANGUAGE-C%2B%2B-f34b7d?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="Language">
  <img src="https://img.shields.io/badge/STORAGE-CSV-ffb31a?style=for-the-badge&logo=csv&logoColor=white" alt="Storage">
  <img src="https://img.shields.io/badge/COURSE-DATA_STRUCTURES-8a2be2?style=for-the-badge" alt="Course">
  <img src="https://img.shields.io/badge/LICENSE-MIT-yellow?style=for-the-badge" alt="License">
</p>

<p align="center">
  <b>Empowering educational institutions with secure data management and persistent storage.</b>
</p>

---

## 🚀 Features

- **🔐 Admin Authentication**: Secure login and registration system for administrators.
- **📝 Student Registration**: Add new students with auto-generated IDs.
- **🔍 Search Functionality**: Quickly find student records by their ID.
- **🔄 Update Records**: Modify student details such as name, department, and semester.
- **📋 View All Students**: Display a formatted table of all registered students.
- **🗑️ Delete Records**: Secure deletion of student records (requires admin password).
- **💾 Persistent Storage**: Data is saved in `record.csv` and `Log_In_Record.csv`.
- **🎨 Interactive UI**: Color-coded console output and loading animations.

---

## 🛠️ Project Structure

The project is organized following standard C++ conventions:

- `main.cpp`: The entry point of the application.
- `StudentManager.h`: Declarations of structures and function prototypes.
- `StudentManager.cpp`: Detailed implementation of all management functions.
- `record.csv`: Database for student records.
- `Log_In_Record.csv`: Database for admin credentials.

---

## 💻 How to Run

### Prerequisites
- A C++ compiler (e.g., MinGW/GCC for Windows).
- Windows OS (required for `<windows.h>` console features).

### Compilation
Open your terminal in the project directory and run:
```bash
g++ main.cpp StudentManager.cpp -o StudentSystem
```

### Execution
Run the compiled executable:
```bash
./StudentSystem
```

---

## 📂 File Management

- **Data Safety**: When deleting a record, the system uses a temporary file (`temp.csv`) to ensure data integrity.
- **Validation**: Includes input validation for CGPA (0.0 - 4.0) and Semester (1 - 8).

---

## 📄 License

Distributed under the MIT License. See `LICENSE` for more information.

<p align="center">
  Developed with ❤️ by <b>Team Softece</b><br>
  <i>Data Structures | Green University of Bangladesh</i>
</p>
