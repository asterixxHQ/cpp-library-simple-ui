Implementation of C++ for a library management system that explores topics of encapsulation and constructors in OOP

# Library Management System (C++ OOP)
This program is a simple code done during my **Introduction to Object-Oriented Programming** class. This project applies topics of encapsulation and object initialization for data integrity.

## Logic behind the code
- *Encapsulation*: Data members like (bookTitle, totalCopies) are under private classes to makes sure that the members can only be modified through controlled methods so that it avoids unauthorized changes to the data stored previously.
- *Constructors*: It uses Member Initializer Lists which helps in initializing members directly, so that it has a clean performance and proper object setup.
- *Error Handling*: I added a logic in issueBook() to handle the "Out of Stock" scenarios to give immediate feedbacks from the perspective of an end-user.

## Beyond the Syllabus
My class focused on functionality, though I wanted to know if C++ has design related topics to which I learnt few concepts that help in end-user perspective:
- ANSI Terminal Styling: escape codes that make the output look more designed - used "033[32m" for the title of Library Status, and "033[1m" to bolden the footer.
- Learnt <utility> header and std::move to handle string transfers more smoothly to reduce uneccessary memory overhead.

## Tech Stack
- Language : C++
- Paradigm: Object-Oriented Programming (OOP)
- UI design: ANSI Escape Sequences

**⚠️ NOTE:  This project is an education program to show why OOP is an integral part of C++ coding and how encapsulation and constructors protect code integrity, along with designs to boost user interface.**
