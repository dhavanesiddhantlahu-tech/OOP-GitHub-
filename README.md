# Object Oriented Programming with C++ (ADPC303)
**Continuous Internal Evaluation (CIE) - Git Submission**

## Student Details
- **Student Name:** Siddhant Lahu Dhavane
- **PRN:** 125UAD1073
- **Class / Division:** S.Y. B.Tech AI & DS / D
- **Department:** Department of Artificial Intelligence & Data Science
- **Institute:** Zeal College of Engineering & Research, Pune

---

## Course Information
- **Course Name:** Object Oriented Programming with C++
- **Course Code:** ADPC303
- **Faculty:** Prof. Chandan Prasad

---

## Structure of Repository
- **Code Book Concepts:** Unit I to Unit IV (`Program_01.cpp` to `Program_56.cpp`)
- **Real-Time Applications & Mini-Projects:** Unit I to Unit VI (`U1_Live_Example_01.cpp` to `U6_Mini_Project.cpp`)

---

## Part 1: Detailed Code Book Programs (Units I - IV)

### Unit I & II: Fundamentals of OOP and Inheritance (Programs 01 - 24)
| Program File | Topic / Concept | Description |
| :--- | :--- | :--- |
| `Program_01.cpp` | Class & Object Basics | Basic class instantiation and encapsulation. |
| `Program_02.cpp` | Member Functions & Scope Resolution | Scope resolution operator (`::`) usage. |
| `Program_03.cpp` | Default & Parameterized Constructors | Object initialization mechanisms. |
| `Program_04.cpp` | Copy Constructor | Deep/shallow copy demonstration. |
| `Program_05.cpp` | Destructors | Proper resource cleanup and deallocation. |
| `Program_06.cpp` | Static Data Members & Static Functions | Class-level state tracking across instances. |
| `Program_07.cpp` | Friend Functions | Accessing private members via non-member functions. |
| `Program_08.cpp` | Array of Objects | Managing object records in sequential memory. |
| `Program_09.cpp` | Single Inheritance | Basic derived class inheriting a base class. |
| `Program_10.cpp` | Protected Access Specifier | Inheritance access control mechanisms. |
| `Program_11.cpp` | Public vs. Private Derivation | Visibility shifts under different derivation modes. |
| `Program_12.cpp` | Multilevel Inheritance | Multi-tier class hierarchies. |
| `Program_13.cpp` | Hierarchical Inheritance | Deriving multiple distinct child classes from one base. |
| `Program_14.cpp` | Multiple Inheritance | Inheriting properties from multiple parent classes. |
| `Program_15.cpp` | Ambiguity Resolution | Disambiguating identical member names from multiple bases. |
| `Program_16.cpp` | Constructor & Destructor Execution Order | Call sequence in inheritance hierarchies. |
| `Program_17.cpp` | Parameterized Base Constructor | Invoking base constructors via derived initializer lists. |
| `Program_18.cpp` | Virtual Functions & Override | Runtime polymorphism via virtual functions. |
| `Program_19.cpp` | Pure Virtual Functions & Abstract Classes | Interface design with pure virtual functions. |
| `Program_20.cpp` | Virtual Base Classes | Resolving multipath inheritance (Diamond problem). |
| `Program_21.cpp` | Friend Classes | Complete class-level private access sharing. |
| `Program_22.cpp` | Nested Classes | Enclosing helper class declarations inside a host class. |
| `Program_23.cpp` | Vehicle Rental Billing System | Polymorphic rental calculator application. |
| `Program_24.cpp` | Abstract Payroll System | Base interface for permanent and contract employees. |

### Unit III: Polymorphism (Programs 25 - 40)
| Program File | Topic / Concept | Description |
| :--- | :--- | :--- |
| `Program_25.cpp` | Function Overloading | Overloaded methods for integers, doubles, and strings. |
| `Program_26.cpp` | Shape Area Calculator | Overloading area formulas for square, rectangle, circle, and triangle. |
| `Program_27.cpp` | Unary Minus Operator Overloading | Negating a user-defined balance amount. |
| `Program_28.cpp` | Prefix and Postfix ++ / -- | Increment and decrement operators with dummy parameters. |
| `Program_29.cpp` | Binary + and - Operators | Complex number arithmetic with overloaded binary operators[cite: 8]. |
| `Program_30.cpp` | Relational > and == Operators | Distance comparison using relational operator overloading[cite: 8]. |
| `Program_31.cpp` | Friend / Non-Member Operator | Supporting integer-first expressions using friend operator functions[cite: 8]. |
| `Program_32.cpp` | Static Binding Demonstration | Early binding without virtual functions[cite: 8]. |
| `Program_33.cpp` | Runtime Polymorphism | Dynamic method lookup with base pointer and virtual functions[cite: 8]. |
| `Program_34.cpp` | Dynamic Binding via Base Reference | Virtual dispatch through references without object slicing[cite: 8]. |
| `Program_35.cpp` | Abstract Classes | Pure virtual functions enforcing derived class implementations[cite: 8]. |
| `Program_36.cpp` | Polymorphic Object Collection | Vector of base-class pointers managing derived shape objects[cite: 8]. |
| `Program_37.cpp` | Virtual Destructors | Preventing resource leaks through polymorphic cleanup[cite: 8]. |
| `Program_38.cpp` | Object Slicing Demonstration | Passing by value vs. passing by pointer/reference[cite: 8]. |
| `Program_39.cpp` | Payment Processing System | Card, UPI, and wallet processing via a polymorphic payment interface[cite: 8]. |
| `Program_40.cpp` | Employee Payroll Mini-Project | Polymorphic payroll application with tax deductions[cite: 8]. |

