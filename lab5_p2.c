/*	Author:	Parker Mathewson
 *	Date: 2/29/12
 *	comments: This program is to write a static string in reverse. We are to use
 *			string arithmetic in order to do this with pointers returning
 *			strings.
 */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void string_reverse(char* static_string_2, char* string_number_2_2)
{
	int counter=0;
	int j=strlen(static_string_2);
	for(counter=0;counter<j;counter++)
	{
		*(string_number_2_2 + counter) = *(static_string_2 + j - counter -1);
	}
}

int main(void)
{
	char *static_hello_string="Hello, World!";
	char *string_number_2;

	string_number_2=(char*)malloc(14 * sizeof(char));

	string_reverse(static_hello_string,string_number_2);

	printf("%s",static_hello_string);
	printf("\n%s\n",string_number_2);

	free(string_number_2);
	return(0);
}
