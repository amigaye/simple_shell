#include "main.h"

/**
 * execmd - Entry point
 *
 * Return: Always 0 (success)
 */

void cmd_exe(char **argv){
    char *command = NULL;

    if (argv){
        /* get the command */
        command = argv[0];

        /* execute the command with execve */
        if (execve(command, argv, NULL) == -1){
            perror("./shell");
        };
    }

}
