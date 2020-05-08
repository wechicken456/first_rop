#include<stdio.h>
#include<string.h>
void vuln();
void win();
int main(int argc, char *argv[]){
	vuln(argv[1]);
	return 0;	
}
void win (){
	fflush(stdout);
	puts("Pwned!!");
}
void vuln(char *input){
	char buffer[256];
	strcpy(buffer, input);
}
