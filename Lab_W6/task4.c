#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

// Function to calculate the factorial of a given number
int factorial(int n) {
    // TODO: Implement the factorial function
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int N, i;
    printf("Enter the number of child processes to create: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        pid_t pid = fork();

        if (pid < 0) {
            // Fork failed
            printf("Fork failed for child %d\n", i);
            exit(1);
        } else if (pid == 0) {
            // Child process
            printf("Child process with PID: %d and Parent PID: %d\n", getpid(), getppid());
            
            int result = factorial(i + 1); // Example calculation input
            // TODO: Print the result
            printf("Child %d: Factorial of %d is %d\n", i, i + 1, result);


            exit(0); // Child process ends
        } else {
            // Parent process
            // TODO: Print appropriate message indicating the creation of a child process
            printf("Parent: Created child process with PID: %d\n", pid);

        }
    }

    // TODO: Write a loop to wait for all child processes
    for (i = 0; i < N; i++) {
        wait(NULL);
    }

    printf("All children have terminated. Parent process exiting.\n");
    return 0;
}

/**
* In this part of the code, a loop is used to wait for all the child processes to complete before the parent process exits. Let's break it down step by step:

The loop is iterating N times, where N is the number of child processes you want to create. This ensures that the parent process waits for each child process to finish before it continues execution or exits.

Within each iteration of the loop, the wait() system call is used to wait for a child process to terminate. The wait() function suspends the execution of the calling process until one of its child processes terminates. It also reaps the exit status of the terminated child process.

The wait(NULL) call is used here. The wait() function returns the process ID (pid) of the terminated child process. The argument passed to wait() can be a pointer to an integer where the exit status of the terminated child will be stored. Passing NULL as the argument means that you're not interested in the exit status.

Since the loop is iterating N times and calling wait() each time, the parent process will wait for each of its child processes to finish before moving on to the next iteration.

Once all child processes have finished, the parent process will exit the loop, and the program will proceed to the next line after the loop.
*/