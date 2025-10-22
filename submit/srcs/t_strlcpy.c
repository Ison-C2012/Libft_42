#include <bsd/string.h>
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char	*s;
	int		rc;

	s = (char *)calloc(sizeof(char), 10);
	rc = strlcpy(s, "one", 4);
	printf("%s: %d\n", s, rc);
	free(s);
	s = (char *)calloc(sizeof(char), 10);
	rc = strlcpy(s, "one", 2);
	printf("%s: %d\n", s, rc);
	free(s);
	s = (char *)calloc(sizeof(char), 10);
	rc = strlcpy(s, "", 4);
	printf("%s: %d\n", s, rc);
	free(s);
	s = (char *)calloc(sizeof(char), 10);
	rc = strlcpy(s, "one", 10);
	printf("%s: %d\n", s, rc);
	free(s);

/*SEGF example*/
/*
   s = (char *)calloc(sizeof(char), 10);
	rc = strlcpy(s, "one,two,three", 15);
	printf("%s: %d\n", s, rc);
	free(s);
*//*
	s = (char *)calloc(sizeof(char), 10);
	rc = strlcpy(s, (char*)NULL, 4);
	printf("%s: %d\n", s, rc);
	free(s);
 */

}
