# 🎬 Film Rental Management System
*"Inchiriere_filme"* is a C++ application designed to manage movie rentals efficiently. It provides a comprehensive set of features including movie management, rental cart operations, and undo functionality, ensuring a smooth rental experience.

## 🏗️ Architecture Overview
The system follows a multi-layered architecture, ensuring scalability, maintainability, and modularity:

-  📦 **Domain Layer**
Defines the core data entities of the system:

    -  *Film* – Represents a movie with attributes:

        -  titlu (title)

        -  gen (genre)

        - an_aparitie (release year)

        -  actor_principal (lead actor)

-  💾 **Repository Layer**
Handles data storage and retrieval using dynamic data structures:

      -  Implements *CRUD operations* for managing movie records.

      -  Uses *std::vector* for efficient storage and retrieval.

-  ⚙️ **Service Layer**
Contains the business logic of the application:

      -  Manages movie operations (add, update, delete, search, sort, filter).

      -  Handles rental cart functionality, allowing users to add movies, view cart contents, and export to HTML.

-  🖥️ **User Interface Layer**
Provides an interactive GUI using Qt Framework:

      -  User-friendly and visually appealing design.

      -  Ensures intuitive navigation for managing the movie catalog.

-  ⏪ **Undo Mechanism**
Implements the *Command Pattern*, allowing users to:

      -  Revert recent operations, ensuring data integrity.

      -  Undo changes for added flexibility in managing the rental catalog.

## 🗂️ Data Persistence
The system uses file-based storage for reliable data management:

-  filme.txt – Stores movie records for long-term persistence.

## ✅ Test Coverage & Reliability
-  📊 **Extensive Unit Testing** – The project includes rigorous unit tests covering all critical functionalities.
-  🧪 **High Code Coverage** – A significant portion of the codebase is tested to ensure correctness and stability.
-  🔄 **Regression Testing** – Changes are validated against existing tests to prevent unintended bugs.

## 🌟 Key Features
-  ✅ **Comprehensive Movie Management** – Supports full lifecycle operations: add, remove, update, search, sort, and filter movies.
-  🔍 **Advanced Query Options** – Users can filter and sort movies based on title, genre, or release year.
-  🛒 **Rental Cart Management** – Easily add, view, and clear rental selections before checkout.
-  📤 **Export Rental Cart** – Save cart contents in an HTML file for reference or sharing.
-  ⏪ **Undo Functionality** – Allows users to revert actions, preventing accidental modifications.
-  🖥️ **Modern Graphical Interface** – Built with Qt for an intuitive and engaging user experience.
-  🛠️ **Optimized Performance** – Uses STL containers (std::vector, std::map) for efficient data handling.
-  🛡️ **Robust Error Handling** – Strong validation and exception handling ensure system stability.

## 🔬 Technical Highlights
-  **Language**: C++

-  **Architecture**: Multi-layered (Domain, Repository, Service, UI)

-  **GUI**: *Qt Framework* for a modern, responsive interface

-  **Data Persistence**: File-based system using text files (filme.txt)

-  **Design Patterns**: Implements *Observer Pattern* (real-time updates) and *Command Pattern* (undo functionality).

-  **Memory Management**: Efficient dynamic memory allocation, preventing leaks.

-  **Error Handling**: Comprehensive exception handling for a smooth user experience.

-  **Test Coverage**: High unit test coverage ensures the reliability and correctness of the system.

