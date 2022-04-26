#include <stdio.h>
#include <string.h>
int main()
{
  	char str[100], revstr[100];
  	int i, j, len;
  	scanf(" %[^
]s",&str);
  	j = 0;
  	len = strlen(str);
  	for (i = len - 1; i >= 0; i--)
  	{
  		revstr[j++] = str[i];
  	}
  	revstr[i] = NULL;
  	printf("%s", revstr); 	
  	return 0;
}