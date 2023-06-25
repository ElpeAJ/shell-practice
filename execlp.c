#include <stdio.h>
#include <unistd.h>

/**
 * main - function prototype
 * In this example, the execlp() function is used to execute the ls -l
 * command. The first argument "ls" represents the command to be
 * executed, and the second argument "ls" is passed as the name of the
 * command. The "-l" option is passed as an additional argument.
 * If execlp() encounters an error, it returns -1, and the program prints an
 * error message using perror().
 * Note that after execlp() is called, the current process image is replaced,
 * and the subsequent code in the program will not be executed unless
 * execlp() encounters an error and returns
 * It's important to ensure that the arguments passed to execlp() are
 * correct and in the expected format for the command being executed
 */
int main() {
    execlp("ls", "ls", "-l", NULL);

    // If execlp() returns, it indicates an error
    perror("execlp");
    return 1;
}

