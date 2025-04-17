 # Voting System

 🗳️ Voting System Using Structures in C

 📌 Overview

This is a simple commandline voting system written in C using structures and dynamic memory allocation. It allows users to:
 Register a list of candidates
 Vote for candidates by number
 View current vote counts
 End voting and display final results



 🧱 Features

 📋 Candidate Registration: Input any number of candidates with names.
 ✅ Live Voting: Voters cast their votes by entering a candidate number.
 🔄 Realtime Result Checking: Check live vote count using a special input.
 📊 Final Results: After voting ends, results are displayed with total vote counts.


🛠️ How It Works

1. Structure Definition:
    c
    typedef struct {
        int candidateId;
        char candidateName[50];
        int voteCount;
    } Candidate;
    
    Each candidate has:
     candidateId – a unique number
     candidateName – a string (up to 49 characters)
     voteCount – an integer counter for votes

2. Program Flow:
     User inputs the number of candidates.
     Each candidate's name is collected and stored in a dynamically allocated array.
     Voting begins:
         Voters enter a number to vote.
         Enter 1 to view current results.
         Enter 0 to end voting.
     Final results are shown in a formatted table.


🧪 Sample Run
                                  
                                  
                                  Enter the number of candidates: 3
                                  Enter name for Candidate 1: Alice
                                  Enter name for Candidate 2: Bob
                                  Enter name for Candidate 3: Charlie
                                  
                                  Voting has started. Options:
                                   Enter candidate number (13) to vote
                                   Enter 1 to view current results
                                   Enter 0 to end voting
                                  
                                  Enter your choice: 1
                                  Vote recorded for Alice (Candidate 1).
                                  
                                  Enter your choice: 1
                                  
                                  Current Vote Counts:
                                  
                                  ID      Name            Votes
                                  
                                  1       Alice           1
                                  2       Bob             0
                                  3       Charlie         0
                                  
                                  Enter your choice: 0
                                  
                                  Final Vote Counts:
                                  
                                  ID      Name            Votes
                                  
                                  1       Alice           1
                                  2       Bob             0
                                  3       Charlie         0
                                  
                                  Voting closed.



---

### 📁 File Structure

```
voting_system.c     // Main C program file
README.md           // This documentation file
```

---



 📌 Key Functions

 clearInputBuffer(): Removes extra characters from stdin to prevent input issues.
 showResults(): Prints current or final results with formatted layout.


 ###👨‍💻 Author
```
 Prathyush R. Nair
B.Tech at Artificial Intelligence & Data Science  
Muthoot Institute of Technology and Science varikoli puthencruz
```
---

Thank you for reading this README file


*** --- *** --- *** THE END --- *** --- *** --- ***

