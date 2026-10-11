<div align="center">

# 🎓 Student Management System
### **High-Performance Academic Record & Persistence System**

[![Platform](https://img.shields.io/badge/Platform-Windows-28cf7d?style=for-the-badge&logo=windows&logoColor=white)](https://microsoft.com)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-f34b7d?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://isocpp.org)
[![Storage](https://img.shields.io/badge/Storage-CSV_Engine-ffb31a?style=for-the-badge&logo=csv&logoColor=white)](record.csv)
[![Course](https://img.shields.io/badge/Course-Data_Structures-8a2be2?style=for-the-badge)](https://green.edu.bd)
[![License](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)](LICENSE)

**Empowering educational administration with secure, persistent data structures and CSV file management.**

---

[Explore Features](#-features) • [Project Structure](#-project-structure) • [How to Run](#-how-to-run) • [License](#-license)

</div>

---

## 🚀 Features

- 🔐 **Admin Authentication:** Secure credential hashing and login registration stored in `Log_In_Record.csv`.
- 📝 **Dynamic Record Registration:** Automated unique student ID generation and Department/Semester indexing.
- 🔍 **Binary / Linear Search Engine:** Instant lookup of student records by ID with $O(N)$ worst-case guarantees.
- 🔄 **In-Place Record Updating:** Surgical editing of names, departments, semesters, and CGPA metrics.
- 📋 **Formatted Tabular Presentation:** Colorized console tables using ANSI escape codes and loading animations.
- 🗑️ **Transactional Deletion:** Safe disk deletion using atomic `temp.csv` swaps to prevent data loss.

---

## 📁 Project Structure

```text
Data-Structures/
├── main.cpp                    # Application entry point & interactive menu CLI
├── StudentManager.h            # Struct definitions, prototypes & headers
├── StudentManager.cpp          # Full logic for CRUD operations & file streams
├── record.csv                  # Main student database table
├── Log_In_Record.csv           # Administrator credentials database
├── LICENSE                     # MIT License
└── README.md                   # System documentation
```

---

## 🛠️ Tech Stack

| Layer | Technology | Purpose |
| :--- | :--- | :--- |
| **Language** | C++ (C++17 standard) | Memory-efficient file stream processing |
| **Storage Engine** | Comma-Separated Values (CSV) | Lightweight flat-file persistent storage |
| **OS API** | Windows API (`<windows.h>`) | Console color manipulation and clear-screen buffering |
| **Design Pattern** | Procedural Modular Programming | Clear separation of header prototypes and logic |

---

## 💻 How to Run

### 1. Prerequisites
- MinGW / GCC C++ compiler installed on Windows.

### 2. Compilation
```bash
g++ main.cpp StudentManager.cpp -o StudentSystem
```

### 3. Execution
```bash
./StudentSystem
```

---

## 📄 License
Distributed under the MIT License. See `LICENSE` for more information.

<div align="center">

**Developed with ❤️ by Fuad**  
*Developed by Softece*  
*Data Structures | Green University of Bangladesh*

</div>
