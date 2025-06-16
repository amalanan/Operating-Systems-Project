<help>

======================================================================
=========================== Project Report ===========================
======================================================================

Course Name      : Operating Systems
Submitted to     : Eng. Amal Mahfouz
Project Title    : myshell – A Custom Command-Line Shell

Submitted by:
    - Amal Yasser Farouk Anan           | ID: 220201122
    - Aseel Khalil Omar Hodhod          | ID: 220200323
    - Dalia Jamal Taher Abu Sharekh     | ID: 220200747

Submission Date  : June 15, 2025

======================================================================

myshell supports the following internal commands:
    cd    clr     dir   echo  environ
    help  myshell  pause  pwd   quit

Some internal commands may also have equivalent external executables,
which myshell is capable of executing as well.

Type "help more" for the full user manual.
To get help on a specific topic, use the following commands:
    "help help"          — Learn about the 'help' command
    "help command"       — View a list of internal commands
    "help shell"         — Learn more about the shell itself
    "help bat"           — Understand how batch files are processed
    "help i/o redirection" — Learn about input/output redirection
    "help background"    — Learn about background execution
    "help path"          — Understand file and directory path formats
#

<help shell>
The shell, or command-line interpreter, is a fundamental interface between the user and the operating system.
The shell:
    * Interprets user input
    * Executes the appropriate commands
    * Prompts for further input

It can be used in two modes:
    * Interactively — commands are entered manually at the prompt
    * Non-interactively — by executing a script or batch file
#

The myshell program is implemented in standard C using the GCC compiler.

======================================================================
========================= Internal Commands ==========================
======================================================================

<help command> <help commands> <help internal command> <help internal commands>

myshell supports the following internal commands:
    cd    clr     dir   echo  environ
    help  myshell  pause  pwd   quit

External executable programs may also provide similar functionality.
Type "help [command]" to get detailed usage information.
Example: help cd
#

<help bat> <help batchfile>
======================================================================
========================= Batch File Support =========================
======================================================================

myshell can read commands from a batch file when a file name is provided as a command-line argument.
Example:
    myshell test.bat

In this case, test.bat is treated as a script containing a sequence of commands to be executed.
The shell will automatically exit once the end of the file is reached.

If no batch file is provided, myshell operates in interactive mode.
See also: "help myshell"
#

<help i/o redirection> <help I/O Redirection> <help io redirection>
======================================================================
========================== I/O Redirection ===========================
======================================================================

myshell supports input and output (I/O) redirection for both standard input (stdin) and standard output (stdout).
Example:
    programname arg1 arg2 <inputfile >outputfile

This runs programname with arg1 and arg2, reading input from inputfile and writing output to outputfile.

Full pathnames can be used, for example:
    /home/username/test.txt

To learn more about paths, type: "help path"

*Supported Redirection:*
- Input redirection (<) is supported for: cd, dir, echo
- Output redirection (>, >>) is supported for: dir, environ, echo, help, pwd

<help redirection>
Additional notes on redirection:
    * < reads input from a file. If the file doesn’t exist, a "Path Error" will occur.
      Example: cd <test.txt
    * > writes output to a file, overwriting it if it exists or creating it if it doesn't.
      Example: ls >test.txt
    * >> appends output to a file, creating it if it doesn't exist.
      Example: environ >>test.txt

You can use multiple redirection operators for output, but **myshell will direct the output only to the last specified file**.
    echo <m.txt >n.txt  (Output goes to n.txt)
    dir >m.txt >n.txt   (Output goes to n.txt)

If a file can't be opened due to permission issues, an "Open Error" is displayed.
#

<help background execution> <help background>
======================================================================
======================== Background Execution ========================
======================================================================

By default, the shell waits for a command to finish before accepting another.
This behavior can be bypassed using background execution.

To execute a command in the background, add an ampersand & at the end:
    programname &

This allows myshell to immediately return to the prompt without waiting for the program to finish.
Background execution is supported in both interactive and batch modes.
#

======================================================================
=================== Detailed Usage of Each Command ===================
======================================================================

<help cd>
Format:    cd [directory]
-- Changes the current default directory to [directory].
    e.g.    cd /home
    This command also changes the PWD environment variable (use the command "pwd" to see it).
    As for the directory path, type "help path" to get more information.
    If the [directory] argument is not present, the current directory is reported.
    If the directory does not exist, a "Path Error" will be reported on the screen.
    Moreover, you can use a directory path written in a file as:
    e.g.    cd <test.txt
    The file can be given by the full path as:
            cd </home/username/test.txt
    As to the file path format, type "help path" to get more information.
#

<help clr> <help clear>
Format:    clr
or          clear
-- Clears the screen; no arguments are needed.
#

