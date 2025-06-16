# myshell — Operating Systems Project

## Course Information
**Course Name:** Operating Systems  
**Submitted to:** Eng. Amal Mahfouz  
**Project Title:** myshell – A Custom Command-Line Shell  

## Authors
- **Amal Yasser Farouk Anan** — 220201122  
- **Aseel Khalil Omar Hodhod** — 220200323  
- **Dalia Jamal Taher Abu Sharekh** — 220200747  

**Submission Date:** June 15, 2025  

---

## Overview

**myshell** is a simple custom command-line shell written in C and compiled with the GCC compiler.  
It supports the following internal commands:

cd clr dir echo environ
help myshell pause pwd quit

sql
Copy
Edit

Some of these internal commands may also have equivalent external executables.

- Type `help more` for the full user manual.
- For help on a specific topic:

help help — Learn about the 'help' command
help command — View a list of internal commands
help shell — Learn more about the shell itself
help bat — Understand how batch files are processed
help i/o redirection — Learn about input/output redirection
help background — Learn about background execution
help path — Understand file and directory path formats

yaml
Copy
Edit

---

## <help shell>

The shell, or command-line interpreter, is a fundamental interface between the user and the OS. It:

- Interprets user input  
- Executes the appropriate commands  
- Prompts for further input  

Modes:
- **Interactive** — Commands are entered manually at the prompt  
- **Non-interactive** — Executed from a script/batch file  

---

## <help command>

**myshell** supports the following internal commands:

cd clr dir echo environ
help myshell pause pwd quit

yaml
Copy
Edit

To get usage information:  
Example: `help cd`

---

## <help bat> — Batch File Support

You can execute a batch file as a script:
```bash
myshell test.bat
Once the file is fully executed, myshell exits.

<help i/o redirection> — I/O Redirection
myshell supports redirection of stdin and stdout.

Example:

bash
Copy
Edit
programname arg1 arg2 <inputfile >outputfile
< Input redirection

> Output redirection (overwrite)

>> Output redirection (append)

Supported commands:

Input < for: cd, dir, echo

Output >, >> for: dir, environ, echo, help, pwd

Example usage:

bash
Copy
Edit
dir <a.txt >b.txt >c.txt
Only the last file (c.txt) receives the output.

<help background execution> — Background Execution
To execute a command in the background, add & at the end:

bash
Copy
Edit
programname &
This is supported in both interactive and batch modes.

Detailed Usage of Internal Commands
<help cd>
bash
Copy
Edit
cd [directory]
Changes current directory.

Updates PWD environment variable.

Supports input redirection (e.g., cd <test.txt)

<help clr>
bash
Copy
Edit
clr
Clears the screen.

<help dir>
bash
Copy
Edit
dir [directory]
Lists contents of a directory without changing PWD.

Supports input/output redirection.

<help environ>
bash
Copy
Edit
environ
Lists all environment variables.

Supports output redirection.

<help echo>
bash
Copy
Edit
echo [comment]
Displays comment text.

Supports input/output redirection.

<help help>
bash
Copy
Edit
help [command] or ? [command]
Displays usage information.

Example: help dir

<help myshell>
bash
Copy
Edit
myshell batchfile
Runs commands from a batch file.

Example: myshell test.bat >c.txt

<help pause>
bash
Copy
Edit
pause
Displays "Press Enter to continue..."

Waits for Enter key press.

<help pwd>
bash
Copy
Edit
pwd
Displays the current working directory (PWD).

Supports output redirection.

<help quit>
bash
Copy
Edit
quit or exit
Exits the shell.

<help path> — Directory/File Paths
myshell recognizes:

sql
Copy
Edit
..   — Parent directory  
.    — Current directory  
~    — Home directory  
If a filename contains spaces, escape them using \.
Example:

bash
Copy
Edit
echo <a\ b
