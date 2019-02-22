#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


int main() {
    int fd = open("./test", O_RDONLY);
    char buffer[5];
    lseek(fd, 3, SEEK_SET);
    read(fd, buffer, 4);
    buffer[4] = '\0';
    printf("%s\n", buffer);
}
