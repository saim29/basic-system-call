#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/syscall.h>
#include <linux/kernel.h>

int main(int argc, char *argv[]) {

    int opt;
    char *str;
    int key;

    while ((opt = getopt(argc, argv, "s:k:")) != -1) {
        switch (opt) {
        case 's':
            str = malloc(strlen(optarg));
            strcpy(str, optarg);
            break;
        case 'k':
            key = atoi(optarg);
            break;
        }
    }

    printf("string: %s\n", str);
    printf("key: %d\n", key);

    int status = syscall(548, str, key);
    printf("sys_s2_encrypt exited with status: %d\n", status);


    exit(EXIT_SUCCESS);

}
