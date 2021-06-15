#include <stdio.h>
#include <string.h>

#define MAXLENGTH 100

int main(int argc, char **argv)
{
	
	FILE *fb;
	char c, s[MAXLENGTH], ct[]={'.', 'c'};

	strcpy(s, argv[0]);
	strncat(s, ct, 2);/* adding '.c' for reading the file*/
	
	if ((fb = fopen(s , "r")) == NULL)
		printf("Cannot open file %s\n", s);
	else{
		while ((c = fgetc(fb)) != EOF)
		{
			printf("%c", c);
		}
	}
	
	fclose(fb);

	return 0;
}
