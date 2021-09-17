#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[]) {

    if (fork() == 0) {
        // Child
        sleep(20);
        printf("Child Finished");
    } else {
        // Parent
        sleep(10);
        printf("Parent Finished");
    }

    return 0;
}
