A C++ implementation of a library management system, exploring topics of encapsulation and constructors in OOP

# 📚 Library Management System (C++ OOP)
A simple program created for my **Introduction to Object-Oriented Programming** class. This project explores the fundamentals of data integrity through encapsulation and efficient object initialization.

## Logic behind the code
- *Encapsulation*: Data members (bookTitle, totalCopies) are under private. This ensures these members can only be modified through controlled methods, preventing unauthorized changes of data.
- *Constructors*: Utilizes Member Initializer Lists — this helps in initializing members directly, ensuring a clean performance and clear object setup.
- *Error Handling*: Integrated logic in issueBook() to handle "Out of Stock" scenarios, providing immediate feedback from the end-user perspective.

## Beyond the Syllabus
While the class focused on functionality, I had learnt few concepts that help in end-user usage:
- ANSI Terminal Styling: Used escape codes to make the output look more styled. Used "033[32m" for the title of Library Status, and "033[1m" to bolden the footer.
- Explored the <utility> header and std::move to handle string transfers efficiently, reducing uneccesary memory overhead.

## Tech Stack
- Language: C++
- Paradigm: Object-Oriented Programming (OOP)
- Styling: ANSI Escape Sequences

**⚠️ NOTE:  This is an educational project designed to showcase how OOP is an integral part of C++ coding. It serves as a practical study on how encapsulation and constructors protect code integrity, with a touch of creativity.**
