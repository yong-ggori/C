#include <stdio.h>

char* my_strcpy(char* pd, char* ps);

int main() {
	char str[20] = "strawberry";
	//char str2[20];

	//gets(str2);
	my_strcpy(str, "apple");

	printf("바꾼 후 문자열 : %s\n", str);

	return 0;
}
char* my_strcpy(char* pd, char* ps) {
	char* res = pd;

	for (;*pd != '\0';) {
		*pd++ = *ps++;
	}
	*pd = '\0'; 

	return res;
}