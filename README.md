# 🏏 Player Management System in C++

This is a simple console-based Player Management System developed in C++. It allows users to manage cricket player data including adding, searching, updating, deleting, and displaying information. The system also identifies the top three players based on a custom score calculation.

## 📌 Features

- Add a new player with details: jersey number, name, runs, wickets, and matches played.
- Search a player by jersey number.
- Update player statistics.
- Remove a player from the list.
- Display all players with complete information.
- Show top 3 players based on performance score (`Score = Runs + (Wickets × 20)`).

## 🛠️ Technologies Used

- **Language**: C++
- **Concepts**: Object-Oriented Programming (OOP), Classes, Arrays, Input/Output handling

## 🚀 Getting Started

1. Clone this repository or copy the source code into a `.cpp` file.
2. Compile using a C++ compiler:
   ```bash
   g++ -o player_management player_management.cpp
   ```
3. Run the executable:
   ```bash
   ./player_management
   ```
## 🧠 Scoring Logic
The top 3 players are ranked based on their score, calculated as:
   ```bash
   Score = Runs + (Wickets × 20)
   ```
## 📂 Project Structure
Player: A class that holds the player's data and score logic.

playerManagement: A class to manage all player-related operations.

main(): Provides a menu-driven interface for interacting with the system.
