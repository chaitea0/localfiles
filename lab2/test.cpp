#include <cstring>
#include <iostream>

int main(){
	
	char *s = "hello";
	char ss[20];
	int length = strlen(s);
	for(int i = 0; i < length; i ++){
		ss[i] = s[length-i];
	}
	printf("%s", ss);
	printf("?");
}