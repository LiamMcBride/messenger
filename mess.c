#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {

	printf("Hello mess!\n");
	
	if(strcmp(argv[1], "init") == 0){
		printf("Initialized directory\n");
	}

	return 0;
}