<help dir>
Format:    dir [directory]
-- Lists the contents of directory [directory].
    e.g.   dir  /home
    This command is different from "cd"; it changes neither the current default directory nor the PWD environment variable (use the command "pwd" to see it).
    As for the directory path, type "help path" to get more information.
    If the [directory] argument is not present, it lists the contents of the current directory. If the directory does not exist, a "Path Error" will be reported on the screen.

    Moreover, you can use a directory path written in a file as:
    e.g.   dir <a.txt
    And you can list the contents into one file or more than one file as:
    e.g.   dir >b.txt      or    dir >b.txt >c.txt
    The token ">" can be replaced by ">>"; type "help redirection" to see the difference between ">" and ">>".
    You can use both input redirection and output redirection as:
    e.g.   dir <a.txt >b.txt >c.txt
    The file can be given by the full path as:
           dir </home/username/a.txt
    As to the file path format, type "help path" to get more information.
#

<help environ>
Format:    environ
-- Lists all the environment strings on screen or into one file or more than one file as:
    e.g.   environ      or    environ >b.txt      or    environ >b.txt >c.txt
    The token ">" can be replaced by ">>"; type "help redirection" to see the difference between ">" and ">>".
    The file can be given by the full path as:
            /home/a.txt
    As to the file path format, type "help path" to get more information.
#

<help echo>
Format:    echo [comment]
-- Displays [comment] on the display or output files, followed by a new line. Multiple spaces/tabs will be reduced to a single space.
    e.g.   echo hello    world
    The words "hello world" will display on the screen.
    [comment] can be multiple words either typed from the keyboard or read from one or more input files.
    e.g.   echo <a.txt    or    echo <a.txt <b.txt

    And you can display or output the contents into one file or more than one file:
    e.g.   echo hello world >c.txt  or  echo hello world >c.txt >d.txt
    The token ">" can be replaced by ">>"; type "help redirection" to see the difference between ">" and ">>".
    You can use both input redirection and output redirection:
    e.g.   echo <a.txt <b.txt  >c.txt >d.txt
    The file can be given by the full path as:
           echo </home/a.txt  >/home/b.txt
    As to the file path format, type "help path" to get more information.
#

<help help>
Format:    help    or    ?
-- Displays the user manual. Type "help [command]" to get detailed usage of a command:
    e.g.    help dir    or  ? dir
    Type "help command" to see the internal commands.
    And you can display or output the help information into one file or more than one file as:
    e.g.    help dir >c.txt      or    help dir >c.txt >d.txt
    The token ">" can be replaced by ">>"; type "help redirection" to see the difference between ">" and ">>".
    The file can be given by the full path as:
            help dir >/home/a.txt
    As to the file path format, type "help path" to get more information.
#

<help myshell>
Format:     myshell batchfile
or          myshell <batchfile
-- Keeps reading a line of command from batchfile and executes it.
    e.g.    myshell test.bat    or    myshell <test.bat
    where test.bat is a batchfile containing many lines of commands.

    You can display or output the execution results into one file or more than one file as:
    e.g.    myshell test.bat >c.txt      or    myshell test.bat >c.txt >d.txt
    The token ">" can be replaced by ">>"; type "help redirection" to see the difference between ">" and ">>".
    The file can be given by the full path as:
    e.g.    myshell  </home/a.txt  >/home/username/b.txt
    As to the file path format, type "help path" to get more information. The results will then be directed to the output file.
#

<help pause>
Format:     pause
-- Displays "Press Enter to continue..." and pauses operation of the shell until the 'Enter' key is pressed (ignoring any intervening non-'Enter' input).
#

<help pwd>
Format:     pwd
-- Shows the PWD environment variable. If you want to list all the environment strings, use the command "environ"; type "help environ" for details.
    You can display or output the execution results into one file or more than one file as:
    e.g.    pwd >c.txt      or    pwd >c.txt >d.txt
    The token ">" can be replaced by ">>"; type "help redirection" to see the difference between ">" and ">>".
    The file can be given by the full path as:
    e.g.    pwd    >/home/a.txt
    As to the file path format, type "help path" to get more information. The results will then be directed to the output file.
#

<help quit> <help exit>
Format:    quit    or    exit
-- Exits myshell; no arguments are required.
#

<help path> <help ..> <help .> <help ~>
======================================================================
==================== Directory Path and File Path ====================
======================================================================

The following symbols can be used in paths:
    ..    — Refers to the parent directory
    .     — Refers to the current directory
    ~     — Refers to the user's home directory

If a filename or directory name contains a white space, it must be escaped using a backslash (\ ).
    e.g.   echo <a\ b   (displays the contents of file "a b")
An unescaped white space in a path will result in a "Path Error" being reported on the screen.
#
