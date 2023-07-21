#include "main.h"

int main(int ac, char **argv)
{
	char *prompt = "$ ";
	char *linepointer = NULL; // store buffer address
	size_t n = 0;

	(void)ac;
	(void)argv;

	/* create an infinite loop*/
	for (;;)
	{
		printf("%s", prompt);
		getline(&linepointer, &n, stdin);

		printf("%s\n", linepointer);
	}

	/*free up allocate memory */
	free(linepointer);
	return (0);
}
