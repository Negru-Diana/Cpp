# 🎬 Film Rental Management System
The Film Rental Management System is a robust application designed to streamline the management of movie rentals, offering a comprehensive set of features for efficient operation.

## 🎯 Key Features
-  Add Movies ➕ – Easily incorporate new movies into the rental catalog by specifying details such as title, genre, release year, and lead actor.

-  Remove Movies ❌ – Efficiently delete movies from the catalog when they are no longer available for rent.

-  Modify Movie Details ✏️ – Update existing movie information to maintain an accurate and current catalog.

-  Search Movies 🔍 – Quickly locate movies in the catalog using various search criteria.

-  Sort Movies 📋 – Organize the movie list based on different attributes such as title, genre, or release year.

-  Filter Movies 🎭 – Apply filters to display movies based on specific criteria.

-  Manage Rental Cart 🛒 – Add movies to the rental cart, view the current selection, and clear it when needed.

-  Export Rental Cart 🛒 – Export the contents of the rental cart to an HTML file for easy sharing.

-  Undo Actions ⏪ – Implement undo functionality to revert recent changes and ensure data integrity.

## 🏗️ Architecture Overview
-  The application follows a multi-layered architecture, ensuring clarity, scalability, and maintainability:

-  Domain Layer – Defines the core entities of the system, encapsulating attributes such as title, genre, release year, and lead actor.

-  Repository Layer – Manages data storage and retrieval, implementing CRUD operations. It utilizes dynamic data structures for efficient data management.

-  Service Layer – Contains the business logic, handling operations like adding, updating, deleting, sorting, filtering, and managing the rental cart.

-  User Interface (UI) Layer – Provides an interactive graphical user interface built with the Qt framework.

-  Undo Mechanism – Implements the Command Pattern to allow undo functionality for various operations.

## 🖥️ Technologies Used
-  C++ – Core programming language.

-  Qt Framework – For building a modern and interactive GUI.

-  Standard Template Library (STL) – Used for efficient data management.

-  Design Patterns – Implements Observer and Command Patterns for system management.

## 🧪 Test Coverage
-  The project includes extensive unit testing to ensure reliability and correctness.

-  The test suite covers all critical functionalities with high code coverage.

## 🗂️ Data Persistence
The system employs file-based data storage for record management.

## 🌟 Key Highlights
-  Modular Design – The multi-layered architecture ensures a clear separation of concerns.

-  Robust Input Validation – Ensures data integrity by preventing invalid operations.

-  Comprehensive Functionality – Full lifecycle management of movies, including sorting, filtering, and undo actions.

-  User-Friendly Interface – The Qt-based GUI enhances usability.

-  Efficient Memory Management – Optimized for performance and stability.

-  Robust Error Handling – Designed to handle errors gracefully and maintain system stability.
