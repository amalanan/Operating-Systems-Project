// Title: myshell.c
//- Amal Yasser Farouk Anan             | ID: 220201122
//- Aseel Khalil Omar Hodhod            | ID: 220200323  
//- Dalia Jamal Taher Abu Sharekh       | ID: 220200747

#include "myshell.h"

int main(int argc, char *argv[]) {
    char buf[MAX_BUFFER], pwd[MAX_ARGS];            // Buffer for command input and current directory
    char shell_path[MAX_ARGS] = "shell=";           // To store myshell path for environment variable
    char readme_path[MAX_ARGS] = "readme_path=";    // To store readme path for environment variable
    char newpath[MAX_ARGS * 1000];                  // New PATH variable with additional directory
    int len;

    // Get the current PATH and append ":"
    strcpy(newpath, getenv("PATH"));
    strcat(newpath, ":");

    // If myshell was not called as "./myshell" or "myshell", extract full path
    if (strcmp(argv[0], "./myshell") && strcmp(argv[0], "myshell")) {
        len = strlen(argv[0]);
        while (len && argv[0][len] != '/')
            len--;
        argv[0][len] = '\0';
        strcpy(pwd, argv[0]);
        get_fullpath(pwd, argv[0]);  // Get the absolute path
        printf("%s\n", pwd);         // Print the absolute path (for debug/info)
    } else {
        strcpy(pwd, getenv("PWD"));  // Use current working directory
    }

    // Add the current directory to PATH environment variable
    strcat(newpath, pwd);
    setenv("PATH", newpath, 1);

    // Set environment variable for myshell path
    strcat(shell_path, pwd);
    strcat(shell_path, "/myshell");
    putenv(shell_path);

    // Set environment variable for readme file path
    strcat(readme_path, pwd);
    strcat(readme_path, "/readme");
    putenv(readme_path);

    // If arguments are provided (e.g., ./myshell script.bat), execute them
    if (argc > 1) {
        strcpy(buf, "myshell ");
        int i;
        for (i = 1; i < argc; i++) {
            strcat(buf, argv[i]);
            strcat(buf, "  ");
        }
        Execute(buf);  // Execute the command/script
    } else {
        // Interactive mode (if run as ./myshell without arguments)
        Command_clear();
        fprintf(stderr, "\n---------------- OUR SHELL ----------------\n");
        fprintf(stderr, "----------- DALIA, AMAL, ASEEL -----------\n\n");
        fprintf(stderr, "...Type 'help' to show the manual.\n");
        fprintf(stderr, "To show the information about the command you want...\n\n");

        Command_shell(stdin, NULL, NULL);  // Launch interactive shell
    }

    return 0;
}
