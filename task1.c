#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t child_pid;

    // Create a child process
    child_pid = fork();

    if (child_pid < 0) {
        perror("Fork failed");
        exit(EXIT_FAILURE);
    }

    if (child_pid == 0) {
        // This code is executed by the child process

        // Define the "echo" command with a string argument
        char *echo_command[] = {"echo", "Hello, World!", NULL};

        // Execute the "echo" command
        execvp("echo", echo_command);

        // If execvp fails, print an error message
        perror("execvp failed");
        exit(EXIT_FAILURE);
    } else {
        // This code is executed by the parent process

        // Wait for the child process to finish
        int status;
        wait(&status);

        // Check if the child process exited successfully
        if (WIFEXITED(status)) {
            printf("Child process exited with status %d\n", WEXITSTATUS(status));
        } else {
            printf("Child process did not exit successfully\n");
        }

        // Define the "less" command with a filename argument
        char *less_command[] = {"less", "example.txt", NULL};

        // Execute the "less" command
        execvp("less", less_command);

        // If execvp fails, print an error message
        perror("execvp failed");
        exit(EXIT_FAILURE);
    }

    return 0;
}


    for (i = 0; i < N; i++) {
        wait(NULL);
    }

    printf("All children have terminated. Parent process exiting.\n");
    return 0;
}
