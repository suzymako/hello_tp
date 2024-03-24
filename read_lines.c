#include<stddef.h>
#include <stdbool.h>
#include <stdio.h>

bool read_line(char *str, size_t max)
{
	size_t i;
	for(i= 0; i<max-1; ++i){
		char c;
		if(scanf("%c", &c) != 1)
			return false;
		else if( c == '\n')
			break;
		
		str[i] = c;
	}
	
	str[i] = '\0';
	
	return true;
}

int main(void)
{
	char str[255];
	printf("quel est votre phrase ?");
	
	if(read_line(str, sizeof(str)))
		printf("Votre phrase est : %s !\n", str);
		
	return 0;
}
