#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[]) {

    if (fork() == 0) {
		// Child
        printf("Child Finished");
    } else {
     	// Parent
   	    sleep(20);
        printf("Parent Finished");
    }

    return 0;
}
