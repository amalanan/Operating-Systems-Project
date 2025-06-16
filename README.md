
---

# 🐚 myshell — Operating Systems Project

## 👩‍💻 Authors

* **Aseel Khalil Omar Hodhod** (220200323)
* **Amal Yasser Farouq Anan** (220201122)
* **Dalia Jamal Taher Abu Sharekh** (220200747)

---

## 📄 Overview

**myshell** is a simple command-line shell written in **C**, designed to operate on **Ubuntu Linux** systems. It mimics the behavior of common Unix shells by supporting internal commands, batch file execution, redirection, and background processing.

---

## 🚀 Features

* 📂 Internal command execution
* 💡 External program support
* 📜 Batch file processing (`myshell script.bat`)
* 🔄 Input & output redirection (`<`, `>`, `>>`)
* 🧵 Background process execution (`&`)

---

## 🧰 Supported Internal Commands

| Command   | Description                            |
| --------- | -------------------------------------- |
| `cd`      | Change the current working directory   |
| `pwd`     | Print current working directory        |
| `clr`     | Clear the terminal screen              |
| `dir`     | List contents of a directory           |
| `environ` | Show all environment variables         |
| `echo`    | Display a line of text or file content |
| `help`    | Display user manual and command help   |
| `pause`   | Pause shell until Enter key is pressed |
| `quit`    | Exit the shell                         |
| `myshell` | Execute commands from a batch file     |

---

## ⚙ Installation & Compilation

### Prerequisites

Make sure `gcc` is installed:

```bash
sudo apt update
sudo apt install build-essential
```

### Compile myshell

```bash
gcc -o myshell myshell.c utility.c
```

---

## ▶️ Usage

### Interactive Mode

```bash
./myshell
```

### Batch Mode

```bash
./myshell test.bat
```

myshell will read and execute commands from the given file line by line, then exit automatically.

---

## 📚 Getting Help Inside the Shell

* View all internal commands:

  ```
  help command
  ```
* Get help for a specific topic:

  ```
  help cd
  help redirection
  help path
  ```
* Display full shell manual:

  ```
  help more
  ```

---

## ✍️ Batch File Example (`test.bat`)

```bash
echo Welcome to myshell!
pwd
dir
cd /home
pause
quit
```

Run it:

```bash
./myshell test.bat
```

---

## 🔄 I/O Redirection

| Symbol | Function                   |
| ------ | -------------------------- |
| `<`    | Input from file            |
| `>`    | Output to file (overwrite) |
| `>>`   | Output to file (append)    |

Examples:

```bash
echo < input.txt > output.txt
dir > list.txt
cd < dir_path.txt
```

---

## 🔧 Background Execution

Append `&` to any command:

```bash
long_task &
```

Allows the shell to continue accepting commands without waiting.

---

## 📂 Path Formats

myshell supports:

* Relative paths (`./folder`, `../folder`)
* Absolute paths (`/home/user`)
* Special tokens:

  * `..` → parent directory
  * `.` → current directory
  * `~` → home directory

⚠️ Use `\` to escape spaces in file/directory names:

```bash
echo < file\ name.txt
```

---

## 📘 Example Commands

| Action                 | Command                         |
| ---------------------- | ------------------------------- |
| Change directory       | `cd /home/user`                 |
| Show current directory | `pwd > pwd.txt`                 |
| Display file content   | `echo < input.txt > output.txt` |
| List files             | `dir > list.txt`                |
| Pause execution        | `pause`                         |
| Run batch file         | `myshell script.bat`            |
| Background command     | `sleep 5 &`                     |

---

## 📌 Notes

* If redirection fails, "Path Error" or "Open Error" will be reported.
* Only the last output file in a redirection sequence is used.
* Background processes don't block further shell input.

---

## 📅 Submission Details

* **Course:** Operating Systems
* **Instructor:** Eng. Amal Mahfouz
* **Submission Date:** June 15, 2025
* **Project Title:** myshell – A Custom Command-Line Shell

---

Let me know if you'd like to export this as a `.md` file or generate a PDF!
