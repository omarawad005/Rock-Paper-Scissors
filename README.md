# 🪨 Rock Paper Scissors Game

<p align="center">
  <strong>A simple and fun Rock Paper Scissors console game built with C++</strong>
</p>

<p align="center">
  🎮 Player vs Computer &nbsp; | &nbsp; 🏆 Score Tracking &nbsp; | &nbsp; 🎲 Random Choices
</p>

---

## 📌 About The Project

**Rock Paper Scissors** is a console-based game developed using **C++**.

The player chooses between **Rock, Paper, and Scissors**, while the computer generates a random choice. The game determines the winner of each round and keeps track of the overall results.

---

## ✨ Features

* 🎮 Player vs Computer
* 🪨 Rock, 📄 Paper, ✂️ Scissors
* 🎲 Random computer choices
* 🏆 Round winner detection
* 📊 Score tracking
* 🤝 Draw detection
* 🎨 Console screen colors
* 🔄 Play Again option
* 🏁 Final game results

---

## 🛠️ Technologies

<p align="center">

<img src="https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=cplusplus&logoColor=white">

<img src="https://img.shields.io/badge/Visual%20Studio-5C2D91?style=for-the-badge&logo=visualstudio&logoColor=white">

<img src="https://img.shields.io/badge/Git-F05032?style=for-the-badge&logo=git&logoColor=white">

<img src="https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white">

</p>

---

## 🎮 How The Game Works

The game starts by asking the player to enter the number of rounds.

For every round:

```text
Player → Choose Rock / Paper / Scissors
              ↓
Computer → Random Choice
              ↓
        Compare Choices
              ↓
       Determine Winner
              ↓
        Update Score
```

At the end of all rounds, the game displays the final results.

---

## 🧠 Game Rules

|    Player   |   Computer  |     Result    |
| :---------: | :---------: | :-----------: |
|   🪨 Rock   | ✂️ Scissors |  Player Wins  |
|   📄 Paper  |   🪨 Rock   |  Player Wins  |
| ✂️ Scissors |   📄 Paper  |  Player Wins  |
| Same Choice | Same Choice |      Draw     |
|  Otherwise  |             | Computer Wins |

---

## 📂 Project Structure

```text
Rock-Paper-Scissors/
│
├── 📄 Project_Number_1.sln
│
├── 📁 Project_Number_1/
│   ├── 📄 Project_Number_1.cpp
│   ├── 📄 Project_Number_1.vcxproj
│   └── 📄 Project_Number_1.vcxproj.filters
│
├── 📄 .gitignore
└── 📄 README.md
```

---

## ▶️ How To Run

### 1. Clone the repository

```bash
git clone https://github.com/omarawad005/Rock-Paper-Scissors.git
```

### 2. Open the project

Open:

```text
Project_Number_1.sln
```

using **Visual Studio**.

### 3. Build & Run

Build the project and run the application.

---

## 🖥️ Example

```text
Enter Number of Round 1 to 10 : 3

Round [1] begins :

Your Choice [1]:Rock, [2]:Paper, [3]:Scissors ? 1

__________Round 1_______________

Player1 Choice  : Rock
Computer Choice : Scissors
Round Winner    : Player 1
```

---

## 📚 What I Practiced

This project helped me practice:

* `struct`
* `enum`
* Functions
* References
* Loops
* Conditional Statements
* Random Numbers
* Input Validation
* Basic Game Logic
* Git & GitHub

---

## 🚀 Future Improvements

Some possible improvements:

* Add a graphical user interface
* Add sound effects
* Add difficulty levels
* Add more game statistics
* Improve the user interface

---

## 👨‍💻 Author

### Omar Awad

<p align="center">

<a href="https://github.com/omarawad005">
  <img src="https://img.shields.io/badge/GitHub-omarawad005-181717?style=for-the-badge&logo=github">
</a>

</p>

---

<p align="center">
  ⭐ If you found this project useful, feel free to star the repository!
</p>
