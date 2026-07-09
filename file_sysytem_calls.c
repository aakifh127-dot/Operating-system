#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd;
    char msg[] = "Hello";
    char buf[6];

    fd = open("file.txt", O_CREAT | O_RDWR, 0644);

    write(fd, msg, 5);

    lseek(fd, 0, SEEK_SET);

    read(fd, buf, 5);
    buf[5] = '\0';

    printf("Data: %s\n", buf);

    close(fd);

    return 0;
}
