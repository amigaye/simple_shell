#include "main.h"

/**
 * execmd - Entry point
 *
 * Return: Always 0 (success)
 */

void cmd_exe(char **argv){
	char *command = NULL;
	char *actual_command = NULL;

	if (argv){
		/* get the command */
		command = argv[0];

		/* generate the path */
		actual_command = get_location(command);

		/*execute the command with execve */
		if (execve(actual_command, argv, NULL) == -1){
			perror("./shell");
		};
    	}
}