### Unit IV: Files and Streams (Programs 41 - 56)
| Program File | Topic / Concept | Description |
| :--- | :--- | :--- |
| `Program_41.cpp` | Writing to Text Files | Writing multiple lines of text using `ofstream`. |
| `Program_42.cpp` | Reading Line-by-Line | Reading records sequentially with line numbering using `ifstream`. |
| `Program_43.cpp` | Appending Data | Appending names and dates to files using `ios::app` mode. |
| `Program_44.cpp` | File Filtering & Copying | Reading and filtering specific matching lines into a new file. |
| `Program_45.cpp` | Text File Analytics | Counting lines, words, characters, vowels, consonants, and digits[cite: 7]. |
| `Program_46.cpp` | Word Search Algorithm | Case-insensitive word frequency counter[cite: 7]. |
| `Program_47.cpp` | Delimited Record Storage | Writing multi-attribute student records to a delimited text file[cite: 7]. |
| `Program_48.cpp` | Record Search & Table Formatter | Parsing and displaying text records in tabular console output[cite: 7]. |
| `Program_49.cpp` | Safe File Update Pattern | Updating records by writing to a temporary file and swapping files[cite: 7]. |
| `Program_50.cpp` | File Pointer Navigation | Positioning read/write heads with `seekg()`, `seekp()`, `tellg()`, `tellp()`[cite: 7]. |
| `Program_51.cpp` | Binary File Read/Write | Writing and reading fixed-size binary records using `reinterpret_cast`[cite: 7]. |
| `Program_52.cpp` | Random Access Binary Search | Calculating byte offsets to directly fetch records by ID[cite: 7]. |
| `Program_53.cpp` | Stream State & Error Handling | Validating file access using `good()`, `fail()`, `bad()`, and `eof()`[cite: 7]. |
| `Program_54.cpp` | File Statistics Mini-Project | Analyzing files and writing a summary report file[cite: 7]. |
| `Program_55.cpp` | Student Record Manager Mini-Project | Console CRUD manager with input validation[cite: 7]. |
| `Program_56.cpp` | Library Management Mini-Project | File-backed library catalog with issue/return status[cite: 7]. |

---

## Part 2: Real-Time Applications & Mini-Projects (Units I - VI)

| Program File | Unit | Application Title | Description |
| :--- | :---: | :--- | :--- |
| `U1_Live_Example_01.cpp` | Unit I | Smart Agriculture Sensor Monitor | Records and monitors soil sensor readings. |
| `U1_Live_Example_02.cpp` | Unit I | Student Attendance Management | Calculates attendance percentages and flags defaulters below 75%. |
| `U1_Live_Example_03.cpp` | Unit I | E-Commerce Product Catalog | Inventory management using static counters and inline functions. |
| `U1_Mini_Project.cpp` | Unit I | Smart Home Device Manager | Toggles device states across room locations. |
| `U2_Live_Example_01.cpp` | Unit II | Employee Payroll Hierarchy | Calculates full-time and part-time compensation structures[cite: 1]. |
| `U2_Live_Example_02.cpp` | Unit II | Digital Payment Gateway | Runtime polymorphic payment processing[cite: 1]. |
| `U2_Live_Example_03.cpp` | Unit II | Vehicle Fleet Management | Handles fleet records with class overrides[cite: 1]. |
| `U2_Mini_Project.cpp` | Unit II | Banking System Hierarchy | Implements deposit, withdrawal, and interest logic[cite: 1]. |
| `U3_Live_Example_01.cpp` | Unit III | CAD Shape Drawing System | Uses abstract base interfaces to compute area and draw shapes[cite: 1]. |
| `U3_Live_Example_02.cpp` | Unit III | Complex Number Calculator | Overloads binary arithmetic operators (`+`, `-`)[cite: 1]. |
| `U3_Live_Example_03.cpp` | Unit III | Input Validation Service | Validates strings, integers, and floats using function overloading[cite: 1]. |
| `U3_Mini_Project.cpp` | Unit III | Polymorphic Media Player | Simulates an audio/video player using polymorphic base pointers[cite: 1]. |
| `U4_Live_Example_01.cpp` | Unit IV | Student CSV File Storage | Serializes and parses delimited student text files[cite: 1]. |
| `U4_Live_Example_02.cpp` | Unit IV | Server Log Analyzer | Scans server logs to detect error and critical events[cite: 1]. |
| `U4_Live_Example_03.cpp` | Unit IV | Binary Record Storage | Demonstrates fixed-size binary read and write operations[cite: 1]. |
| `U4_Mini_Project.cpp` | Unit IV | Library Book Management System | Implements text-based file persistence for book records[cite: 1]. |
| `U5_Live_Example_01.cpp` | Unit V | Secure Banking Transaction Module | Uses custom exceptions for transaction error handling[cite: 1]. |
| `U5_Live_Example_02.cpp` | Unit V | Generic Sorting Service | Implements template functions to sort multiple data types[cite: 1]. |
| `U5_Live_Example_03.cpp` | Unit V | Template-Based Stack | Implements a generic LIFO stack data structure[cite: 1]. |
| `U5_Mini_Project.cpp` | Unit V | Safe Dynamic Array | Bounds-checked generic dynamic array with exception throwing[cite: 1]. |
| `U6_Live_Example_01.cpp` | Unit VI | Employee Directory Lookup | Sorts employees and uses associative maps for key lookups[cite: 1]. |
| `U6_Live_Example_02.cpp` | Unit VI | Web Traffic IP Analyzer | Evaluates incoming request counts by IP address using maps[cite: 1]. |
| `U6_Live_Example_03.cpp` | Unit VI | Student Grade Analytics | Uses priority queues and sets to calculate statistics[cite: 1]. |
| `U6_Mini_Project.cpp` | Unit VI | E-Commerce Shopping Cart | Uses STL containers to manage cart records and total invoices[cite: 1]. |
