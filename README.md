# Student Grade Tracker  
**Author:** Neel Manro (manroneel@gmail.com)  

A beginner-friendly **C-based student grade tracker** that helps manage student records with grades and letter grades. The program supports basic features like printing all students, calculating averages, and adding new students — now with **file saving and loading** for data persistence between sessions.

This project demonstrates core C programming concepts such as structs, arrays, input handling, and file I/O.

---

## ✅ Features
- Add a new student with name and numeric grade  
- Automatically assign letter grades (A–F)  
- View all student records  
- Calculate average grade of the class  
- **Load student records from a file at program start**  
- **Save updated records back to the file**  

---

## 🧠 Concepts Used
- C structs  
- Arrays and loops  
- File I/O (`fopen`, `fscanf`, `fprintf`)  
- `scanf` and `getchar` input handling  
- Menu-based CLI (Command Line Interface)  
- Input validation (grades between 0 and 100)  

---

## ⚙️ How to Compile & Run
> 💻 Works on any system with GCC installed

1. Download the `Student.c` file  
2. Open Terminal and navigate to the folder  
3. Compile the file using:
gcc Student.c -o student
./Student
