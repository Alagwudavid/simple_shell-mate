#include "main.h"

int main(int ac, char **argv)
{
	char *prompt = "$ ";
	char *linepointer = NULL; // store buffer address
	size_t n = 0;

	(void)ac;
	(void)argv;

	/* create an infinitre loop*/
	for (;;)
	{
		printf("%s", prompt);
		getline(&linepointer, &n, stdin);

		printf("%s\n", linepointer);

		/*fre up allocate memory */
		free(linepointer);
	}
	return (0);
}
