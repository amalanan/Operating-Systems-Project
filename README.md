# Operating-Systems-Project
myshell — Operating Systems Project 1

Authors:  
- Aseel Khalil Omar Hodhod (220200323)  
- Amal Yasser Farouq Anan (220201122)  
- Dalia Jamal Taher Abu Sharekh (220200747)  

---

Overview

myshell is a simple command-line shell implemented in C, designed to run on Ubuntu Linux. It supports built-in commands, batch file execution, input/output redirection, and background execution.

---

Supported Internal Commands

Command   : Description
--------- : ------------------------------------------
cd        : Change current directory
pwd       : Print working directory
clr       : Clear the terminal screen
dir       : List contents of a directory
environ   : List environment variables
echo      : Display a message
help      : Display help information
pause     : Pause shell execution until keypress
quit      : Exit the shell
myshell   : Execute commands from a batch file

---

Installation and Compilation on Ubuntu

1. Install GCC (if not installed):

sudo apt update
sudo apt install build-essential

2. Compile myshell:

gcc -o myshell myshell.c

(Replace myshell.c with your main C source file or files as necessary)

---

Usage

- Run myshell interactively:

./myshell

- Run batch files:

./myshell test.bat

---

Getting Help

- Type help or ? to display the user manual.
- To get detailed info about a specific command:

help <command>

Example:

help cd
help dir
help redirection

---

Batch File Support

- Launch myshell with a batch file to run commands non-interactively.
- Shell exits when batch file commands finish.

---

Input/Output Redirection

Use <, >, and >> for redirecting input/output.

Operator : Description
---------: ----------------------------------
<        : Redirect standard input from file
>        : Redirect standard output (overwrite)
>>       : Redirect standard output (append)

Example:

program arg1 < input.txt > output.txt

Supported redirection commands:
- Input redirection: cd, dir, echo
- Output redirection: pwd, dir, environ, echo, help

---

Background Execution

Run a command in the background by appending &:

long_running_command &

The shell will accept new commands immediately.

---

Detailed Command Descriptions

cd

Change the current directory or display it if no argument is given. Supports input redirection.

cd /home/user
cd < directory.txt

---

clr or clear

Clear the terminal screen.

---

dir

List directory contents. Supports input/output redirection.

dir /home/user > listing.txt
dir < input.txt > output.txt

---

environ

List environment variables. Supports output redirection.

---

echo

Display messages. Supports input/output redirection.

---

help

Show the user manual or detailed help for commands. Supports output redirection.

---

pause

Pause execution until Enter key is pressed.

---

quit

Exit the shell.

---

File and Directory Paths

- Supports relative and absolute paths.
- Special symbols supported:
  ..  — parent directory
  .   — current directory
  ~   — home directory
---
thanks
