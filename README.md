# myshell — Operating Systems Project 

## Authors
- **Aseel Khalil Omar Hodhod** (220200323)  
- **Amal Yasser Farouq Anan** (220201122)  
- **Dalia Jamal Taher Abu Sharekh** (220200747)

## Overview

**myshell** is a simple command-line shell implemented in C, designed to run on **Ubuntu Linux**. It supports:

- Built-in internal commands  
- Batch file execution  
- Input/Output redirection  
- Background command execution

---

## Supported Internal Commands

| Command   | Description                             |
|-----------|-----------------------------------------|
| `cd`      | Change current directory                |
| `pwd`     | Print current working directory         |
| `clr`     | Clear the terminal screen               |
| `dir`     | List contents of a directory            |
| `environ` | List environment variables              |
| `echo`    | Display a message                       |
| `help`    | Display help information                |
| `pause`   | Pause shell execution until keypress    |
| `quit`    | Exit the shell                          |
| `myshell` | Execute commands from a batch file      |

---

## Installation & Compilation on Ubuntu

1. **Install GCC (if not already installed):**
   ```bash
   sudo apt update
   sudo apt install build-essential

2.Compile myshell:

bash
Copy
Edit
gcc -o myshell myshell.c utility.c
Usage
Interactive mode:

bash
Copy
Edit
./myshell
Batch mode:

bash
Copy
Edit
./myshell test.bat
Getting Help
Type help or ? to display the full user manual.

For specific command help:

bash
Copy
Edit
help <command>
Examples:

bash
Copy
Edit
help cd
help dir
help redirection
Batch File Support
You can run commands non-interactively by passing a batch file:

bash
Copy
Edit
./myshell batchfile.txt
The shell will exit automatically after finishing all commands in the batch file.

Input/Output Redirection
Use redirection symbols to route input/output:

< — Redirect standard input from a file

> — Redirect standard output (overwrite)

>> — Redirect standard output (append)

Example:

bash
Copy
Edit
program arg1 < input.txt > output.txt
Commands that support redirection:

Input: cd, dir, echo

Output: pwd, dir, environ, echo, help

Background Execution
To run a command in the background, append &:

bash
Copy
Edit
long_running_command &
This allows the shell to accept new commands while the background task runs.

Detailed Command Descriptions
cd
Change the current working directory.
Supports input redirection.

bash
Copy
Edit
cd /home/user
cd < directory.txt
clr or clear
Clears the terminal screen.

dir
Lists contents of a directory.
Supports input/output redirection.

bash
Copy
Edit
dir /home/user > listing.txt
dir < input.txt > output.txt
environ
Lists all environment variables.
Supports output redirection.

echo
Displays a message.
Supports input/output redirection.

help
Shows user manual or command-specific help.
Supports output redirection.

pause
Pauses execution until the Enter key is pressed.

quit
Exits the shell.

File and Directory Paths
Supports both relative and absolute paths

Special symbols:

.. — parent directory

. — current directory

~ — home directory


thanks
