#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Variable for size of input
	int *sz = malloc(sizeof(int));

	// Open file. Close program if unable to open
	FILE *fp = fopen("input", "r");
	if (fp == NULL)
	{
		perror("Failed to open file \"input\"");
		return EXIT_FAILURE;
	}

	// Determine the size of input file
	fseek(fp, 0L, SEEK_END);
	*sz = ftell(fp);
	fseek(fp, 0L, SEEK_SET);

	char *captcha = malloc(sizeof(char) * *sz);
	printf("captcha %s\n",
	fgets(*captcha, *sz, fp);
	fclose(fp);

	int len = sizeof(*captcha);
	int i = 0;
	for (len, i;i < len; i++)
	{
		//printf("%d\n",i);
	}

	printf("%s\n", *captcha);

	free(sz);
	free(captcha);
}
