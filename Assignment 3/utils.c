#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int randFirstRun = 1;

void clrBuf() {
	while(getchar() != '\n');
}

int lenStr(char *string) {
	int len=0;
	for(int i=0; string[i] != '\0' && string[i] != '\n';i++) {
		len++;
	}
	return len;
}

int strRealLen(char *string) {
	int actualLen = lenStr(string);
	char newString[actualLen];
	for(int i=0; string[i] != '\0'; i++) {
	 	newString[i] == string[i];
	}
	string = newString;
	return 0;
}

int randNum() {
	if(randFirstRun) {
		time_t t;
		srand((unsigned) time(NULL));
		randFirstRun = 0;
	}
	return rand();
}

int randModNum(int in) {
	int num = randNum();
	num = num%in;
	num = ++num;
	return num;
}

int lesser(int a, int b) {
	if(a<b) {
		return a;
	}
	return b;
}

int greater(int a, int b) {
	if(a>b) {
		return a;
	}
	return b;
}

int randRange(int a, int b) {
	return randModNum((b-a)+1)+a;
}

int printStr(char string[], int len) {
	for(int i=0;i<len;i++) {
		printf("%c", string[i]);
	}
	printf("\n");
}