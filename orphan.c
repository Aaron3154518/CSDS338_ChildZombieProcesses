#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[]) {

    // Child
    if (fork() == 0) {
        sleep(20);
        printf("Child Finished");
    }

	sleep(10);
    printf("Parent Finished");

    return 0;
}
