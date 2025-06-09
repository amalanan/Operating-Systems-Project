# myshell — Operating Systems Project

## Authors
- **Aseel Khalil Omar Hodhod** (220200323)  
- **Amal Yasser Farouq Anan** (220201122)  
- **Dalia Jamal Taher Abu Sharekh** (220200747)

---

## Overview

**myshell** is a custom-built command-line shell written in **C**, designed to run on **Ubuntu Linux**. It offers core features found in modern shells, including:

- Execution of internal commands
- Running external programs
- Batch file processing
- Input and output redirection
- Background process execution

---

## Features

### ✅ Supported Internal Commands

| Command   | Description                              |
|-----------|------------------------------------------|
| `cd`      | Change the current directory             |
| `pwd`     | Print current working directory          |
| `clr`     | Clear the terminal screen                |
| `dir`     | List contents of a directory             |
| `environ` | Show all environment variables           |
| `echo`    | Display a line of text                   |
| `help`    | Display user manual                      |
| `pause`   | Pause shell until Enter key is pressed   |
| `quit`    | Exit the shell                           |
| `myshell` | Execute commands from a batch file       |

---

## 🔧 Installation & Compilation on Ubuntu

1. **Install GCC (if not already installed):**
   ```bash
   sudo apt update
   sudo apt install build-essential
   ```

2. **Compile myshell:**
   ```bash
   gcc -o myshell myshell.c utility.c
   ```

---

## ▶️ Usage

### Interactive Mode
Start myshell with a prompt:
```bash
./myshell
```

### Batch Mode
Execute commands from a batch file:
```bash
./myshell test.bat
```

The shell will automatically exit when the batch file is completed.

---

## ❓ Getting Help

### General Manual:
```bash
help
```

### Specific Command Help:
```bash
help <command>
```

### Examples:
```bash
help cd
help redirection
help background
```

---

## 📜 Batch File Support

You can place a list of commands inside a text file (e.g., `script.bat`), and execute them like so:

```bash
./myshell script.bat
```

The shell reads and executes each line sequentially and exits upon completion.

---

## 🔄 I/O Redirection

`myshell` supports redirection for both **input** and **output**:

- `<` : Input redirection
- `>` : Output redirection (overwrite)
- `>>` : Output redirection (append)

### Example:
```bash
echo < input.txt > output.txt
```

### Commands supporting I/O redirection:

- **Input:** `cd`, `dir`, `echo`  
- **Output:** `pwd`, `dir`, `environ`, `echo`, `help`

---

## ⚙️ Background Execution

To execute a command in the background (non-blocking), append an `&` at the end:

```bash
long_running_command &
```

This allows the shell to continue accepting new commands while the background task executes.

---

## 📘 Detailed Command Descriptions

### `cd [directory]`
Change current working directory. If no directory is specified, it prints the current one.
```bash
cd /home/user
cd < path.txt
```

### `clr` or `clear`
Clear the screen.
```bash
clr
```

### `dir [directory]`
List contents of a directory. Supports input/output redirection.
```bash
dir /home > list.txt
dir < in.txt > out.txt
```

### `environ`
List environment variables. Output can be redirected.
```bash
environ >> env.txt
```

### `echo [message]`
Print a message. Input/output can be redirected.
```bash
echo Hello World > msg.txt
echo < a.txt > b.txt
```

### `help [command]`
Show help manual. Output can be redirected.
```bash
help dir > out.txt
```

### `pause`
Pause shell execution until Enter is pressed.
```bash
pause
```

### `pwd`
Display the current working directory. Output can be redirected.
```bash
pwd > current_dir.txt
```

### `quit` or `exit`
Exit the shell.
```bash
quit
```

### `myshell <file>`
Execute a set of commands from a file.
```bash
myshell script.bat
```

---

## 📂 File and Directory Path Support

myshell supports:

- Relative paths (`./dir`, `../dir`)
- Absolute paths (`/home/user`)
- Special symbols:
  - `..` — Parent directory
  - `.` — Current directory
  - `~` — Home directory

> ⚠️ Filenames or directories with **spaces** must be escaped:
```bash
echo < file\ name.txt
```

---

## 🛠 Sample Batch File: `test.bat`

```
echo Welcome to myshell!
pwd
dir
cd /home
pause
quit
```

---

## ✅ Example Test Run

```bash
./myshell test.bat
```

**Output:**
```
Welcome to myshell!
/home/user
Documents
Downloads
...
Press Enter to continue...
```

