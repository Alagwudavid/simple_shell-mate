#include "main.h"

int main(int ac, char **argv)
{
	char *prompt = "$ ";
	char *linepointer; // store buffer address
	size_t n = 0;

	printf("%s", prompt);
	getline(&linepointer, &n, stdin);

	free(linepointer);
	return (0);
}
